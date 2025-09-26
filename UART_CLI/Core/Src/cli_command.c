
#include "stdint.h"
#include "cli_command.h"
#include <stdio.h>
#include <sensor.h>
#include <string.h>


cli_cmd_infor_t *cli_find_cmd(char *cmd){
    cli_cmd_entry_t *check = cli_cmd_table;
    while (check -> command_infor != NULL){
        if (strcmp(check->name, cmd) == 0){
            return check->command_infor;
        }
        check++;
    }
    return NULL;
}

void cli_excute(char *data_rx_buff, uint8_t data_rx_len){
    char *cmd[10];
    uint8_t cmd_len = 0;
    cli_cmd_infor_t *command;
    char *token = strtok(data_rx_buff, " ");
    while (token != NULL){
        cmd[cmd_len] = token;
        token = strtok(NULL, " "); 
        cmd_len++;
    }
    command  = cli_find_cmd(cmd[0]);
    if(command != NULL ){
        command -> cli_function(cmd, cmd_len);
    }
    else{
        printf("%s", "ERORR");
    }
}
