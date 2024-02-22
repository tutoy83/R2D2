#ifndef TIMER_H
#define TIMER_H
#include "main.h"

extern unsigned long timestamp;

void InitTimer23(void);
void InitTimer1(void);
void SetFreqTimer1(float freq);
void InitTimer4(void);
void __attribute__((interrupt, no_auto_psv)) _T4Interrupt(void);
void SetFreqTimer4(float freq4);

#endif /* TIMER_H */