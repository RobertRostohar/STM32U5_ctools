/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 10/03/2023 10:43:13
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                                32000
#define MX_LSIDIV_VALUE                             32000
#define MX_LSE_VALUE                                32768
#define MX_HSI_VALUE                                16000000
#define MX_HSICalibrationValue                      16
#define MX_HSE_VALUE                                16000000
#define MX_SYSCLKFreq_VALUE                         160000000
#define MX_HCLKFreq_Value                           160000000
#define MX_FCLKCortexFreq_Value                     160000000
#define MX_CortexFreq_Value                         160000000
#define MX_AHBFreq_Value                            160000000
#define MX_APB1Freq_Value                           160000000
#define MX_APB2Freq_Value                           160000000
#define MX_APB1TimFreq_Value                        160000000
#define MX_APB2TimFreq_Value                        160000000
#define MX_ADCFreq_Value                            16000000
#define MX_I2C1Freq_Value                           160000000
#define MX_I2C2Freq_Value                           160000000
#define MX_I2C3Freq_Value                           160000000
#define MX_MSI_VALUE                                4000000
#define MX_SPI1Freq_Value                           160000000
#define MX_SPI2Freq_Value                           160000000
#define MX_SPI3Freq_Value                           160000000
#define MX_USBFreq_Value                            48000000
#define MX_WatchDogFreq_Value                       32000
#define MX_LPTIM1Freq_Value                         4000000
#define MX_LPTIM2Freq_Value                         160000000
#define MX_RTCFreq_Value                            32000
#define MX_MCO1PinFreq_Value                        160000000
#define MX_CRSFreq_Value                            48000000
#define MX_SWPMI1Freq_Value                         4000000
#define MX_SAI1Freq_Value                           258000000
#define MX_SAI2Freq_Value                           258000000
#define MX_LPUART1Freq_Value                        160000000
#define MX_UART4Freq_Value                          160000000
#define MX_UART5Freq_Value                          160000000
#define MX_USART1Freq_Value                         160000000
#define MX_USART2Freq_Value                         160000000
#define MX_USART3Freq_Value                         160000000

/*-------------------------------- GTZC_NS    --------------------------------*/

#define MX_GTZC_NS                                  1

/*-------------------------------- NVIC2      --------------------------------*/

#define MX_NVIC2                                    1

/*-------------------------------- PWR        --------------------------------*/

#define MX_PWR                                      1

/*-------------------------------- CORTEX_M33_NS --------------------------------*/

#define MX_CORTEX_M33_NS                            1

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                      1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                     1

/* GPIO Configuration */

/* Pin PB5 - UCPD_PWR */
#define MX_PB5_GPIO_Speed                           GPIO_SPEED_FREQ_LOW
#define MX_PB5_Pin                                  PB5
#define MX_PB5_GPIOx                                GPIOB
#define MX_PB5_PinState                             GPIO_PIN_RESET
#define MX_PB5_GPIO_PuPd                            GPIO_NOPULL
#define MX_PB5_GPIO_Pin                             GPIO_PIN_5
#define MX_PB5_GPIO_ModeDefaultOutputPP             GPIO_MODE_OUTPUT_PP
#define MX_PB5_PinAttribute                         Free

#define MX_UCPD_PWR_GPIO_Speed                      MX_PB5_GPIO_Speed
#define MX_UCPD_PWR_Pin                             MX_PB5_Pin
#define MX_UCPD_PWR_GPIOx                           MX_PB5_GPIOx
#define MX_UCPD_PWR_PinState                        MX_PB5_PinState
#define MX_UCPD_PWR_GPIO_PuPd                       MX_PB5_GPIO_PuPd
#define MX_UCPD_PWR_GPIO_Pin                        MX_PB5_GPIO_Pin
#define MX_UCPD_PWR_GPIO_ModeDefaultOutputPP        MX_PB5_GPIO_ModeDefaultOutputPP
#define MX_UCPD_PWR_PinAttribute                    MX_PB5_PinAttribute

