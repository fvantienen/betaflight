/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"

#include "drivers/timer.h"
#include "drivers/timer_def.h"
#include "drivers/dma.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TIM2,  CH3, PA2,  TIM_USE_PWM | TIM_USE_PPM,  TIMER_INPUT_ENABLED,  0 ), // PPM IN  DMA1_ST1 (shared with RX1)
    DEF_TIM(TIM3,  CH1, PC6,  TIM_USE_MOTOR,              TIMER_OUTPUT_ENABLED, 0 ), // SERVO1  DMA1_ST4
    DEF_TIM(TIM3,  CH2, PC7,  TIM_USE_MOTOR,              TIMER_OUTPUT_ENABLED, 0 ), // SERVO2  DMA1_ST5
    DEF_TIM(TIM3,  CH3, PC8,  TIM_USE_MOTOR,              TIMER_OUTPUT_ENABLED, 0 ), // SERVO3  DMA1_ST7
    DEF_TIM(TIM3,  CH4, PC9,  TIM_USE_MOTOR,              TIMER_OUTPUT_ENABLED, 0 ), // SERVO4  DMA1_ST2
    DEF_TIM(TIM2,  CH1, PA0,  TIM_USE_MOTOR,              TIMER_OUTPUT_ENABLED, 0 ), // SERVO5  DMA1_ST5 (overlaps SERVO2)
    DEF_TIM(TIM2,  CH2, PA1,  TIM_USE_MOTOR,              TIMER_OUTPUT_ENABLED, 0 ), // SERVO6  DMA1_ST6
    DEF_TIM(TIM4,  CH1, PB6,  TIM_USE_MOTOR,              TIMER_OUTPUT_ENABLED, 0 ), // SERVO7  DMA1_ST0
    DEF_TIM(TIM4,  CH2, PB7,  TIM_USE_MOTOR,              TIMER_OUTPUT_ENABLED, 0 ), // SERVO8  DMA1_ST3
};


