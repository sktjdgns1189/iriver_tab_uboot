#ifndef __GPIO_MX100_H_
#define __GPIO_MX100_H_

//#include <mach/gpio.h>

#define GPIO_LEVEL_LOW      	0
#define GPIO_LEVEL_HIGH     	1
#define GPIO_LEVEL_NONE     	2
#define GPIO_INPUT				0
#define GPIO_OUTPUT				1

#if (MX100_HW_VER == MX100_EVM1)
#define CONFIG_MX100_EVM
#else
#define CONFIG_MX100_WS
#endif



#define GPIO_LEVEL_LOW      	0
#define GPIO_LEVEL_HIGH     	1
#define GPIO_LEVEL_NONE     	2
#define GPIO_INPUT				0
#define GPIO_OUTPUT				1


///////////////////////////////////////////////////////
//
// MX100 GPIO define.
//
// first Release 2010.10.13
//
// added mx100evm,mx100ws define. 2010.11.23
//
//////////////////////////////////////////////////////

//	usage:
//    gpio_get_value(GPIO_POWER_KEY_IN);
// 	gpio_set_value(GPIO_POWER_ON_OUT, 0);
//    gpio_direction_input(GPIO_POWER_KEY_IN);
  //  s3c_gpio_setpull(GPIO_POWER_KEY_IN, S3C_GPIO_PULL_UP);
// gpio-cfg.h 

#define GPIO_CAM_FLASH_SET_OUT 			S5PV210_GPD0(1)
#define U_GPIO_CAM_FLASH_SET_OUT 		eGPIO_D0, eGPIO_1

#define GPIO_CAM_FLASH_EN_OUT 			S5PV210_GPD0(3)
#define U_GPIO_CAM_FLASH_EN_OUT 		eGPIO_D0, eGPIO_3


#ifdef CONFIG_MX100_EVM

#elif defined(CONFIG_MX100_WS)
#define GPIO_DEBUG0_IO					S5PV210_GPC0(0)
#define GPIO_DEBUG1_IO					S5PV210_GPC0(1)
#define GPIO_DEBUG2_IO					S5PV210_GPC0(2)
#define U_GPIO_GPS_DEBUG_SELECT_OUT	eGPIO_C0,eGPIO_3
#define GPIO_DEBUG4_IO					S5PV210_GPC0(4)
#endif




#define GPIO_POWER_ON_OUT 				S5PV210_GPH0(0)
#define GPIO_POWER_KEY_IN 				S5PV210_GPH0(1)
#define U_GPIO_POWER_KEY_IN 			eGPIO_H0, eGPIO_1


#define GPIO_CAM_RESET_OUT 				S5PV210_GPH0(2)
#define GPIO_LIGHT_SENSOR_INT_IN 		S5PV210_GPH0(3)
#define GPIO_PMIC_VDDINT_SEL_OUT 		S5PV210_GPH0(4)
#ifdef CONFIG_MX100_EVM
#define GPIO_CAM_HALF_SHUTTOR_KEY_IN 	S5PV210_GPH0(5)
#define U_GPIO_CAM_HALF_SHUTTOR_KEY_IN 	eGPIO_H0, eGPIO_5
#define GPIO_CAM_SHUTTOR_KEY_IN 		S5PV210_GPH0(6)
#define U_GPIO_CAM_SHUTTOR_KEY_IN 		eGPIO_H0, eGPIO_6
#elif defined(CONFIG_MX100_WS)
#define GPIO_TDMB_PWR_DN_OUT 			S5PV210_GPH0(5)
#define GPIO_TDMB_RESET_OUT		 		S5PV210_GPH0(6)
#endif


#define GPIO_GPS_WAKE_UP_OUT 			S5PV210_GPH0(7)

#define GPIO_TOUCH_INT_IN 				S5PV210_GPH1(0)
#define U_GPIO_TOUCH_INT_IN 				eGPIO_H1, eGPIO_0

