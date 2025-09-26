#include "uart_ci.h"
#include "stdint.h"
#include "usart.h"
#include <stdio.h>
#include <sensor.h>
#include <string.h>
void get_data(char **cmd, uint8_t cmd_len){
        if(cmd_len  > 2 ){
            printf("%s","To much agrument");
        }
        else if(cmd_len  < 2 ){
            printf("%s","Not enoung agrument");
        }
        else{
             printf("%s", "Get data success ");
             
        }
        if(atoi(cmd[1]) == 2){
            printf("%s", "HELLO ");
        }
}
