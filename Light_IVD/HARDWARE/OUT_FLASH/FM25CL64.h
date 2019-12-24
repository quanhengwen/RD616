#ifndef __FM25CL64_H__
#define __FM25CL64_H__	

#define FRAME_SPI       0

#define FRAME_CS_GPIO_CLK			RCC_APB2Periph_GPIOA
#define FRAME_CS_GPIO_PORT			GPIOA
#define FRAME_CS_GPIO_PIN			GPIO_Pin_4

#define FM25CL64_CS_HIGH() GPIO_SetBits(FRAME_CS_GPIO_PORT,FRAME_CS_GPIO_PIN)
#define FM25CL64_CS_LOW()  GPIO_ResetBits(FRAME_CS_GPIO_PORT,FRAME_CS_GPIO_PIN)

void FRAME_INIT(void);
UINT8 Read_FM25CL64_Byte(UINT16 addre);
UINT8 Read_FM25CL64_nByte(UINT16 addre,UINT8* buff,UINT16 len);
UINT8 Write_FM25CL64_Byte(UINT16 addre,UINT8 dat);
void Write_FM25CL64_nByte(UINT16 addre,UINT8* buff,UINT16 len);

#endif
