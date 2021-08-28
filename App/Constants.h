#ifndef CONSTANTS_H_
#define CONSTANTS_H_

#include "sgx_eid.h"
#include <tchar.h>

#define TOKEN_FILENAME   _T("Enclave.token")
#define ENCLAVE_FILENAME _T("Enclave.signed.dll")

#define SGX_AESCTR_KEY_SIZE 16 // 128-bit key
#define SGX_AESCTR_CTR_SIZE 16
#define READ_BUFFER_SIZE 25

extern sgx_enclave_id_t global_eid;

#endif // CONSTANTS_H_
