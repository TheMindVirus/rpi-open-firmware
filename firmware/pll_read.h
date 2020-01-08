#pragma once

uint32_t clk_get_freq(volatile uint32_t *divreg, volatile uint32_t *ctlreg);
uint32_t get_vpu_per_freq();
uint32_t plla();
uint32_t pllb();
uint32_t pllc();
uint32_t plld();
uint32_t pllh();