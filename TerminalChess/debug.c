#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#pragma warning (disable:4996)

#include "simple_comands.h"

#include "chess_start_positions.h"
#include "chessboard_symbols.h"
#include "debug.h"
#include "piece_id.h"

void init_debug_wait_scanf() {
	int init_debug_wait_scanf;
	printf("Debug Debug");
	scanf(" %i", &init_debug_wait_scanf);
}