/* Pin PE8 - USB.UCPD_FLT */
#define MX_PE8_Pin                                  PE8
#define MX_PE8_GPIOx                                GPIOE
#define MX_PE8_GPIO_PuPd                            GPIO_NOPULL
#define MX_PE8_GPIO_Pin                             GPIO_PIN_8
#define MX_PE8_GPIO_Mode                            GPIO_MODE_INPUT
#define MX_PE8_PinAttribute                         Free

#define MX_USB_UCPD_FLT_Pin                         MX_PE8_Pin
#define MX_USB_UCPD_FLT_GPIOx                       MX_PE8_GPIOx
#define MX_USB_UCPD_FLT_GPIO_PuPd                   MX_PE8_GPIO_PuPd
#define MX_USB_UCPD_FLT_GPIO_Pin                    MX_PE8_GPIO_Pin
#define MX_USB_UCPD_FLT_GPIO_Mode                   MX_PE8_GPIO_Mode
#define MX_USB_UCPD_FLT_PinAttribute                MX_PE8_PinAttribute

/* Pin PH3-BOOT0 */
#define MX_PH3_BOOT0_Pin                            PH3_BOOT0
#define MX_PH3_BOOT0_GPIOx                          GPIOH
#define MX_PH3_BOOT0_GPIO_PuPd                      GPIO_NOPULL
#define MX_PH3_BOOT0_GPIO_Pin                       GPIO_PIN_3
#define MX_PH3_BOOT0_GPIO_Mode                      GPIO_MODE_INPUT
#define MX_PH3_BOOT0_PinAttribute                   Free

/* Pin PH1-OSC_OUT (PH1) - Mems.VL53_xshut */
#define MX_PH1_OSC_OUT_PH1_GPIO_Speed               GPIO_SPEED_FREQ_LOW
#define MX_PH1_OSC_OUT_PH1_Pin                      PH1_OSC_OUT_PH1
#define MX_PH1_OSC_OUT_PH1_GPIOx                    GPIOH
#define MX_PH1_OSC_OUT_PH1_PinState                 GPIO_PIN_RESET
#define MX_PH1_OSC_OUT_PH1_GPIO_PuPd                GPIO_NOPULL
#define MX_PH1_OSC_OUT_PH1_GPIO_Pin                 GPIO_PIN_1
#define MX_PH1_OSC_OUT_PH1_GPIO_ModeDefaultOutputPP GPIO_MODE_OUTPUT_PP
#define MX_PH1_OSC_OUT_PH1_PinAttribute             Free

#define MX_Mems_VL53_xshut_GPIO_Speed               MX_PH1_OSC_OUT_PH1_GPIO_Speed
#define MX_Mems_VL53_xshut_Pin                      MX_PH1_OSC_OUT_PH1_Pin
#define MX_Mems_VL53_xshut_GPIOx                    MX_PH1_OSC_OUT_PH1_GPIOx
#define MX_Mems_VL53_xshut_PinState                 MX_PH1_OSC_OUT_PH1_PinState
#define MX_Mems_VL53_xshut_GPIO_PuPd                MX_PH1_OSC_OUT_PH1_GPIO_PuPd
#define MX_Mems_VL53_xshut_GPIO_Pin                 MX_PH1_OSC_OUT_PH1_GPIO_Pin
#define MX_Mems_VL53_xshut_GPIO_ModeDefaultOutputPP MX_PH1_OSC_OUT_PH1_GPIO_ModeDefaultOutputPP
#define MX_Mems_VL53_xshut_PinAttribute             MX_PH1_OSC_OUT_PH1_PinAttribute

/* Pin PC13 - USER_Button */
#define MX_PC13_Pin                                 PC13
#define MX_PC13_GPIOx                               GPIOC
#define MX_PC13_GPIO_PuPd                           GPIO_NOPULL
#define MX_PC13_GPIO_Pin                            GPIO_PIN_13
#define MX_PC13_GPIO_Mode                           GPIO_MODE_INPUT
#define MX_PC13_PinAttribute                        Free

