#include "flash.h"
#include <stdint.h>
#include "stm32f4xx.h"
void Flash_Erase(uint32_t adrress){
    HAL_FLASH_Unlock();
    FLASH_EraseInitTypeDef EraseInitStruct;
    EraseInitStruct.Banks = 1;
    EraseInitStruct.NbSectors = 1;
    EraseInitStruct.TypeErase = FLASH_TYPEERASE_SECTORS;
    uint32_t page_status;
    HAL_FLASHEx_Erase(&EraseInitStruct, &page_status);
    HAL_FLASH_Lock();
}
void Flash_Write_Int(uint32_t address, int Data){
    HAL_FLASH_Unlock();
    HAL_FLASH_Program(FLASH_TYPEPROGRAM_HALFWORD, address,  Data);
    HAL_FLASH_Lock();
}
void Flash_Write_Float(uint32_t address, float f){

}
void Flash_Write_Array(uint32_t address, uint8_t *arr, uint16_t len){

}
int Flash_Read_Int(uint32_t address){
    return *(__IO uint16_t *)(address);
}
float Flash_Read_Flash(uint32_t address)
{
    
}
void Flash_Read_Array(uint32_t address, uint8_t *arr, uint16_t len)
{

} 