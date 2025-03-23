#include driver_teensy41_IEEE1588.h
#include <stdint.h>

// IEEE 1588
static volatile uint32_t ieee1588Seconds = 0;  // Since the timer was started
static volatile bool doTimestampNext = false;
static volatile bool hasTxTimestamp = false;
static volatile struct timespec txTimestamp = {0, 0};

void enet_isr();