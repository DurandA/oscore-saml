#include <atmel_start.h>

/**
 * Initializes MCU, drivers and middleware in the project
 **/
void atmel_start_init(void)
{
	system_init();
	trustzone_manager_init();
	cryptoauthlib_init();
	stdio_redirect_init();
}