#define MX_USER_Button_Pin                          MX_PC13_Pin
#define MX_USER_Button_GPIOx                        MX_PC13_GPIOx
#define MX_USER_Button_GPIO_PuPd                    MX_PC13_GPIO_PuPd
#define MX_USER_Button_GPIO_Pin                     MX_PC13_GPIO_Pin
#define MX_USER_Button_GPIO_Mode                    MX_PC13_GPIO_Mode
#define MX_USER_Button_PinAttribute                 MX_PC13_PinAttribute

/* Pin PE11 - Mems.ISM330DLC_INT1 */
#define MX_PE11_Pin                                 PE11
#define MX_PE11_GPIOx                               GPIOE
#define MX_PE11_GPIO_PuPd                           GPIO_NOPULL
#define MX_PE11_GPIO_Pin                            GPIO_PIN_11
#define MX_PE11_GPIO_Mode                           GPIO_MODE_INPUT
#define MX_PE11_PinAttribute                        Free

#define MX_Mems_ISM330DLC_INT1_Pin                  MX_PE11_Pin
#define MX_Mems_ISM330DLC_INT1_GPIOx                MX_PE11_GPIOx
#define MX_Mems_ISM330DLC_INT1_GPIO_PuPd            MX_PE11_GPIO_PuPd
#define MX_Mems_ISM330DLC_INT1_GPIO_Pin             MX_PE11_GPIO_Pin
#define MX_Mems_ISM330DLC_INT1_GPIO_Mode            MX_PE11_GPIO_Mode
#define MX_Mems_ISM330DLC_INT1_PinAttribute         MX_PE11_PinAttribute

/* Pin PD14 - WRLS.NOTIFY */
#define MX_PD14_Pin                                 PD14
#define MX_PD14_GPIOx                               GPIOD
#define MX_PD14_GPIO_PuPd                           GPIO_NOPULL
#define MX_PD14_GPIO_Pin                            GPIO_PIN_14
#define MX_PD14_GPIO_Mode                           GPIO_MODE_INPUT
#define MX_PD14_PinAttribute                        Free

#define MX_WRLS_NOTIFY_Pin                          MX_PD14_Pin
#define MX_WRLS_NOTIFY_GPIOx                        MX_PD14_GPIOx
#define MX_WRLS_NOTIFY_GPIO_PuPd                    MX_PD14_GPIO_PuPd
#define MX_WRLS_NOTIFY_GPIO_Pin                     MX_PD14_GPIO_Pin
#define MX_WRLS_NOTIFY_GPIO_Mode                    MX_PD14_GPIO_Mode
#define MX_WRLS_NOTIFY_PinAttribute                 MX_PD14_PinAttribute

/* Pin PD13 - USB.IANA */
#define MX_PD13_Pin                                 PD13
#define MX_PD13_GPIOx                               GPIOD
#define MX_PD13_GPIO_PuPd                           GPIO_NOPULL
#define MX_PD13_GPIO_Pin                            GPIO_PIN_13
#define MX_PD13_GPIO_Mode                           GPIO_MODE_INPUT
#define MX_PD13_PinAttribute                        Free

#define MX_USB_IANA_Pin                             MX_PD13_Pin
#define MX_USB_IANA_GPIOx                           MX_PD13_GPIOx
#define MX_USB_IANA_GPIO_PuPd                       MX_PD13_GPIO_PuPd
#define MX_USB_IANA_GPIO_Pin                        MX_PD13_GPIO_Pin
#define MX_USB_IANA_GPIO_Mode                       MX_PD13_GPIO_Mode
#define MX_USB_IANA_PinAttribute                    MX_PD13_PinAttribute

/* Pin PF11 - Mems.STSAFE_RESET */
#define MX_PF11_GPIO_Speed                          GPIO_SPEED_FREQ_LOW
#define MX_PF11_Pin                                 PF11
#define MX_PF11_GPIOx                               GPIOF
#define MX_PF11_PinState                            GPIO_PIN_RESET
#define MX_PF11_GPIO_PuPd                           GPIO_NOPULL
#define MX_PF11_GPIO_Pin                            GPIO_PIN_11
#define MX_PF11_GPIO_ModeDefaultOutputPP            GPIO_MODE_OUTPUT_PP
#define MX_PF11_PinAttribute                        Free

