#include "uart_ci.h"
#include "stdint.h"
#include "usart.h"
#include <stdio.h>
#include "cli_command.h"
#define UART_BUFF_MAX_LEN 100

char data_rx_buff[UART_BUFF_MAX_LEN];
uint8_t data_len;
uint8_t rx_flag;
char data_rx;

void uart_rx_check(char data_rx){
    if(data_rx == '\r' || data_rx == '\n'){
        if (data_len > 0) {                  
            data_rx_buff[data_len] = '\0';   
            rx_flag = 1;
        }       
    }
    else{
        data_rx_buff[data_len++] = data_rx;
    }
}

void uart_rx_handle(void){
    if(rx_flag == 1 ){
        cli_excute(data_rx_buff, data_len);
        data_len = 0;
        rx_flag = 0;
    }

}