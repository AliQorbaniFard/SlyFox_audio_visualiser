# STM32F746G_DISCO TBS.

This projects, is related to visualising audio by STM32F746 microcontroller(discovery board)

The default IDE is set to STM32CubeIDE, to change IDE open the STM32F746G_DISCO.ioc with STM32CubeMX and select from the supported IDEs (EWARM from version 8.50.9, MDK-ARM, and STM32CubeIDE). Supports flashing of the STM32F746G_DISCO board directly from TouchGFX Designer using GCC and STM32CubeProgrammer.Flashing the board requires STM32CubeProgrammer which can be downloaded from the ST webpage. 

This TBS is configured for 272 x 480 pixels 16bpp screen resolution.  

Performance testing can be done using the GPIO pins designated with the following signals: VSYNC_FREQ  - Pin PB4(D3), RENDER_TIME - Pin PC6(D1), FRAME_RATE  - Pin PC7(D0), MCU_ACTIVE  - Pin PG6(D2)

In this specific project STM32CubeIDE is used, and the gui has been produced by Touchgfx.

The .hex file is provided in STM32CubeIDE>Debug>STM32F746G_DISCO.hex

To upload the program to your microcontroller open STM32 ST-Utility>External Loader and select N25Q128A_STM32F746-DISCO

Pin A0 is used for ADC 

AUX cable is used for this project

A video on how to use this, will be uploaded on our youtube channel soon and the link will be provided
![photo_5789823590017909508_y](https://github.com/AliQorbaniFard/SlyFox_audio_visualiser/assets/126378284/4fb6899f-b438-43f1-8906-4d9b86d7547f)
