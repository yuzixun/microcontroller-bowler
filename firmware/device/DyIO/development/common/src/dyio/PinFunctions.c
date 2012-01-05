#include "DyIO/DyIO_def.h"

DATA_STRUCT DATA;

void InitPinFunction(void){
	int i;
	for (i=0;i<NUM_PINS;i++){
		DATA.FUNCTION[i].HAS_ANALOG_IN=FALSE;
		DATA.FUNCTION[i].HAS_PWM=FALSE;
		DATA.FUNCTION[i].HAS_UART=FALSE;
		DATA.FUNCTION[i].HAS_SPI=FALSE;
		DATA.FUNCTION[i].HAS_COUNTER_INPUT= FALSE;
		DATA.FUNCTION[i].HAS_COUNTER_OUTPUT= FALSE;
		DATA.FUNCTION[i].HAS_DC_MOTOR = FALSE;
	}
	DATA.FUNCTION[0].HAS_SPI=TRUE;
	DATA.FUNCTION[1].HAS_SPI=TRUE;
	DATA.FUNCTION[2].HAS_SPI=TRUE;


	DATA.FUNCTION[4].HAS_PWM = TRUE;
	DATA.FUNCTION[5].HAS_PWM = TRUE;
	DATA.FUNCTION[6].HAS_PWM = TRUE;
	DATA.FUNCTION[7].HAS_PWM = TRUE;

	DATA.FUNCTION[4].HAS_DC_MOTOR = TRUE;
	DATA.FUNCTION[5].HAS_DC_MOTOR = TRUE;
	DATA.FUNCTION[6].HAS_DC_MOTOR = TRUE;
	DATA.FUNCTION[7].HAS_DC_MOTOR = TRUE;

	DATA.FUNCTION[8].HAS_DC_MOTOR = TRUE;
	DATA.FUNCTION[9].HAS_DC_MOTOR = TRUE;
	DATA.FUNCTION[10].HAS_DC_MOTOR = TRUE;
	DATA.FUNCTION[11].HAS_DC_MOTOR = TRUE;

	DATA.FUNCTION[8].HAS_ANALOG_IN = TRUE;
	DATA.FUNCTION[9].HAS_ANALOG_IN = TRUE;
	DATA.FUNCTION[10].HAS_ANALOG_IN = TRUE;
	DATA.FUNCTION[11].HAS_ANALOG_IN = TRUE;

	DATA.FUNCTION[12].HAS_ANALOG_IN = TRUE;
	DATA.FUNCTION[13].HAS_ANALOG_IN = TRUE;
	DATA.FUNCTION[14].HAS_ANALOG_IN = TRUE;
	DATA.FUNCTION[15].HAS_ANALOG_IN = TRUE;

	DATA.FUNCTION[16].HAS_UART =TRUE;
	DATA.FUNCTION[17].HAS_UART =TRUE;

	//Home buttons
	DATA.FUNCTION[0].HAS_COUNTER_INPUT = TRUE;
	DATA.FUNCTION[1].HAS_COUNTER_INPUT = TRUE;
	DATA.FUNCTION[2].HAS_COUNTER_INPUT = TRUE;
	DATA.FUNCTION[3].HAS_COUNTER_INPUT = TRUE;

	DATA.FUNCTION[0].HAS_COUNTER_OUTPUT = TRUE;
	DATA.FUNCTION[1].HAS_COUNTER_OUTPUT = TRUE;
	DATA.FUNCTION[2].HAS_COUNTER_OUTPUT = TRUE;
	DATA.FUNCTION[3].HAS_COUNTER_OUTPUT = TRUE;
	//Interuptibles

	DATA.FUNCTION[17].HAS_COUNTER_INPUT = TRUE;
	DATA.FUNCTION[19].HAS_COUNTER_INPUT = TRUE;
	DATA.FUNCTION[21].HAS_COUNTER_INPUT = TRUE;
	DATA.FUNCTION[23].HAS_COUNTER_INPUT = TRUE;

	//Direction
	DATA.FUNCTION[16].HAS_COUNTER_INPUT = TRUE;
	DATA.FUNCTION[18].HAS_COUNTER_INPUT = TRUE;
	DATA.FUNCTION[20].HAS_COUNTER_INPUT = TRUE;
	DATA.FUNCTION[22].HAS_COUNTER_INPUT = TRUE;

	//Interuptibles
	DATA.FUNCTION[17].HAS_COUNTER_OUTPUT = TRUE;
	DATA.FUNCTION[19].HAS_COUNTER_OUTPUT = TRUE;
	DATA.FUNCTION[21].HAS_COUNTER_OUTPUT = TRUE;
	DATA.FUNCTION[23].HAS_COUNTER_OUTPUT = TRUE;

	//Direction
	DATA.FUNCTION[16].HAS_COUNTER_OUTPUT = TRUE;
	DATA.FUNCTION[18].HAS_COUNTER_OUTPUT = TRUE;
	DATA.FUNCTION[20].HAS_COUNTER_OUTPUT = TRUE;
	DATA.FUNCTION[22].HAS_COUNTER_OUTPUT = TRUE;
}