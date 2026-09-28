// lab4_TIMx.c
// source code for configuring TIM6 & TIM7

#include "lab4_TIMx.h"
#include "lab4_RCC.h"

//configure TIM6 to count 1ms
void configureTIM6() {
    //enable TIM6 clock
    RCC->APB1ENR1 |=(1<<4);

    //cofigure URS so only overflow triggers an update event
    TIM6->CR1 |=  (1<<2); 

    //configure Arr so it divides the clock by 4000 (1ms)
    TIM6->ARR = 3999u;

    //enable counter
    TIM6->CR1 |= (1<<0);

}

void configureTIM7() {
    //enable TIM7 clock
    RCC->APB1ENR1 |=(1<<5);

    //cofigure URS so only overflow triggers an update event
    TIM7->CR1 |=  (1<<2); 

    //configure Arr so it divides the clock by 4 (1us)
    TIM7->ARR = 4u;
    
    //enable counter
    TIM7->CR1 |= (1<<0);

}