#define MX_Mems_STSAFE_RESET_GPIO_Speed             MX_PF11_GPIO_Speed
#define MX_Mems_STSAFE_RESET_Pin                    MX_PF11_Pin
#define MX_Mems_STSAFE_RESET_GPIOx                  MX_PF11_GPIOx
#define MX_Mems_STSAFE_RESET_PinState               MX_PF11_PinState
#define MX_Mems_STSAFE_RESET_GPIO_PuPd              MX_PF11_GPIO_PuPd
#define MX_Mems_STSAFE_RESET_GPIO_Pin               MX_PF11_GPIO_Pin
#define MX_Mems_STSAFE_RESET_GPIO_ModeDefaultOutputPP MX_PF11_GPIO_ModeDefaultOutputPP
#define MX_Mems_STSAFE_RESET_PinAttribute           MX_PF11_PinAttribute

/* Pin PD10 - Mems.INT_IIS2MDC */
#define MX_PD10_Pin                                 PD10
#define MX_PD10_GPIOx                               GPIOD
#define MX_PD10_GPIO_PuPd                           GPIO_NOPULL
#define MX_PD10_GPIO_Pin                            GPIO_PIN_10
#define MX_PD10_GPIO_Mode                           GPIO_MODE_INPUT
#define MX_PD10_PinAttribute                        Free

#define MX_Mems_INT_IIS2MDC_Pin                     MX_PD10_Pin
#define MX_Mems_INT_IIS2MDC_GPIOx                   MX_PD10_GPIOx
#define MX_Mems_INT_IIS2MDC_GPIO_PuPd               MX_PD10_GPIO_PuPd
#define MX_Mems_INT_IIS2MDC_GPIO_Pin                MX_PD10_GPIO_Pin
#define MX_Mems_INT_IIS2MDC_GPIO_Mode               MX_PD10_GPIO_Mode
#define MX_Mems_INT_IIS2MDC_PinAttribute            MX_PD10_PinAttribute

/* Pin PG2 - Mems.INT_LPS22HH */
#define MX_PG2_Pin                                  PG2
#define MX_PG2_GPIOx                                GPIOG
#define MX_PG2_GPIO_PuPd                            GPIO_NOPULL
#define MX_PG2_GPIO_Pin                             GPIO_PIN_2
#define MX_PG2_GPIO_Mode                            GPIO_MODE_INPUT
#define MX_PG2_PinAttribute                         Free

#define MX_Mems_INT_LPS22HH_Pin                     MX_PG2_Pin
#define MX_Mems_INT_LPS22HH_GPIOx                   MX_PG2_GPIOx
#define MX_Mems_INT_LPS22HH_GPIO_PuPd               MX_PG2_GPIO_PuPd
#define MX_Mems_INT_LPS22HH_GPIO_Pin                MX_PG2_GPIO_Pin
#define MX_Mems_INT_LPS22HH_GPIO_Mode               MX_PG2_GPIO_Mode
#define MX_Mems_INT_LPS22HH_PinAttribute            MX_PG2_PinAttribute

/* Pin PF14 - USB.VBUS_SENSE */
#define MX_PF14_Pin                                 PF14
#define MX_PF14_GPIOx                               GPIOF
#define MX_PF14_GPIO_PuPd                           GPIO_NOPULL
#define MX_PF14_GPIO_Pin                            GPIO_PIN_14
#define MX_PF14_GPIO_Mode                           GPIO_MODE_INPUT
#define MX_PF14_PinAttribute                        Free

#define MX_USB_VBUS_SENSE_Pin                       MX_PF14_Pin
#define MX_USB_VBUS_SENSE_GPIOx                     MX_PF14_GPIOx
#define MX_USB_VBUS_SENSE_GPIO_PuPd                 MX_PF14_GPIO_PuPd
#define MX_USB_VBUS_SENSE_GPIO_Pin                  MX_PF14_GPIO_Pin
#define MX_USB_VBUS_SENSE_GPIO_Mode                 MX_PF14_GPIO_Mode
#define MX_USB_VBUS_SENSE_PinAttribute              MX_PF14_PinAttribute