#ifdef CONFIG_MX100_EVM
#define GPIO_ETHERNET_INT_IN 				S5PV210_GPH1(1)
#elif defined(CONFIG_MX100_WS)
#define GPIO_FULL_BATT_REQ_IN			S5PV210_GPH1(1)
#define U_GPIO_FULL_BATT_REQ_IN			eGPIO_H1, eGPIO_1
#endif

#define GPIO_BT_HOST_WALKUP_IN 			S5PV210_GPH1(2)
#define GPIO_DMB_INT_IN 					S5PV210_GPH1(3)
#define GPIO_HDMI_CEC_IO 				S5PV210_GPH1(4)
#define GPIO_HDMI_HPD_IN 				S5PV210_GPH1(5)
#define GPIO_PMIC_VDDARM_SEL_OUT0 		S5PV210_GPH1(6)
#define GPIO_PMIC_VDDARM_SEL_OUT1 		S5PV210_GPH1(7)

#define GPIO_PMIC_LOWBATT_IN 			S5PV210_GPH2(0)
#define GPIO_DC_APT_DETECT_IN 			S5PV210_GPH2(1)
#define U_GPIO_DC_APT_DETECT_IN 			eGPIO_H2, eGPIO_1

#if 1 /* ktj fixed. no more use usb_det from w/s board */
#define GPIO_USB_INSERT_IN 				GPIO_DC_APT_DETECT_IN
#define U_GPIO_USB_INSERT_IN 			U_GPIO_DC_APT_DETECT_IN
#else
#define GPIO_USB_INSERT_IN 				S5PV210_GPH2(2)
#define U_GPIO_USB_INSERT_IN 			eGPIO_H2, eGPIO_2
#endif

#ifdef CONFIG_MX100_EVM
#define GPIO_EARJACK_IN 					S5PV210_GPH2(3)  // active low
#elif defined(CONFIG_MX100_WS)
#define GPIO_EARJACK_IN 					S5PV210_GPH2(3)   // active high
#endif

#define GPIO_COMPASS_INT_IN 				S5PV210_GPH2(4)

#ifdef CONFIG_MX100_EVM
#define GPIO_HOME_KEY_IN 				S5PV210_GPH2(5)
#define U_GPIO_HOME_KEY_IN 				eGPIO_H2, eGPIO_5

#define GPIO_MENU_KEY_IN 				S5PV210_GPH2(6)
#define U_GPIO_MENU_KEY_IN 				eGPIO_H2, eGPIO_6

#define GPIO_BACK_KEY_IN 				S5PV210_GPH2(7)
#define U_GPIO_BACK_KEY_IN 				eGPIO_H2, eGPIO_7

#elif defined(CONFIG_MX100_WS)
#define GPIO_CDMA_HOST_WAKEUP_IN		S5PV210_GPH2(5)  // active high
//#define GPIO_MENU_KEY_IN 				S5PV210_GPH2(6)  //not used.
#define GPIO_CDMA_READY_SIGNAL_IN		S5PV210_GPH2(7)  // active high.

#endif

#define GPIO_VOLPLUS_KEY_IN 				S5PV210_GPH3(0)
#define U_GPIO_VOLPLUS_KEY_IN 			eGPIO_H3, eGPIO_0

#ifdef CONFIG_MX100_EVM
#define GPIO_SD_WR_PROTECT_IN 			S5PV210_GPH3(1)
#elif defined(CONFIG_MX100_WS)
#define GPIO_WEB_CAM_RESET_OUT			S5PV210_GPH3(1)
#endif

#define GPIO_WIFI_WAKEUP_IN 				S5PV210_GPH3(2)

#define GPIO_CAM_STANDBY_OUT			S5PV210_GPH3(3)

#define GPIO_VOLMINUS_KEY_IN			S5PV210_GPH3(4)
#define U_GPIO_VOLMINUS_KEY_IN 			eGPIO_H3, eGPIO_4

#ifdef CONFIG_MX100_EVM
//#define NA				 				S5PV210_GPH3(5)
//#define NA							 	S5PV210_GPH3(6)
#elif defined(CONFIG_MX100_WS)
#define GPIO_WEBCAM_STANDBY_OUT		S5PV210_GPH3(5)
#define GPIO_USB_SW_OE_OUT				S5PV210_GPH3(6)
#endif

