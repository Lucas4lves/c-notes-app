#ifndef RESULT_H
#define RESULT_H

#include<stdlib.h>

typedef struct {
    int exit_code;
    char * error_msg;
} Result;
#endif