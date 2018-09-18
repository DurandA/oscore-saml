/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file or main.c
 * to avoid loosing it when reconfiguring.
 */

#include "cryptoauthlib_main.h"
#include <atmel_start.h>

#include <cryptoauthlib_interface_config.h>

ATCAIfaceCfg ATECC508A_desc = {.iface_type            = ATCA_I2C_IFACE,
                               .devtype               = ATECC508A,
                               .atcai2c.slave_address = CONF_ATECC508A_I2C_ADDRESS,
                               .atcai2c.bus           = 1,
                               .atcai2c.baud          = CONF_ATECC508A_I2C_FREQUENCY,
                               .wake_delay            = CONF_ATECC508A_I2C_WAKEUP_DELAY,
                               .rx_retries            = CONF_ATECC508A_I2C_RXRETRY,
                               .cfg_data              = &I2C_0};

void ATECC508A_init(void)
{
	atcab_init(&ATECC508A_desc);
}

void ATECC508A_example(void)
{
	ATCA_STATUS status;
	uint8_t     serialnum[ATCA_SERIAL_NUM_SIZE];

	/* Enable I2C Driver */
	i2c_m_sync_enable(&I2C_0);

	/* Init ATECC508A */
	ATECC508A_init();

	do {
		status = atcab_read_serial_number(serialnum);
	} while (status != ATCA_SUCCESS);
}

void cryptoauthlib_init(void)
{
}