#define GPIO_G_SENSOR_INT_IN 			S5PV210_GPH3(7)

#define GPIO_WIFI_WAKEUP_OUT			S5PV210_GPJ0(0)

#ifdef CONFIG_MX100_EVM
#define GPIO_DMB_ENABLE_OUT				S5PV210_GPJ0(1)
#elif defined(CONFIG_MX100_WS)
// not used.
#endif



#define GPIO_BT_WAKEUP_OUT				S5PV210_GPJ0(2)
#define GPIO_HDMI_ENABLE_OUT			S5PV210_GPJ0(3)
#define GPIO_BLU_ENABLE_OUT				S5PV210_GPJ0(4)
#define GPIO_WIFI_RESET_OUT				S5PV210_GPJ0(5)
#define GPIO_BT_RESET_OUT				S5PV210_GPJ0(6)
#define GPIO_GPS_PWR_ENABLE_OUT		S5PV210_GPJ0(7)
#define U_GPIO_GPS_PWR_ENABLE_OUT		eGPIO_J0, eGPIO_7

#define GPIO_EARJACK_MUTE_OUT			S5PV210_GPJ1(0)
#define U_GPIO_EARJACK_MUTE_OUT			eGPIO_J1, eGPIO_0

#define GPIO_LVDS_PWRDN_OUT			S5PV210_GPJ1(1)
#define GPIO_FM_RESET_OUT				S5PV210_GPJ1(2)
#define U_GPIO_FM_RESET_OUT				eGPIO_J1, eGPIO_2

#ifdef CONFIG_MX100_EVM
#define GPIO_DMB_PWRDN_OUT				S5PV210_GPJ1(3)
#define GPIO_DMB_RESET_OUT				S5PV210_GPJ1(4)
#elif defined(CONFIG_MX100_WS)
#define GPIO_FM_I2C_SDA_IO				S5PV210_GPJ1(3)
#define GPIO_FM_I2C_SCL_IO				S5PV210_GPJ1(4)

#define U_GPIO_FM_I2C_SDA_IO			eGPIO_J1, eGPIO_3
#define U_GPIO_FM_I2C_SCL_IO				eGPIO_J1, eGPIO_4
#endif

#define GPIO_COMPASS_RESET_OUT			S5PV210_GPJ2(5)

#ifdef CONFIG_MX100_EVM
#define GPIO_ETHERNET_ENABLE_OUT		S5PV210_GPJ2(0)
#define GPIO_LGD_CTL0					S5PV210_GPJ2(1)
#define GPIO_LGD_CTL1					S5PV210_GPJ2(2)

#elif defined(CONFIG_MX100_WS)
#define GPIO_CDMA_SLEEP_CTL_OUT			S5PV210_GPJ2(0)
#define GPIO_CDMA_PWR_ON_OUT			S5PV210_GPJ2(1)
#define GPIO_CDMA_RESET_OUT				S5PV210_GPJ2(2)
#endif


#define GPIO_WIFIBT_ENABLE_OUT			S5PV210_GPJ2(3)

#ifdef CONFIG_MX100_EVM
#define GPIO_USBHOST_CHARGE_IC_OUT		S5PV210_GPJ2(4)
#define GPIO_TOUCH_RESET_OUT			S5PV210_GPJ2(5)
#elif defined(CONFIG_MX100_WS)
#define GPIO_FRONT_LED_CTL_OUT			S5PV210_GPJ2(4)
#define GPIO_TOUCH_ENABLE_OUT			S5PV210_GPJ2(5)
#define U_GPIO_TOUCH_ENABLE_OUT 		eGPIO_J2, eGPIO_5

#endif


