// simple_comands.c
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#pragma warning (disable:4996)

#include "chess_start_positions.h"
#include "chessboard_symbols.h"
#include "debug.h"
#include "piece_id.h"

#include "simple_comands.h"


// Definition of the custom print function
void print(const char* format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

int randomNumnumberGen(amount) {
    srand(time(0));
    return rand() % amount + 1;
}