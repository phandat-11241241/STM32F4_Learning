#ifndef CLI_COMMAND_H
#define CLI_COMMAND_H

#include<stdint.h>
#include<sensor.h>
#include <stddef.h>
#include<cli_type.h>

typedef void (*cli_cmd_func_t)(char **cmd, uint8_t cmd_len);
void cli_excute(char *data_rx_buff, uint8_t data_rx_len);
cli_cmd_infor_t *cli_find_cmd(char *cmd);

#endif