#ifdef CONFIG_MX100_EVM
#define GPIO_DEBUG0						S5PV210_GPJ2(6)
#define GPIO_DEBUG1						S5PV210_GPJ2(7)
#define GPIO_DEBUG2						S5PV210_GPJ3(0)
#define GPIO_DEBUG3						S5PV210_GPJ3(1)
#elif defined(CONFIG_MX100_WS)
#define GPIO_BMA150_I2C_SDA_IO			S5PV210_GPJ2(6)
#define GPIO_BMA150_I2C_SCL_IO			S5PV210_GPJ2(7)
#define U_GPIO_BMA150_I2C_SDA_IO		eGPIO_J2, eGPIO_6
#define U_GPIO_BMA150_I2C_SCL_IO		eGPIO_J2, eGPIO_7

#define GPIO_COMPAS_I2C_SDA_IO			S5PV210_GPJ3(0)
#define GPIO_COMPAS_I2C_SCL_IO			S5PV210_GPJ3(1)
#define U_GPIO_COMPAS_I2C_SDA_IO		eGPIO_J3, eGPIO_0
#define U_GPIO_COMPAS_I2C_SCL_IO		eGPIO_J3, eGPIO_1
#endif


#define GPIO_MOTOR_PWRCTL_OUT			S5PV210_GPJ3(2)
#define GPIO_MOTOR_HAPTIC_OUT			S5PV210_GPJ3(3)

#define U_GPIO_MOTOR_PWRCTL_OUT		eGPIO_J3, eGPIO_2
#define U_GPIO_MOTOR_HAPTIC_OUT		eGPIO_J3, eGPIO_3

#ifdef CONFIG_MX100_EVM
//#define NA								S5PV210_GPJ3(4)
#define GPIO_ONDRAM_CLK_IO_OUT			S5PV210_GPJ3(5)
#elif defined(CONFIG_MX100_WS)
#define GPIO_CAM_I2C_SDA_IO				S5PV210_GPJ3(4)
#define GPIO_CAM_I2C_SCL_IO				S5PV210_GPJ3(5)
#endif

#ifdef CONFIG_MX100_EVM
#define GPIO_ONDRAM_CLK_ENABLE_OUT		S5PV210_GPJ3(6)
#define GPIO_ONDRAM_CHIP_SEL_OUT		S5PV210_GPJ3(7)
#elif defined(CONFIG_MX100_WS)
#define GPIO_LIGHT_SENSOR_SDA_IO		S5PV210_GPJ3(6)
#define GPIO_LIGHT_SENSOR_SCL_IO		S5PV210_GPJ3(7)
#define U_GPIO_LIGHT_SENSOR_SDA_IO		eGPIO_J3, eGPIO_6
#define U_GPIO_LIGHT_SENSOR_SCL_IO		eGPIO_J3, eGPIO_7
#endif


#ifdef CONFIG_MX100_EVM

#elif defined(CONFIG_MX100_WS)
#define GPIO_FUEL_GAUGE_SDA_IO			S5PV210_GPJ4(0)
#define GPIO_FUEL_GAUGE_SCL_IO			S5PV210_GPJ4(1)
#define U_GPIO_FUEL_GAUGE_SDA_IO 		eGPIO_J4, eGPIO_0
#define U_GPIO_FUEL_GAUGE_SCL_IO		eGPIO_J4, eGPIO_1

#define GPIO_MOTOR_SDA_IO				S5PV210_GPJ4(2)
#define GPIO_MOTOR_SCL_IO				S5PV210_GPJ4(3)
#define U_GPIO_MOTOR_SDA_IO				eGPIO_J4, eGPIO_2
#define U_GPIO_MOTOR_SCL_IO				eGPIO_J4, eGPIO_3

#define GPIO_FLASH_LED_PWR_OUT			S5PV210_GPJ4(4)

#endif


#define GPIO_TOUCH_SDA_IO				S5PV210_GPD1(0)
#define GPIO_TOUCH_SCL_IO				S5PV210_GPD1(1)
#define U_GPIO_TOUCH_SDA_IO				eGPIO_D1, eGPIO_0
#define U_GPIO_TOUCH_SCL_IO				eGPIO_D1, eGPIO_1

#endif
