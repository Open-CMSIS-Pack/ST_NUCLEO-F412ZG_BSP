/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 17/09/2024 10:15:54
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ USART3         -----------------------------*/
#define MX_USART3                               1

/* Virtual mode */
#define MX_USART3_VM                            VM_ASYNC
#define MX_USART3_VM_ASYNC                      1

/* Pins */

/* USART3_RX */
#define MX_USART3_RX_Pin                        PD9
#define MX_USART3_RX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART3_RX_GPIOx                      GPIOD
#define MX_USART3_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_GPIO_AF                    GPIO_AF7_USART3

/* USART3_TX */
#define MX_USART3_TX_Pin                        PD8
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_8
#define MX_USART3_TX_GPIOx                      GPIOD
#define MX_USART3_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/*------------------------------ USB_OTG_FS     -----------------------------*/
#define MX_USB_OTG_FS                           1

/* Handle */
#define MX_USB_OTG_FS_HANDLE                    hpcd_USB_OTG_FS

/* Virtual mode */
#define MX_USB_OTG_FS_VM                        Device_Only
#define MX_USB_OTG_FS_Device_Only               1

/* Pins */

/* USB_OTG_FS_DM */
#define MX_USB_OTG_FS_DM_Pin                    PA11
#define MX_USB_OTG_FS_DM_GPIO_Pin               GPIO_PIN_11
#define MX_USB_OTG_FS_DM_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DM_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DM_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DM_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DM_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_DP */
#define MX_USB_OTG_FS_DP_Pin                    PA12
#define MX_USB_OTG_FS_DP_GPIO_Pin               GPIO_PIN_12
#define MX_USB_OTG_FS_DP_GPIOx                  GPIOA
#define MX_USB_OTG_FS_DP_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_DP_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_DP_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_DP_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_ID */
#define MX_USB_OTG_FS_ID_Pin                    PA10
#define MX_USB_OTG_FS_ID_GPIO_Pin               GPIO_PIN_10
#define MX_USB_OTG_FS_ID_GPIOx                  GPIOA
#define MX_USB_OTG_FS_ID_GPIO_Mode              GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_ID_GPIO_PuPd              GPIO_NOPULL
#define MX_USB_OTG_FS_ID_GPIO_Speed             GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_ID_GPIO_AF                GPIO_AF10_OTG_FS

/* USB_OTG_FS_SOF */
#define MX_USB_OTG_FS_SOF_Pin                   PA8
#define MX_USB_OTG_FS_SOF_GPIO_Pin              GPIO_PIN_8
#define MX_USB_OTG_FS_SOF_GPIOx                 GPIOA
#define MX_USB_OTG_FS_SOF_GPIO_Mode             GPIO_MODE_AF_PP
#define MX_USB_OTG_FS_SOF_GPIO_PuPd             GPIO_NOPULL
#define MX_USB_OTG_FS_SOF_GPIO_Speed            GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_SOF_GPIO_AF               GPIO_AF10_OTG_FS

/* USB_OTG_FS_VBUS */
#define MX_USB_OTG_FS_VBUS_Pin                  PA9
#define MX_USB_OTG_FS_VBUS_GPIO_Pin             GPIO_PIN_9
#define MX_USB_OTG_FS_VBUS_GPIOx                GPIOA
#define MX_USB_OTG_FS_VBUS_GPIO_Mode            GPIO_MODE_INPUT
#define MX_USB_OTG_FS_VBUS_GPIO_PuPd            GPIO_NOPULL
#define MX_USB_OTG_FS_VBUS_GPIO_Speed           GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_OTG_FS_VBUS_GPIO_AF              GPIO_AF10_OTG_FS

#endif  /* MX_DEVICE_H__ */
