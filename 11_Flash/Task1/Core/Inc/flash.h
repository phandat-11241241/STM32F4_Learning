#ifdef _FLASH_H
#define _FLASH_H
#include <stdint.h>
#include <string.h>

void Flash_Erase(uint32_t adrress);
void Flash_Write_Int(uint32_t address, int value);
void Flash_Write_Float(uint32_t address, float f);
void Flash_Write_Array(uint32_t address, uint8_t *arr, uint16_t len);


int Flash_Read_Int(uint32_t address);
float Flash_Read_Flash(uint32_t address);
void Flash_Read_Array(uint32_t address, uint8_t *arr, uint16_t len); 

#endif