#include <stdint.h>

#define SRAM_START  0x20000000U                     /* Inicio da SRAM CORTEX-M */
#define SRAM_SIZE   (128U * 1024U)                  /* Tam. SRAM STM32F411 128K */
#define SRAM_END    ((SRAM_START) + (SRAM_SIZE))    /* Final da SRAM STM32F411 */
#define STACK_START SRAM_END                        /* Inicio da Stack */

int main(void);

void reset_handler     (void);
void nmi_handler       (void) __attribute__ ((weak, alias("default_handler")));
void hardfault_handler (void) __attribute__ ((weak, alias("default_handler")));
void memmanage_handler (void) __attribute__ ((weak, alias("default_handler")));
void busfault_handler  (void) __attribute__ ((weak, alias("default_handler")));
void usagefault_handler(void) __attribute__ ((weak, alias("default_handler")));
void svc_handler       (void) __attribute__ ((weak, alias("default_handler")));
void debugmon_handler  (void) __attribute__ ((weak, alias("default_handler")));
void pendsv_handler    (void) __attribute__ ((weak, alias("default_handler")));
void systick_handler   (void) __attribute__ ((weak, alias("default_handler")));

/* Variaveis exportadas pelo linker script */

extern uint32_t _sdata;       /* Inicio da secao .data */
extern uint32_t _edata;       /* Fim da secao .data */
extern uint32_t _la_data;     /* Endereco de carga na RAM da secao .data */
extern uint32_t _etext;

extern uint32_t _sbss;        /* Inicio da secao .bss */
extern uint32_t _ebss;        /* Fim da secao .bss */