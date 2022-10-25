/**
* \version 1.0
* \author bazhen.levkovets
* \date 2019 
*************************************************************************************
* \copyright	Bazhen Levkovets
* \copyright	Brovary
* \copyright	Ukraine
*************************************************************************************
*/

/*
**************************************************************************
*							INCLUDE FILES
**************************************************************************
*/
#include "adc_light_stm32f103_hal_sm.h"
#ifdef ADC_MODULE
//extern ADC_HandleTypeDef hadc1;

/*
**************************************************************************
*							LOCAL DEFINES
**************************************************************************
*/


/*
**************************************************************************
*							LOCAL CONSTANTS
**************************************************************************
*/


/*
**************************************************************************
*						    LOCAL DATA TYPES
**************************************************************************
*/


/*
**************************************************************************
*							  LOCAL TABLES
**************************************************************************
*/

/*
**************************************************************************
*								 MACRO'S
**************************************************************************
*/


/*
**************************************************************************
*						 LOCAL GLOBAL VARIABLES
**************************************************************************
*/

/*
**************************************************************************
*                        LOCAL FUNCTION PROTOTYPES
**************************************************************************
*/

/*
**************************************************************************
*                           GLOBAL FUNCTIONS
**************************************************************************
*/

HAL_StatusTypeDef ADC1_Init(	ADC_HandleTypeDef	*_hadc	,
								uint32_t 			channel	) {
    ADC_ChannelConfTypeDef	sConfig						;
    sConfig.Channel 		= channel					;
    sConfig.Rank 			= 1							;
    sConfig.SamplingTime 	= ADC_SAMPLETIME_13CYCLES_5	;
    HAL_StatusTypeDef res = HAL_ADC_ConfigChannel( _hadc, &sConfig);
    return res;
}


uint32_t ADC1_GetValue(	ADC_HandleTypeDef * _hadc	,
						uint32_t channel			) {
    HAL_ADC_Start( _hadc ) ;	//	 Start conversion
    HAL_ADC_PollForConversion( _hadc , 200 ) ;	//	Wait until finish
    uint32_t value_u32 = HAL_ADC_GetValue( _hadc ) ;
    HAL_ADC_Stop( _hadc ) ;
    return value_u32;
}
//*****************************************************************************

/*
**************************************************************************
*                           LOCAL FUNCTIONS
**************************************************************************
*/
#endif
