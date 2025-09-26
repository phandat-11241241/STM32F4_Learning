#include<cli_type.h>
#include<sensor.h>
#include <stddef.h>
cli_cmd_infor_t cli_get_data = {
    get_data,
    "get data funtion"
};

extern cli_cmd_entry_t cli_cmd_table[] = {
    {"GETDATA", &cli_get_data},
    {NULL, NULL}
};