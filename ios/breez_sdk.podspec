podspec_dir = File.dirname(__FILE__)
tag_version = "0.2.15"
framework = 'breez_sdkFFI.xcframework'
lib_name = "breez-sdk.#{tag_version}"
url = "https://github.com/breez/breez-sdk-swift/releases/download/#{tag_version}/breez_sdkFFI.xcframework.zip"
frameworks_dir = "bindings-swift"

`

if [ ! -d #{frameworks_dir}/#{framework} ]; then
    curl -L #{url} -o #{lib_name}.zip    
fi

if [ ! -d #{frameworks_dir}/#{framework} ]; then
    mkdir -p #{frameworks_dir}
    curl -L #{url} -o #{frameworks_dir}/#{lib_name}.zip
    cd #{frameworks_dir}
    unzip #{lib_name}.zip
    rm -rf __MACOSX
    rm #{lib_name}.zip    
fi
`

# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html.
# Run `pod lib lint breez_sdk.podspec` to validate before publishing.
Pod::Spec.new do |s|
  s.name             = 'breez_sdk'
  s.version          = "#{tag_version}"
  s.summary          = 'BreezSDK flutter plugin.'
  s.description      = <<-DESC
  BreezSDK flutter plugin.
                       DESC
  s.homepage         = 'https://breez.technology'
  s.license          = { :file => '../LICENSE' }
  s.author           = { 'Breez' => 'contact@breez.technology' }
  s.source           = { :git => "https://github.com/breez/breez-sdk-flutter.git", :tag => "#{s.version}" }
  s.source_files = 'Classes/**/*'
  s.on_demand_resources = { 'BreezSDK' => 'bindings-swift/Sources/BreezSDK/BreezSDK.swift' }
  s.dependency 'Flutter'
  s.platform = :ios, '11.0'  

  # Flutter.framework does not contain a i386 slice.
  s.pod_target_xcconfig = {'STRIP_STYLE' => 'non-global', 'DEFINES_MODULE' => 'YES', 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386' }
  s.swift_version = '5.0'
  s.vendored_frameworks = "bindings-swift/breez_sdkFFI.xcframework"
end
