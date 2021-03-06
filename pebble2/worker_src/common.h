#pragma once
#include <inttypes.h>

typedef enum worker_key {
  WORKER_KEY_START_LOGGING,
  WORKER_KEY_STOP_LOGGING,
  WORKER_KEY_TOGGLE_LOGGING,
  WORKER_KEY_STATUS,
  WORKER_KEY_DEVICE_STATE,
  WORKER_KEY_DEVICE_STATE_ACCEL,
  WORKER_KEY_DEVICE_STATE_BATTERY,
  WORKER_KEY_DEVICE_STATE_HEART_RATE,
} WorkerKey;

typedef enum worker_status {
  WORKER_STATUS_RUNNING,
  WORKER_STATUS_DISABLED,
} WorkerStatus;

typedef struct DeviceState {
  int16_t x, y, z;
  int32_t heartRate;
  int32_t heartRateFiltered;
  int8_t battery_level;
  int8_t battery_charging;
  int8_t battery_plugged;
} DeviceState;