/* Pin PG15 - WRLS.FLOW */
#define MX_PG15_Pin                                 PG15
#define MX_PG15_GPIOx                               GPIOG
#define MX_PG15_GPIO_PuPd                           GPIO_NOPULL
#define MX_PG15_GPIO_Pin                            GPIO_PIN_15
#define MX_PG15_GPIO_Mode                           GPIO_MODE_INPUT
#define MX_PG15_PinAttribute                        Free

#define MX_WRLS_FLOW_Pin                            MX_PG15_Pin
#define MX_WRLS_FLOW_GPIOx                          MX_PG15_GPIOx
#define MX_WRLS_FLOW_GPIO_PuPd                      MX_PG15_GPIO_PuPd
#define MX_WRLS_FLOW_GPIO_Pin                       MX_PG15_GPIO_Pin
#define MX_WRLS_FLOW_GPIO_Mode                      MX_PG15_GPIO_Mode
#define MX_WRLS_FLOW_PinAttribute                   MX_PG15_PinAttribute

/* Pin PH7 - LED_GREEN */
#define MX_PH7_GPIO_Speed                           GPIO_SPEED_FREQ_HIGH
#define MX_PH7_Pin                                  PH7
#define MX_PH7_GPIOx                                GPIOH
#define MX_PH7_PinState                             GPIO_PIN_RESET
#define MX_PH7_GPIO_PuPd                            GPIO_PULLUP
#define MX_PH7_GPIO_Pin                             GPIO_PIN_7
#define MX_PH7_GPIO_ModeDefaultOutputPP             GPIO_MODE_OUTPUT_PP
#define MX_PH7_PinAttribute                         Free

#define MX_LED_GREEN_GPIO_Speed                     MX_PH7_GPIO_Speed
#define MX_LED_GREEN_Pin                            MX_PH7_Pin
#define MX_LED_GREEN_GPIOx                          MX_PH7_GPIOx
#define MX_LED_GREEN_PinState                       MX_PH7_PinState
#define MX_LED_GREEN_GPIO_PuPd                      MX_PH7_GPIO_PuPd
#define MX_LED_GREEN_GPIO_Pin                       MX_PH7_GPIO_Pin
#define MX_LED_GREEN_GPIO_ModeDefaultOutputPP       MX_PH7_GPIO_ModeDefaultOutputPP
#define MX_LED_GREEN_PinAttribute                   MX_PH7_PinAttribute

/* Pin PG6 - WRLS.WKUP_B */
#define MX_PG6_GPIO_Speed                           GPIO_SPEED_FREQ_LOW
#define MX_PG6_Pin                                  PG6
#define MX_PG6_GPIOx                                GPIOG
#define MX_PG6_PinState                             GPIO_PIN_RESET
#define MX_PG6_GPIO_PuPd                            GPIO_NOPULL
#define MX_PG6_GPIO_Pin                             GPIO_PIN_6
#define MX_PG6_GPIO_ModeDefaultOutputPP             GPIO_MODE_OUTPUT_PP
#define MX_PG6_PinAttribute                         Free

#define MX_WRLS_WKUP_B_GPIO_Speed                   MX_PG6_GPIO_Speed
#define MX_WRLS_WKUP_B_Pin                          MX_PG6_Pin
#define MX_WRLS_WKUP_B_GPIOx                        MX_PG6_GPIOx
#define MX_WRLS_WKUP_B_PinState                     MX_PG6_PinState
#define MX_WRLS_WKUP_B_GPIO_PuPd                    MX_PG6_GPIO_PuPd
#define MX_WRLS_WKUP_B_GPIO_Pin                     MX_PG6_GPIO_Pin
#define MX_WRLS_WKUP_B_GPIO_ModeDefaultOutputPP     MX_PG6_GPIO_ModeDefaultOutputPP
#define MX_WRLS_WKUP_B_PinAttribute                 MX_PG6_PinAttribute

