#ifndef UART_CI_H
#define UART_CI_H

extern char data_rx; 
void uart_rx_check(char data);
void uart_rx_handle(void);

#endif