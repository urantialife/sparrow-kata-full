#ifndef __PROCESS_MANAGER_BINDINGS_H__
#define __PROCESS_MANAGER_BINDINGS_H__

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#define RAW_BUNDLE_ID_DATA_SIZE 100

#define DEFAULT_BUNDLE_ID_CAPACITY 64

typedef enum ProcessManagerError {
  Success = 0,
  BundleIdInvalid,
  PackageBufferLenInvalid,
  BundleNotFound,
  BundleFound,
  BundleRunning,
  UnknownError,
  DeserializeError,
  SerializeError,
  ObjCapInvalid,
  InstallFailed,
  UninstallFailed,
  StartFailed,
  StopFailed,
  SuspendFailed,
  ResumeFailed,
} ProcessManagerError;

typedef uint8_t RawBundleIdData[RAW_BUNDLE_ID_DATA_SIZE];

#endif /* __PROCESS_MANAGER_BINDINGS_H__ */
