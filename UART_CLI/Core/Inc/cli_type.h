#ifndef __CLI_TYPE_H_
#define __CLI_TYPE_H_

#include<stdint.h>

typedef void (*cli_cmd_func_t)(char **cmd, uint8_t cmd_len);
typedef struct {
     cli_cmd_func_t cli_function;
     char *help;
}cli_cmd_infor_t;

typedef struct 
{
     char *name;
     cli_cmd_infor_t *command_infor;
}cli_cmd_entry_t;
extern cli_cmd_entry_t cli_cmd_table[];

#endif