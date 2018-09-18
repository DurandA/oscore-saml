#include <atmel_start.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
	while (1) {
		delay_ms(500);
		printf("helloworld");
		gpio_toggle_pin_level(LED0);
	}
}