/* Pin PH6 - LED_RED */
#define MX_PH6_GPIO_Speed                           GPIO_SPEED_FREQ_HIGH
#define MX_PH6_Pin                                  PH6
#define MX_PH6_GPIOx                                GPIOH
#define MX_PH6_PinState                             GPIO_PIN_RESET
#define MX_PH6_GPIO_PuPd                            GPIO_PULLUP
#define MX_PH6_GPIO_Pin                             GPIO_PIN_6
#define MX_PH6_GPIO_ModeDefaultOutputPP             GPIO_MODE_OUTPUT_PP
#define MX_PH6_PinAttribute                         Free

#define MX_LED_RED_GPIO_Speed                       MX_PH6_GPIO_Speed
#define MX_LED_RED_Pin                              MX_PH6_Pin
#define MX_LED_RED_GPIOx                            MX_PH6_GPIOx
#define MX_LED_RED_PinState                         MX_PH6_PinState
#define MX_LED_RED_GPIO_PuPd                        MX_PH6_GPIO_PuPd
#define MX_LED_RED_GPIO_Pin                         MX_PH6_GPIO_Pin
#define MX_LED_RED_GPIO_ModeDefaultOutputPP         MX_PH6_GPIO_ModeDefaultOutputPP
#define MX_LED_RED_PinAttribute                     MX_PH6_PinAttribute

/* Pin PG5 - Mems.VLX_GPIO */
#define MX_PG5_Pin                                  PG5
#define MX_PG5_GPIOx                                GPIOG
#define MX_PG5_GPIO_PuPd                            GPIO_NOPULL
#define MX_PG5_GPIO_Pin                             GPIO_PIN_5
#define MX_PG5_GPIO_Mode                            GPIO_MODE_INPUT
#define MX_PG5_PinAttribute                         Free

#define MX_Mems_VLX_GPIO_Pin                        MX_PG5_Pin
#define MX_Mems_VLX_GPIO_GPIOx                      MX_PG5_GPIOx
#define MX_Mems_VLX_GPIO_GPIO_PuPd                  MX_PG5_GPIO_PuPd
#define MX_Mems_VLX_GPIO_GPIO_Pin                   MX_PG5_GPIO_Pin
#define MX_Mems_VLX_GPIO_GPIO_Mode                  MX_PG5_GPIO_Mode
#define MX_Mems_VLX_GPIO_PinAttribute               MX_PG5_PinAttribute

/* Pin PF15 - WRLS.WKUP_W */
#define MX_PF15_GPIO_Speed                          GPIO_SPEED_FREQ_LOW
#define MX_PF15_Pin                                 PF15
#define MX_PF15_GPIOx                               GPIOF
#define MX_PF15_PinState                            GPIO_PIN_RESET
#define MX_PF15_GPIO_PuPd                           GPIO_NOPULL
#define MX_PF15_GPIO_Pin                            GPIO_PIN_15
#define MX_PF15_GPIO_ModeDefaultOutputPP            GPIO_MODE_OUTPUT_PP
#define MX_PF15_PinAttribute                        Free

#define MX_WRLS_WKUP_W_GPIO_Speed                   MX_PF15_GPIO_Speed
#define MX_WRLS_WKUP_W_Pin                          MX_PF15_Pin
#define MX_WRLS_WKUP_W_GPIOx                        MX_PF15_GPIOx
#define MX_WRLS_WKUP_W_PinState                     MX_PF15_PinState
#define MX_WRLS_WKUP_W_GPIO_PuPd                    MX_PF15_GPIO_PuPd
#define MX_WRLS_WKUP_W_GPIO_Pin                     MX_PF15_GPIO_Pin
#define MX_WRLS_WKUP_W_GPIO_ModeDefaultOutputPP     MX_PF15_GPIO_ModeDefaultOutputPP
#define MX_WRLS_WKUP_W_PinAttribute                 MX_PF15_PinAttribute

#endif  /* __MX_DEVICE_H */

