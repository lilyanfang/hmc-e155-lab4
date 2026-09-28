// lab4_TIMx.h
// header for the TIM6 timer

#ifndef lab4_TIMx_H
#define lab4_TIMx_H
#include <stdint.h>

// definitions 
#define __IO volatile

//base addresses 
#define TIM6_BASE (0x40001000UL) //base address of TIM6
#define TIM7_BASE (0x40001400UL) //base address of TIM7


typedef struct 
{
__IO uint32_t CR1;
__IO uint32_t CR2;
uint32_t reserved1; 
__IO uint32_t DIER;
__IO uint32_t SR;
__IO uint32_t EGR;
uint32_t reserved2;
uint32_t reserved3;
uint32_t reserved4;
__IO uint32_t CNT;
__IO uint32_t PSC;
__IO uint32_t ARR;
} TIMx_TypeDef;
 
#define TIM6 ((TIMx_TypeDef *) TIM6_BASE)
#define TIM7 ((TIMx_TypeDef *) TIM7_BASE)

void configureTIM6(void);
void configureTIM7(void);
#endif