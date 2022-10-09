/**
* \version 1.0
* \author Bazhen Levkovets
* \date 2019 
*************************************************************************************
* \copyright	Bazhen Levkovets
* \copyright	Brovary
* \copyright	Ukraine
*************************************************************************************
*/

#ifndef ADC_LIGHT_STM32F103_HAL_INCLUDED_H_
#define ADC_LIGHT_STM32F103_HAL_INCLUDED_H_
#ifdef ADC
/*
**************************************************************************
*								INCLUDE FILES
**************************************************************************
*/

	#include "main.h"
	#include "adc.h"

/*
**************************************************************************
*								    DEFINES                     
**************************************************************************
*/

/*
**************************************************************************
*								   DATA TYPES
**************************************************************************
*/

/*
**************************************************************************
*								GLOBAL VARIABLES
**************************************************************************
*/

/*
**************************************************************************
*									 MACRO'S                     
**************************************************************************
*/

/*
**************************************************************************
*                              FUNCTION PROTOTYPES
**************************************************************************
*/
	HAL_StatusTypeDef	ADC1_Init(		ADC_HandleTypeDef *_hadc, uint32_t channel ) ;
	uint32_t			ADC1_GetValue(	ADC_HandleTypeDef *_hadc, uint32_t channel ) ;

	//	uint32_t adc_u32 = ADC1_GetValue( &hadc1, ADC_CHANNEL_5 );
#endif
#endif /* ADC_LIGHT_STM32F103_HAL_INCLUDED_H_ */
