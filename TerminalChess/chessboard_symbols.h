#pragma once
#ifndef CHESS_SYMBOLS_H
#define CHESS_SYMBOLS_H

// Declare 2D array for board symbols
char symb_cord[9][9][4][5];  // x=1..8, y=1..8, string " t ", id BP01
int king_true_int; // 0; both kings there 

// Function to initialize all squares to "t"
void init_start_board_symbols();
void init_start_board_symbols();

void init_move_white();
void move_piece(int from_x, int from_y, int to_x, int to_y, const char* piece_Symbol, const char* piece_ID);
void white_pawn_select_piece(int cord_x, int cord_y);
void black_pawn_select_piece(int cord_x, int cord_y);

void check_king_status();

void check_if_piece_x8(int cord_x, int cord_y, int true_false_int);

#endif // CHESS_SYMBOLS_H
