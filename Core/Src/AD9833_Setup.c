#include "AD9833_Setup.h"

void AD9833_Init(AD9833_Typedef AD9833_1,AD9833_Typedef AD9833_2,AD9833_Typedef AD9833_3)
{
    // AD9833_1 Pin configuration
    AD9833_1.PORT = GPIOC;
    AD9833_1.DATA = GPIO_PIN_0;
    AD9833_1.SCK = GPIO_PIN_1;
    AD9833_1.SS = GPIO_PIN_2;
    // AD9833_2 Pin configuration
    AD9833_2.PORT = GPIOA;
    AD9833_2.DATA = GPIO_PIN_1;
    AD9833_2.SCK = GPIO_PIN_2;
    AD9833_2.SS = GPIO_PIN_3;
    // AD9833_3 Pin configuration
    AD9833_3.PORT = GPIOA;
    AD9833_3.DATA = GPIO_PIN_4;
    AD9833_3.SCK = GPIO_PIN_5;
    AD9833_3.SS = GPIO_PIN_6;
    // Set all AD9833_1 pin to High
    HAL_GPIO_WritePin(AD9833_1.PORT, AD9833_1.DATA, GPIO_PIN_SET);
    HAL_GPIO_WritePin(AD9833_1.PORT, AD9833_1.SCK, GPIO_PIN_SET);
    HAL_GPIO_WritePin(AD9833_1.PORT, AD9833_1.SS, GPIO_PIN_SET);
    // Set all AD9833_1 pin to High
    HAL_GPIO_WritePin(AD9833_2.PORT, AD9833_2.DATA, GPIO_PIN_SET);
    HAL_GPIO_WritePin(AD9833_2.PORT, AD9833_2.SCK, GPIO_PIN_SET);
    HAL_GPIO_WritePin(AD9833_2.PORT, AD9833_2.SS, GPIO_PIN_SET);
    // Set all AD9833_1 pin to High
    HAL_GPIO_WritePin(AD9833_3.PORT, AD9833_3.DATA, GPIO_PIN_SET);
    HAL_GPIO_WritePin(AD9833_3.PORT, AD9833_3.SCK, GPIO_PIN_SET);
    HAL_GPIO_WritePin(AD9833_3.PORT, AD9833_3.SS, GPIO_PIN_SET);
    // Set default frequecy which is employeed by AD9833
    AD9833_SetWave(SIN, AD9833_1);          // Type Of Wave
    AD9833_SetWaveData(11000, 0, AD9833_1); // Frequency & Phase Set
    AD9833_SetWave(SIN, AD9833_2);
    AD9833_SetWaveData(11000, 0, AD9833_2);
    AD9833_SetWave(SIN, AD9833_3);
    AD9833_SetWaveData(11000, 0, AD9833_3);
    return;
}
