// This file was autogenerated by some hot garbage in the `uniffi` crate.
// Trust me, you don't want to mess with it!

#pragma once

#include <stdbool.h>
#include <stdint.h>

// The following structs are used to implement the lowest level
// of the FFI, and thus useful to multiple uniffied crates.
// We ensure they are declared exactly once, with a header guard, UNIFFI_SHARED_H.
#ifdef UNIFFI_SHARED_H
    // We also try to prevent mixing versions of shared uniffi header structs.
    // If you add anything to the #else block, you must increment the version suffix in UNIFFI_SHARED_HEADER_V4
    #ifndef UNIFFI_SHARED_HEADER_V4
        #error Combining helper code from multiple versions of uniffi is not supported
    #endif // ndef UNIFFI_SHARED_HEADER_V4
#else
#define UNIFFI_SHARED_H
#define UNIFFI_SHARED_HEADER_V4
// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️

typedef struct RustBuffer
{
    int32_t capacity;
    int32_t len;
    uint8_t *_Nullable data;
} RustBuffer;

typedef int32_t (*ForeignCallback)(uint64_t, int32_t, RustBuffer, RustBuffer *_Nonnull);

typedef struct ForeignBytes
{
    int32_t len;
    const uint8_t *_Nullable data;
} ForeignBytes;

// Error definitions
typedef struct RustCallStatus {
    int8_t code;
    RustBuffer errorBuf;
} RustCallStatus;

// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️
#endif // def UNIFFI_SHARED_H

void ffi_breez_sdk_a35c_BlockingBreezServices_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_disconnect(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_configure_node(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_send_payment(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_send_spontaneous_payment(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_receive_payment(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_pay_lnurl(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_withdraw_lnurl(
      void*_Nonnull ptr,RustBuffer request,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_lnurl_auth(
      void*_Nonnull ptr,RustBuffer req_data,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_report_issue(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_node_credentials(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_node_info(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_sign_message(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_check_message(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_backup_status(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_backup(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_list_payments(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_payment_by_hash(
      void*_Nonnull ptr,RustBuffer hash,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_set_payment_metadata(
      void*_Nonnull ptr,RustBuffer hash,RustBuffer metadata,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_redeem_onchain_funds(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_fetch_fiat_rates(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_list_fiat_currencies(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_list_lsps(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_connect_lsp(
      void*_Nonnull ptr,RustBuffer lsp_id,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_fetch_lsp_info(
      void*_Nonnull ptr,RustBuffer lsp_id,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_open_channel_fee(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_lsp_id(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_lsp_info(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_close_lsp_channels(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_register_webhook(
      void*_Nonnull ptr,RustBuffer webhook_url,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_unregister_webhook(
      void*_Nonnull ptr,RustBuffer webhook_url,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_receive_onchain(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_in_progress_swap(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_rescan_swaps(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_redeem_swap(
      void*_Nonnull ptr,RustBuffer swap_address,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_list_refundables(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_prepare_refund(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_refund(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_list_swaps(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_fetch_reverse_swap_fees(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_onchain_payment_limits(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_prepare_onchain_payment(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_in_progress_onchain_payments(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_claim_reverse_swap(
      void*_Nonnull ptr,RustBuffer lockup_address,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_pay_onchain(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_execute_dev_command(
      void*_Nonnull ptr,RustBuffer command,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_generate_diagnostic_data(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_BlockingBreezServices_sync(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_recommended_fees(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_buy_bitcoin(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_BlockingBreezServices_prepare_redeem_onchain_funds(
      void*_Nonnull ptr,RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
void ffi_breez_sdk_a35c_LogStream_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void ffi_breez_sdk_a35c_EventListener_init_callback(
      ForeignCallback  _Nonnull callback_stub,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull breez_sdk_a35c_connect(
      RustBuffer req,uint64_t listener,
    RustCallStatus *_Nonnull out_status
    );
void breez_sdk_a35c_set_log_stream(
      uint64_t log_stream,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_parse_invoice(
      RustBuffer invoice,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_parse_input(
      RustBuffer s,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_mnemonic_to_seed(
      RustBuffer phrase,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_default_config(
      RustBuffer env_type,RustBuffer api_key,RustBuffer node_config,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_static_backup(
      RustBuffer req,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer breez_sdk_a35c_service_health_check(
      RustBuffer api_key,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_breez_sdk_a35c_rustbuffer_alloc(
      int32_t size,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_breez_sdk_a35c_rustbuffer_from_bytes(
      ForeignBytes bytes,
    RustCallStatus *_Nonnull out_status
    );
void ffi_breez_sdk_a35c_rustbuffer_free(
      RustBuffer buf,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_breez_sdk_a35c_rustbuffer_reserve(
      RustBuffer buf,int32_t additional,
    RustCallStatus *_Nonnull out_status
    );
