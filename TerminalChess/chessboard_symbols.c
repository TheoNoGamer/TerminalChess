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

// Define the 2D array
char symb_cord[9][9][4][5];  // x=1..8, y=1..8, string " t ", id BP01

// Define piece symbols (white in [ ], black in spaces)
 // White pieces
char piece_Pawn_White[4] = "[P]";
char piece_Rook_White[4] = "[R]";
char piece_Knight_White[4] = "[N]";
char piece_Bishop_White[4] = "[B]";
char piece_Queen_White[4] = "[Q]";
char piece_King_White[4] = "[K]";

// Black pieces
char piece_Pawn_Black[4] = " P ";
char piece_Rook_Black[4] = " R ";
char piece_Knight_Black[4] = " N ";
char piece_Bishop_Black[4] = " B ";
char piece_Queen_Black[4] = " Q ";
char piece_King_Black[4] = " K ";

char piece_Empty[4] = "   ";

// Initialize all squares to "t"
void init_blank_board_symbols() {
    for (int x = 1; x <= 8; x++) {
        for (int y = 1; y <= 8; y++) {
            // Empty symbol
            strcpy_s(symb_cord[x][y][0], sizeof(symb_cord[0][0][0]), piece_Empty);
            // Empty ID
            strcpy_s(symb_cord[x][y][1], sizeof(symb_cord[0][0][0]), EMPTY_ID);
        }
    }
}

void init_start_board_symbols() {
    // --- White Pawns ---
    strcpy_s(symb_cord[PAWN01_WHITE_X][PAWN01_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_White);
    strcpy_s(symb_cord[PAWN01_WHITE_X][PAWN01_WHITE_Y][1], sizeof(symb_cord[0][0][0]), PAWN01_WHITE_ID);

    strcpy_s(symb_cord[PAWN02_WHITE_X][PAWN02_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_White);
    strcpy_s(symb_cord[PAWN02_WHITE_X][PAWN02_WHITE_Y][1], sizeof(symb_cord[0][0][0]), PAWN02_WHITE_ID);

    strcpy_s(symb_cord[PAWN03_WHITE_X][PAWN03_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_White);
    strcpy_s(symb_cord[PAWN03_WHITE_X][PAWN03_WHITE_Y][1], sizeof(symb_cord[0][0][0]), PAWN03_WHITE_ID);

    strcpy_s(symb_cord[PAWN04_WHITE_X][PAWN04_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_White);
    strcpy_s(symb_cord[PAWN04_WHITE_X][PAWN04_WHITE_Y][1], sizeof(symb_cord[0][0][0]), PAWN04_WHITE_ID);

    strcpy_s(symb_cord[PAWN05_WHITE_X][PAWN05_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_White);
    strcpy_s(symb_cord[PAWN05_WHITE_X][PAWN05_WHITE_Y][1], sizeof(symb_cord[0][0][0]), PAWN05_WHITE_ID);

    strcpy_s(symb_cord[PAWN06_WHITE_X][PAWN06_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_White);
    strcpy_s(symb_cord[PAWN06_WHITE_X][PAWN06_WHITE_Y][1], sizeof(symb_cord[0][0][0]), PAWN06_WHITE_ID);

    strcpy_s(symb_cord[PAWN07_WHITE_X][PAWN07_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_White);
    strcpy_s(symb_cord[PAWN07_WHITE_X][PAWN07_WHITE_Y][1], sizeof(symb_cord[0][0][0]), PAWN07_WHITE_ID);

    strcpy_s(symb_cord[PAWN08_WHITE_X][PAWN08_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_White);
    strcpy_s(symb_cord[PAWN08_WHITE_X][PAWN08_WHITE_Y][1], sizeof(symb_cord[0][0][0]), PAWN08_WHITE_ID);

    // --- White Rooks ---
    strcpy_s(symb_cord[ROOK01_WHITE_X][ROOK01_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Rook_White);
    strcpy_s(symb_cord[ROOK01_WHITE_X][ROOK01_WHITE_Y][1], sizeof(symb_cord[0][0][0]), ROOK01_WHITE_ID);

    strcpy_s(symb_cord[ROOK02_WHITE_X][ROOK02_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Rook_White);
    strcpy_s(symb_cord[ROOK02_WHITE_X][ROOK02_WHITE_Y][1], sizeof(symb_cord[0][0][0]), ROOK02_WHITE_ID);

    // --- White Knights ---
    strcpy_s(symb_cord[KNIGHT01_WHITE_X][KNIGHT01_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Knight_White);
    strcpy_s(symb_cord[KNIGHT01_WHITE_X][KNIGHT01_WHITE_Y][1], sizeof(symb_cord[0][0][0]), KNIGHT01_WHITE_ID);

    strcpy_s(symb_cord[KNIGHT02_WHITE_X][KNIGHT02_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Knight_White);
    strcpy_s(symb_cord[KNIGHT02_WHITE_X][KNIGHT02_WHITE_Y][1], sizeof(symb_cord[0][0][0]), KNIGHT02_WHITE_ID);

    // --- White Bishops ---
    strcpy_s(symb_cord[BISHOP01_WHITE_X][BISHOP01_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Bishop_White);
    strcpy_s(symb_cord[BISHOP01_WHITE_X][BISHOP01_WHITE_Y][1], sizeof(symb_cord[0][0][0]), BISHOP01_WHITE_ID);

    strcpy_s(symb_cord[BISHOP02_WHITE_X][BISHOP02_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Bishop_White);
    strcpy_s(symb_cord[BISHOP02_WHITE_X][BISHOP02_WHITE_Y][1], sizeof(symb_cord[0][0][0]), BISHOP02_WHITE_ID);

    // --- White Queen ---
    strcpy_s(symb_cord[QUEEN01_WHITE_X][QUEEN01_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_Queen_White);
    strcpy_s(symb_cord[QUEEN01_WHITE_X][QUEEN01_WHITE_Y][1], sizeof(symb_cord[0][0][0]), QUEEN01_WHITE_ID);

    // --- White King ---
    strcpy_s(symb_cord[KING01_WHITE_X][KING01_WHITE_Y][0], sizeof(symb_cord[0][0][0]), piece_King_White);
    strcpy_s(symb_cord[KING01_WHITE_X][KING01_WHITE_Y][1], sizeof(symb_cord[0][0][0]), KING01_WHITE_ID);

    // --- Black Pawns ---
    strcpy_s(symb_cord[PAWN01_BLACK_X][PAWN01_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_Black);
    strcpy_s(symb_cord[PAWN01_BLACK_X][PAWN01_BLACK_Y][1], sizeof(symb_cord[0][0][0]), PAWN01_BLACK_ID);

    strcpy_s(symb_cord[PAWN02_BLACK_X][PAWN02_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_Black);
    strcpy_s(symb_cord[PAWN02_BLACK_X][PAWN02_BLACK_Y][1], sizeof(symb_cord[0][0][0]), PAWN02_BLACK_ID);

    strcpy_s(symb_cord[PAWN03_BLACK_X][PAWN03_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_Black);
    strcpy_s(symb_cord[PAWN03_BLACK_X][PAWN03_BLACK_Y][1], sizeof(symb_cord[0][0][0]), PAWN03_BLACK_ID);

    strcpy_s(symb_cord[PAWN04_BLACK_X][PAWN04_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_Black);
    strcpy_s(symb_cord[PAWN04_BLACK_X][PAWN04_BLACK_Y][1], sizeof(symb_cord[0][0][0]), PAWN04_BLACK_ID);

    strcpy_s(symb_cord[PAWN05_BLACK_X][PAWN05_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_Black);
    strcpy_s(symb_cord[PAWN05_BLACK_X][PAWN05_BLACK_Y][1], sizeof(symb_cord[0][0][0]), PAWN05_BLACK_ID);

    strcpy_s(symb_cord[PAWN06_BLACK_X][PAWN06_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_Black);
    strcpy_s(symb_cord[PAWN06_BLACK_X][PAWN06_BLACK_Y][1], sizeof(symb_cord[0][0][0]), PAWN06_BLACK_ID);

    strcpy_s(symb_cord[PAWN07_BLACK_X][PAWN07_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_Black);
    strcpy_s(symb_cord[PAWN07_BLACK_X][PAWN07_BLACK_Y][1], sizeof(symb_cord[0][0][0]), PAWN07_BLACK_ID);

    strcpy_s(symb_cord[PAWN08_BLACK_X][PAWN08_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Pawn_Black);
    strcpy_s(symb_cord[PAWN08_BLACK_X][PAWN08_BLACK_Y][1], sizeof(symb_cord[0][0][0]), PAWN08_BLACK_ID);

    // --- Black Rooks ---
    strcpy_s(symb_cord[ROOK01_BLACK_X][ROOK01_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Rook_Black);
    strcpy_s(symb_cord[ROOK01_BLACK_X][ROOK01_BLACK_Y][1], sizeof(symb_cord[0][0][0]), ROOK01_BLACK_ID);

    strcpy_s(symb_cord[ROOK02_BLACK_X][ROOK02_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Rook_Black);
    strcpy_s(symb_cord[ROOK02_BLACK_X][ROOK02_BLACK_Y][1], sizeof(symb_cord[0][0][0]), ROOK02_BLACK_ID);

    // --- Black Knights ---
    strcpy_s(symb_cord[KNIGHT01_BLACK_X][KNIGHT01_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Knight_Black);
    strcpy_s(symb_cord[KNIGHT01_BLACK_X][KNIGHT01_BLACK_Y][1], sizeof(symb_cord[0][0][0]), KNIGHT01_BLACK_ID);

    strcpy_s(symb_cord[KNIGHT02_BLACK_X][KNIGHT02_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Knight_Black);
    strcpy_s(symb_cord[KNIGHT02_BLACK_X][KNIGHT02_BLACK_Y][1], sizeof(symb_cord[0][0][0]), KNIGHT02_BLACK_ID);

    // --- Black Bishops ---
    strcpy_s(symb_cord[BISHOP01_BLACK_X][BISHOP01_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Bishop_Black);
    strcpy_s(symb_cord[BISHOP01_BLACK_X][BISHOP01_BLACK_Y][1], sizeof(symb_cord[0][0][0]), BISHOP01_BLACK_ID);

    strcpy_s(symb_cord[BISHOP02_BLACK_X][BISHOP02_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Bishop_Black);
    strcpy_s(symb_cord[BISHOP02_BLACK_X][BISHOP02_BLACK_Y][1], sizeof(symb_cord[0][0][0]), BISHOP02_BLACK_ID);

    // --- Black Queen ---
    strcpy_s(symb_cord[QUEEN01_BLACK_X][QUEEN01_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_Queen_Black);
    strcpy_s(symb_cord[QUEEN01_BLACK_X][QUEEN01_BLACK_Y][1], sizeof(symb_cord[0][0][0]), QUEEN01_BLACK_ID);

    // --- Black King ---
    strcpy_s(symb_cord[KING01_BLACK_X][KING01_BLACK_Y][0], sizeof(symb_cord[0][0][0]), piece_King_Black);
    strcpy_s(symb_cord[KING01_BLACK_X][KING01_BLACK_Y][1], sizeof(symb_cord[0][0][0]), KING01_BLACK_ID);

    /*
    print("\n=== DEBUG: Chess Board Initialized ===\n");
    for (int y = 8; y >= 1; y--) { // print from rank 8 down to rank 1
        print("%d | ", y);
        for (int x = 1; x <= 8; x++) {
            print("%s(%s) ",
                symb_cord[x][y][0],   // piece symbol
                symb_cord[x][y][1]);  // piece ID
        }
        print("\n");
    }
    print("\n");
    */

}

/// when "x0" is changges player, should not do that

// make white and black move diferent voids
void init_move_white() {
    char cord_x_char;
    int cord_x_int;
    int cord_y_int;

    char cord_x_char_02;
    int cord_x_int_02;
    int cord_y_int_02;

    char pieceID[5];
    char pieceID_02[5];
    char piece_Symbol[4];
    char piece_Symbol_02[4];

    int piece_there_truefalse_int = 0;
    int selectCordValid = 0;

    do {
        print("\nSelect a piece by writing the cord (ex. b2): ");
        scanf(" %c", &cord_x_char);
        scanf(" %i", &cord_y_int);

        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' ||
            cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {

            print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);

            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                cord_x_int = cord_x_char - 'a' + 1;
            }
            else {
                print("Something went wrong.\n");
                exit(1);
            }

            if (strcmp(symb_cord[cord_x_int][cord_y_int][1], EMPTY_ID) != 0) {
                selectCordValid = 1;

                strcpy_s(pieceID, sizeof(pieceID), symb_cord[cord_x_int][cord_y_int][1]);
                strcpy_s(piece_Symbol, sizeof(piece_Symbol), symb_cord[cord_x_int][cord_y_int][0]);

                int selectCordValid_02 = 0;

                if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[P]") == 0) {
                    print("This is a White Pawn\n");
                    selectCordValid_02 = 0;

                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' ||
                            cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {

                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1;
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1;
                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (strcmp(piece_Symbol_02, piece_Pawn_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Rook_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Knight_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_King_White) == 0) {

                            print("you can not move over your own piece!!");

                        }
                        else {
                            if (cord_x_int_02 == cord_x_int) {
                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02][0], "   ") == 0) {
                                    print("\nYou Selected %c%i \n", cord_x_char_02, cord_y_int_02);

                                    if (cord_y_int_02 == cord_y_int + 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        print("Move piece 1 step");
                                        selectCordValid = 1;
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 2) {
                                        if (cord_y_int == 2) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            print("Move piece 2 steps");
                                            selectCordValid = 1;
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("You can not move there!");
                                            selectCordValid_02 = 0;
                                        }
                                    }
                                    else {
                                        print("You can not move there! Error");
                                    }
                                }
                                else {
                                    print("you can not walk over an other piece!");
                                }
                            }
                            else if (cord_x_int_02 == cord_x_int - 1 || cord_x_int_02 == cord_x_int + 1) {
                                if (cord_y_int_02 == cord_y_int + 1) {
                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02][1], EMPTY_ID) != 0) {
                                        piece_there_truefalse_int = 1;
                                    }
                                    else {
                                        piece_there_truefalse_int = 0;
                                    }

                                    if (piece_there_truefalse_int == 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        print("\nYou moved to %c%i \n", cord_x_char_02, cord_y_int_02);
                                        selectCordValid = 1;
                                        selectCordValid_02 = 1;
                                    }
                                    else if (piece_there_truefalse_int == 0) {
                                        print("\nYou can not move diagonal when there is no piece to be taken");
                                    }
                                    else {
                                        print("Something went wrong.\n");
                                        exit(1);
                                    }
                                }
                                else {
                                    print("You can not move there! Error");
                                }
                            }
                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);

                    if (cord_y_int_02 == 8) {
                        white_pawn_select_piece(cord_x_int_02, cord_y_int_02);
                    }
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[R]") == 0) { // White Rook
                    print("This is a White Rook\n");
                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (/*strcmp(piece_Symbol_02, "   ") == 0 || */
                            strcmp(piece_Symbol_02, piece_Pawn_White) == 0 || strcmp(piece_Symbol_02, piece_Rook_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_White) == 0 || strcmp(piece_Symbol_02, piece_Knight_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_White) == 0 || strcmp(piece_Symbol_02, piece_King_White) == 0) {
                            print("you can not move over your own piece!!");
                        }
                        else {
                            if (cord_x_int_02 == cord_x_int && cord_y_int_02 != cord_y_int) { // ^
                                if (cord_y_int_02 > cord_y_int) { // move up
                                    if (cord_y_int_02 == cord_y_int + 1) { // +1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 2) { // +2
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                selectCordValid_02 = 1;
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                    selectCordValid_02 = 1;
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                        selectCordValid_02 = 1;
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 5][0], "   ") == 0) {
                                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                            selectCordValid_02 = 1;
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 5][0], "   ") == 0) {
                                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 6][0], "   ") == 0) {
                                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                                selectCordValid_02 = 1;
                                                            }
                                                            else {
                                                                print("you can not move there");
                                                            }
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }
                                else if (cord_y_int_02 < cord_y_int) { // move down
                                    if (cord_y_int_02 == cord_y_int - 1) { // -1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 2) { // -2
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                selectCordValid_02 = 1;
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                    selectCordValid_02 = 1;
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                        selectCordValid_02 = 1;
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 5][0], "   ") == 0) {
                                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                            selectCordValid_02 = 1;
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 5][0], "   ") == 0) {
                                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 6][0], "   ") == 0) {
                                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                                selectCordValid_02 = 1;
                                                            }
                                                            else {
                                                                print("you can not move there");
                                                            }
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }
                                
                            }
                            else if (cord_y_int_02 == cord_y_int && cord_x_int_02 != cord_x_int) { // >
                                if (cord_x_int_02 > cord_x_int) { // move right
                                    if (cord_x_int_02 == cord_x_int + 1) { // +1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2) { // +2
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // move left
                                    if (cord_x_int_02 == cord_x_int - 1) { // -1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2) { // -2
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3) { // -3
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4) { // -4
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5) { // -5
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6) { // -6
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7) { // -7
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }

                            }
                            
                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[N]") == 0) {
                    print("This is a White Knight\n");

                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (/*strcmp(piece_Symbol_02, "   ") == 0 || */
                            strcmp(piece_Symbol_02, piece_Pawn_White) == 0 || strcmp(piece_Symbol_02, piece_Rook_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_White) == 0 || strcmp(piece_Symbol_02, piece_Knight_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_White) == 0 || strcmp(piece_Symbol_02, piece_King_White) == 0) {
                            print("you can not move over your own piece!!");
                        }
                        else {
                            if (cord_x_int_02 == cord_x_int + 1 || cord_x_int_02 == cord_x_int - 1) {  // move up down
                                if (cord_y_int_02 == cord_y_int + 2) {
                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                    selectCordValid_02 = 1;
                                }
                                else if (cord_y_int_02 == cord_y_int - 2) {
                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                    selectCordValid_02 = 1;
                                }
                                
                            }
                            else if(cord_y_int_02 == cord_y_int +1 || cord_y_int_02 == cord_y_int -1) { // move left right
                                if (cord_x_int_02 == cord_x_int + 2) {
                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                    selectCordValid_02 = 1;
                                }
                                else if (cord_x_int_02 == cord_x_int - 2) {
                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                    selectCordValid_02 = 1;
                                }
                            }
                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[B]") == 0) {
                    print("This is a White Bishop\n");
                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (/*strcmp(piece_Symbol_02, "   ") == 0 || */
                            strcmp(piece_Symbol_02, piece_Pawn_White) == 0 || strcmp(piece_Symbol_02, piece_Rook_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_White) == 0 || strcmp(piece_Symbol_02, piece_Knight_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_White) == 0 || strcmp(piece_Symbol_02, piece_King_White) == 0) {
                            print("you can not move over your own piece!!");
                        }
                        else {
                            if (cord_y_int_02 > cord_y_int) {  // move up
                                if (cord_x_int_02 > cord_x_int) { // up right
                                    if (cord_x_int_02 == cord_x_int + 1 || cord_y_int_02 == cord_y_int + 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2 || cord_y_int_02 == cord_y_int + 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3 || cord_y_int_02 == cord_y_int + 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0  &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4 || cord_y_int_02 == cord_y_int + 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5 || cord_y_int_02 == cord_y_int + 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6 || cord_y_int_02 == cord_y_int + 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 - 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7 || cord_y_int_02 == cord_y_int + 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 - 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02 - 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // up left
                                    if (cord_x_int_02 == cord_x_int - 1 || cord_y_int_02 == cord_y_int + 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2 || cord_y_int_02 == cord_y_int + 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3 || cord_y_int_02 == cord_y_int + 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4 || cord_y_int_02 == cord_y_int + 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5 || cord_y_int_02 == cord_y_int + 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6 || cord_y_int_02 == cord_y_int + 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 - 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7 || cord_y_int_02 == cord_y_int + 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 - 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02 - 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                            }
                            else if (cord_y_int_02 < cord_y_int) { // move down
                                if (cord_x_int_02 > cord_x_int) { // down right
                                    if (cord_x_int_02 == cord_x_int + 1 || cord_y_int_02 == cord_y_int - 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2 || cord_y_int_02 == cord_y_int - 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3 || cord_y_int_02 == cord_y_int - 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4 || cord_y_int_02 == cord_y_int - 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5 || cord_y_int_02 == cord_y_int - 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6 || cord_y_int_02 == cord_y_int - 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 + 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7 || cord_y_int_02 == cord_y_int - 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 + 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02 + 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // down left
                                    if (cord_x_int_02 == cord_x_int - 1 || cord_y_int_02 == cord_y_int - 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2 || cord_y_int_02 == cord_y_int - 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3 || cord_y_int_02 == cord_y_int - 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4 || cord_y_int_02 == cord_y_int - 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5 || cord_y_int_02 == cord_y_int - 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6 || cord_y_int_02 == cord_y_int - 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 + 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7 || cord_y_int_02 == cord_y_int - 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 + 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02 + 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                            }
                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[Q]") == 0) {
                    print("This is a White Queen\n");
                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (/*strcmp(piece_Symbol_02, "   ") == 0 || */
                            strcmp(piece_Symbol_02, piece_Pawn_White) == 0 || strcmp(piece_Symbol_02, piece_Rook_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_White) == 0 || strcmp(piece_Symbol_02, piece_Knight_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_White) == 0 || strcmp(piece_Symbol_02, piece_King_White) == 0) {
                            print("you can not move over your own piece!!");
                        }
                        else {
                            if (cord_x_int_02 == cord_x_int && cord_y_int_02 != cord_y_int) { // ^
                                if (cord_y_int_02 > cord_y_int) { // move up
                                    if (cord_y_int_02 == cord_y_int + 1) { // +1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 2) { // +2
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                selectCordValid_02 = 1;
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                    selectCordValid_02 = 1;
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                        selectCordValid_02 = 1;
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 5][0], "   ") == 0) {
                                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                            selectCordValid_02 = 1;
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 5][0], "   ") == 0) {
                                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 6][0], "   ") == 0) {
                                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                                selectCordValid_02 = 1;
                                                            }
                                                            else {
                                                                print("you can not move there");
                                                            }
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }
                                else if (cord_y_int_02 < cord_y_int) { // move down
                                    if (cord_y_int_02 == cord_y_int - 1) { // -1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 2) { // -2
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                selectCordValid_02 = 1;
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                    selectCordValid_02 = 1;
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                        selectCordValid_02 = 1;
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 5][0], "   ") == 0) {
                                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                            selectCordValid_02 = 1;
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 5][0], "   ") == 0) {
                                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 6][0], "   ") == 0) {
                                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                                selectCordValid_02 = 1;
                                                            }
                                                            else {
                                                                print("you can not move there");
                                                            }
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }

                            }
                            else if (cord_y_int_02 == cord_y_int && cord_x_int_02 != cord_x_int) { // >
                                if (cord_x_int_02 > cord_x_int) { // move right
                                    if (cord_x_int_02 == cord_x_int + 1) { // +1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2) { // +2
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // move left
                                    if (cord_x_int_02 == cord_x_int - 1) { // -1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2) { // -2
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3) { // -3
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4) { // -4
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5) { // -5
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6) { // -6
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7) { // -7
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }

                            }

                            else if (cord_y_int_02 > cord_y_int && cord_x_int_02 != cord_x_int) {  // move up
                                if (cord_x_int_02 > cord_x_int) { // up right
                                    if (cord_x_int_02 == cord_x_int + 1 || cord_y_int_02 == cord_y_int + 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2 || cord_y_int_02 == cord_y_int + 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3 || cord_y_int_02 == cord_y_int + 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4 || cord_y_int_02 == cord_y_int + 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5 || cord_y_int_02 == cord_y_int + 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6 || cord_y_int_02 == cord_y_int + 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 - 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7 || cord_y_int_02 == cord_y_int + 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 - 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02 - 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // up left
                                    if (cord_x_int_02 == cord_x_int - 1 || cord_y_int_02 == cord_y_int + 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2 || cord_y_int_02 == cord_y_int + 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3 || cord_y_int_02 == cord_y_int + 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4 || cord_y_int_02 == cord_y_int + 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5 || cord_y_int_02 == cord_y_int + 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6 || cord_y_int_02 == cord_y_int + 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 - 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7 || cord_y_int_02 == cord_y_int + 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 - 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02 - 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                            }
                            else if (cord_y_int_02 < cord_y_int && cord_x_int_02 != cord_x_int) { // move down
                                if (cord_x_int_02 > cord_x_int) { // down right
                                    if (cord_x_int_02 == cord_x_int + 1 || cord_y_int_02 == cord_y_int - 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2 || cord_y_int_02 == cord_y_int - 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3 || cord_y_int_02 == cord_y_int - 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4 || cord_y_int_02 == cord_y_int - 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5 || cord_y_int_02 == cord_y_int - 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6 || cord_y_int_02 == cord_y_int - 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 + 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7 || cord_y_int_02 == cord_y_int - 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 + 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02 + 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // down left
                                    if (cord_x_int_02 == cord_x_int - 1 || cord_y_int_02 == cord_y_int - 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2 || cord_y_int_02 == cord_y_int - 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3 || cord_y_int_02 == cord_y_int - 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4 || cord_y_int_02 == cord_y_int - 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5 || cord_y_int_02 == cord_y_int - 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6 || cord_y_int_02 == cord_y_int - 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 + 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7 || cord_y_int_02 == cord_y_int - 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 + 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02 + 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                            }

                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);

                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[K]") == 0) {
                    print("This is a White King\n");
                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (/*strcmp(piece_Symbol_02, "   ") == 0 || */
                            strcmp(piece_Symbol_02, piece_Pawn_White) == 0 || strcmp(piece_Symbol_02, piece_Rook_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_White) == 0 || strcmp(piece_Symbol_02, piece_Knight_White) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_White) == 0 || strcmp(piece_Symbol_02, piece_King_White) == 0) {
                            print("you can not move over your own piece!!");
                        }
                        else {
                            if (cord_x_int_02 == cord_x_int && cord_y_int_02 == cord_y_int + 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int + 1 && cord_y_int_02 == cord_y_int + 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int + 1 && cord_y_int_02 == cord_y_int) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int + 1 && cord_y_int_02 == cord_y_int - 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int && cord_y_int_02 == cord_y_int - 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int - 1 && cord_y_int_02 == cord_y_int - 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int - 1 && cord_y_int_02 == cord_y_int) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int - 1 && cord_y_int_02 == cord_y_int + 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);

                }

                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " P ") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " R ") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " N ") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " B ") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " Q ") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " K ") == 0) {
                    print("Select your own piece\n");
                }
                else {
                    print("Empty square or invalid piece\n");
                }
            }
        }
        else if (strcmp(symb_cord[cord_x_int][cord_y_int][1], EMPTY_ID) == 0) {
            selectCordValid = 0;
            print("\nYou need to select a square where there is a piece!\n");
        }
        else {
            print("Something whent caboom!!!");
        }
    } while (selectCordValid == 0);
}

void init_move_black() {
    char cord_x_char;
    int cord_x_int;
    int cord_y_int;

    char cord_x_char_02;
    int cord_x_int_02;
    int cord_y_int_02;

    char pieceID[5];
    char pieceID_02[5];
    char piece_Symbol[4];
    char piece_Symbol_02[4];

    int piece_there_truefalse_int = 0;
    int selectCordValid = 0;

    do {
        print("\nSelect a piece by writing the cord (ex. b2): ");
        scanf(" %c", &cord_x_char);
        scanf(" %i", &cord_y_int);

        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' ||
            cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {

            print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);

            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                cord_x_int = cord_x_char - 'a' + 1;
            }
            else {
                print("Something went wrong.\n");
                exit(1);
            }

            if (strcmp(symb_cord[cord_x_int][cord_y_int][1], EMPTY_ID) != 0) {
                selectCordValid = 1;

                strcpy_s(pieceID, sizeof(pieceID), symb_cord[cord_x_int][cord_y_int][1]);
                strcpy_s(piece_Symbol, sizeof(piece_Symbol), symb_cord[cord_x_int][cord_y_int][0]);

                int selectCordValid_02 = 0;

                if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " P ") == 0) {
                    print("This is a Black Pawn\n");
                    selectCordValid_02 = 0;

                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' ||
                            cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {

                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1;
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1;
                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (strcmp(piece_Symbol_02, piece_Pawn_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Rook_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Knight_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_King_Black) == 0) {

                            print("you can not move over your own piece!!");

                        }
                        else {
                            if (cord_x_int_02 == cord_x_int) {
                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02][0], "   ") == 0) {
                                    print("\nYou Selected %c%i \n", cord_x_char_02, cord_y_int_02);

                                    if (cord_y_int_02 == cord_y_int - 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        print("Move piece 1 step");
                                        selectCordValid = 1;
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 2) {
                                        if (cord_y_int == 7) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            print("Move piece 2 steps");
                                            selectCordValid = 1;
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("You can not move there!");
                                            selectCordValid_02 = 0;
                                        }
                                    }
                                    else {
                                        print("You can not move there! Error");
                                    }
                                }
                                else {
                                    print("you can not walk over an other piece!");
                                }
                            }
                            else if (cord_x_int_02 == cord_x_int - 1 || cord_x_int_02 == cord_x_int + 1) {
                                if (cord_y_int_02 == cord_y_int - 1) {
                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02][1], EMPTY_ID) != 0) {
                                        piece_there_truefalse_int = 1;
                                    }
                                    else {
                                        piece_there_truefalse_int = 0;
                                    }

                                    if (piece_there_truefalse_int == 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        print("\nYou moved to %c%i \n", cord_x_char_02, cord_y_int_02);
                                        selectCordValid = 1;
                                        selectCordValid_02 = 1;
                                    }
                                    else if (piece_there_truefalse_int == 0) {
                                        print("\nYou can not move diagonal when there is no piece to be taken");
                                    }
                                    else {
                                        print("Something went wrong.\n");
                                        exit(1);
                                    }
                                }
                                else {
                                    print("You can not move there! Error");
                                }
                            }
                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);

                    if (cord_y_int_02 == 1) {
                        black_pawn_select_piece(cord_x_int_02, cord_y_int_02);
                    }
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " R ") == 0) { // White Rook
                    print("This is a Black Rook\n");
                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (strcmp(piece_Symbol_02, piece_Pawn_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Rook_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Knight_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_King_Black) == 0) {

                            print("you can not move over your own piece!!");

                        }
                        else {
                            if (cord_x_int_02 == cord_x_int && cord_y_int_02 != cord_y_int) { // ^
                                if (cord_y_int_02 > cord_y_int) { // move up
                                    if (cord_y_int_02 == cord_y_int + 1) { // +1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 2) { // +2
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                selectCordValid_02 = 1;
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                    selectCordValid_02 = 1;
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                        selectCordValid_02 = 1;
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 5][0], "   ") == 0) {
                                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                            selectCordValid_02 = 1;
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 5][0], "   ") == 0) {
                                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 6][0], "   ") == 0) {
                                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                                selectCordValid_02 = 1;
                                                            }
                                                            else {
                                                                print("you can not move there");
                                                            }
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }
                                else if (cord_y_int_02 < cord_y_int) { // move down
                                    if (cord_y_int_02 == cord_y_int - 1) { // -1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 2) { // -2
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                selectCordValid_02 = 1;
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                    selectCordValid_02 = 1;
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                        selectCordValid_02 = 1;
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 5][0], "   ") == 0) {
                                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                            selectCordValid_02 = 1;
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 5][0], "   ") == 0) {
                                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 6][0], "   ") == 0) {
                                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                                selectCordValid_02 = 1;
                                                            }
                                                            else {
                                                                print("you can not move there");
                                                            }
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }

                            }
                            else if (cord_y_int_02 == cord_y_int && cord_x_int_02 != cord_x_int) { // >
                                if (cord_x_int_02 > cord_x_int) { // move right
                                    if (cord_x_int_02 == cord_x_int + 1) { // +1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2) { // +2
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // move left
                                    if (cord_x_int_02 == cord_x_int - 1) { // -1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2) { // -2
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3) { // -3
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4) { // -4
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5) { // -5
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6) { // -6
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7) { // -7
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }

                            }

                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " N ") == 0) {
                    print("This is a Black Knight\n");

                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (strcmp(piece_Symbol_02, piece_Pawn_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Rook_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Knight_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_King_Black) == 0) {

                            print("you can not move over your own piece!!");

                        }
                        else {
                            if (cord_x_int_02 == cord_x_int + 1 || cord_x_int_02 == cord_x_int - 1) {  // move up down
                                if (cord_y_int_02 == cord_y_int + 2) {
                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                    selectCordValid_02 = 1;
                                }
                                else if (cord_y_int_02 == cord_y_int - 2) {
                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                    selectCordValid_02 = 1;
                                }

                            }
                            else if (cord_y_int_02 == cord_y_int + 1 || cord_y_int_02 == cord_y_int - 1) { // move left right
                                if (cord_x_int_02 == cord_x_int + 2) {
                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                    selectCordValid_02 = 1;
                                }
                                else if (cord_x_int_02 == cord_x_int - 2) {
                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                    selectCordValid_02 = 1;
                                }
                            }
                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " B ") == 0) {
                    print("This is a Black Bishop\n");
                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (strcmp(piece_Symbol_02, piece_Pawn_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Rook_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Knight_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_King_Black) == 0) {

                            print("you can not move over your own piece!!");

                        }
                        else {
                            if (cord_y_int_02 > cord_y_int) {  // move up
                                if (cord_x_int_02 > cord_x_int) { // up right
                                    if (cord_x_int_02 == cord_x_int + 1 || cord_y_int_02 == cord_y_int + 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2 || cord_y_int_02 == cord_y_int + 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3 || cord_y_int_02 == cord_y_int + 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4 || cord_y_int_02 == cord_y_int + 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5 || cord_y_int_02 == cord_y_int + 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6 || cord_y_int_02 == cord_y_int + 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 - 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7 || cord_y_int_02 == cord_y_int + 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 - 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02 - 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // up left
                                    if (cord_x_int_02 == cord_x_int - 1 || cord_y_int_02 == cord_y_int + 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2 || cord_y_int_02 == cord_y_int + 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3 || cord_y_int_02 == cord_y_int + 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4 || cord_y_int_02 == cord_y_int + 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5 || cord_y_int_02 == cord_y_int + 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6 || cord_y_int_02 == cord_y_int + 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 - 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7 || cord_y_int_02 == cord_y_int + 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 - 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02 - 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                            }
                            else if (cord_y_int_02 < cord_y_int) { // move down
                                if (cord_x_int_02 > cord_x_int) { // down right
                                    if (cord_x_int_02 == cord_x_int + 1 || cord_y_int_02 == cord_y_int - 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2 || cord_y_int_02 == cord_y_int - 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3 || cord_y_int_02 == cord_y_int - 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4 || cord_y_int_02 == cord_y_int - 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5 || cord_y_int_02 == cord_y_int - 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6 || cord_y_int_02 == cord_y_int - 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 + 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7 || cord_y_int_02 == cord_y_int - 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 + 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02 + 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // down left
                                    if (cord_x_int_02 == cord_x_int - 1 || cord_y_int_02 == cord_y_int - 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2 || cord_y_int_02 == cord_y_int - 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3 || cord_y_int_02 == cord_y_int - 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4 || cord_y_int_02 == cord_y_int - 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5 || cord_y_int_02 == cord_y_int - 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6 || cord_y_int_02 == cord_y_int - 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 + 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7 || cord_y_int_02 == cord_y_int - 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 + 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02 + 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                            }
                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " Q ") == 0) {
                    print("This is a Black Queen\n");
                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (strcmp(piece_Symbol_02, piece_Pawn_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Rook_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Knight_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_King_Black) == 0) {

                            print("you can not move over your own piece!!");

                        }
                        else {
                            if (cord_x_int_02 == cord_x_int && cord_y_int_02 != cord_y_int) { // ^
                                if (cord_y_int_02 > cord_y_int) { // move up
                                    if (cord_y_int_02 == cord_y_int + 1) { // +1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 2) { // +2
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                selectCordValid_02 = 1;
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                    selectCordValid_02 = 1;
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                        selectCordValid_02 = 1;
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 5][0], "   ") == 0) {
                                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                            selectCordValid_02 = 1;
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int + 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 5][0], "   ") == 0) {
                                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 - 6][0], "   ") == 0) {
                                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                                selectCordValid_02 = 1;
                                                            }
                                                            else {
                                                                print("you can not move there");
                                                            }
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }
                                else if (cord_y_int_02 < cord_y_int) { // move down
                                    if (cord_y_int_02 == cord_y_int - 1) { // -1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 2) { // -2
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                selectCordValid_02 = 1;
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                    selectCordValid_02 = 1;
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                        selectCordValid_02 = 1;
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 5][0], "   ") == 0) {
                                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                            selectCordValid_02 = 1;
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                    }
                                    else if (cord_y_int_02 == cord_y_int - 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 1][0], "   ") == 0) {
                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 2][0], "   ") == 0) {
                                                if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 3][0], "   ") == 0) {
                                                    if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 4][0], "   ") == 0) {
                                                        if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 5][0], "   ") == 0) {
                                                            if (strcmp(symb_cord[cord_x_int_02][cord_y_int_02 + 6][0], "   ") == 0) {
                                                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                                                selectCordValid_02 = 1;
                                                            }
                                                            else {
                                                                print("you can not move there");
                                                            }
                                                        }
                                                        else {
                                                            print("you can not move there");
                                                        }
                                                    }
                                                    else {
                                                        print("you can not move there");
                                                    }
                                                }
                                                else {
                                                    print("you can not move there");
                                                }
                                            }
                                            else {
                                                print("you can not move there");
                                            }
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }

                            }
                            else if (cord_y_int_02 == cord_y_int && cord_x_int_02 != cord_x_int) { // >
                                if (cord_x_int_02 > cord_x_int) { // move right
                                    if (cord_x_int_02 == cord_x_int + 1) { // +1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2) { // +2
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3) { // +3
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4) { // +4
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5) { // +5
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6) { // +6
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7) { // +7
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // move left
                                    if (cord_x_int_02 == cord_x_int - 1) { // -1
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2) { // -2
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3) { // -3
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4) { // -4
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5) { // -5
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6) { // -6
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7) { // -7
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                        else {
                                            print("you can not move there");
                                        }
                                    }
                                }

                            }

                            else if (cord_y_int_02 > cord_y_int && cord_x_int_02 != cord_x_int) {  // move up
                                if (cord_x_int_02 > cord_x_int) { // up right
                                    if (cord_x_int_02 == cord_x_int + 1 || cord_y_int_02 == cord_y_int + 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2 || cord_y_int_02 == cord_y_int + 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3 || cord_y_int_02 == cord_y_int + 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4 || cord_y_int_02 == cord_y_int + 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5 || cord_y_int_02 == cord_y_int + 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6 || cord_y_int_02 == cord_y_int + 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 - 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7 || cord_y_int_02 == cord_y_int + 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 - 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02 - 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // up left
                                    if (cord_x_int_02 == cord_x_int - 1 || cord_y_int_02 == cord_y_int + 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2 || cord_y_int_02 == cord_y_int + 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3 || cord_y_int_02 == cord_y_int + 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4 || cord_y_int_02 == cord_y_int + 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5 || cord_y_int_02 == cord_y_int + 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6 || cord_y_int_02 == cord_y_int + 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 - 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7 || cord_y_int_02 == cord_y_int + 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 - 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 - 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 - 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 - 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 - 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02 - 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                            }
                            else if (cord_y_int_02 < cord_y_int && cord_x_int_02 != cord_x_int) { // move down
                                if (cord_x_int_02 > cord_x_int) { // down right
                                    if (cord_x_int_02 == cord_x_int + 1 || cord_y_int_02 == cord_y_int - 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 2 || cord_y_int_02 == cord_y_int - 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 3 || cord_y_int_02 == cord_y_int - 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 4 || cord_y_int_02 == cord_y_int - 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 5 || cord_y_int_02 == cord_y_int - 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 6 || cord_y_int_02 == cord_y_int - 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 + 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int + 7 || cord_y_int_02 == cord_y_int - 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 - 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 5][cord_y_int_02 + 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 - 6][cord_y_int_02 + 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                                else if (cord_x_int_02 < cord_x_int) { // down left
                                    if (cord_x_int_02 == cord_x_int - 1 || cord_y_int_02 == cord_y_int - 1) {
                                        move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                        selectCordValid_02 = 1;
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 2 || cord_y_int_02 == cord_y_int - 2) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 3 || cord_y_int_02 == cord_y_int - 3) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 4 || cord_y_int_02 == cord_y_int - 4) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 5 || cord_y_int_02 == cord_y_int - 5) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 6 || cord_y_int_02 == cord_y_int - 6) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 + 5][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                    else if (cord_x_int_02 == cord_x_int - 7 || cord_y_int_02 == cord_y_int - 7) {
                                        if (strcmp(symb_cord[cord_x_int_02 + 1][cord_y_int_02 + 1][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 2][cord_y_int_02 + 2][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 3][cord_y_int_02 + 3][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 4][cord_y_int_02 + 4][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 5][cord_y_int_02 + 5][0], "   ") == 0 &&
                                            strcmp(symb_cord[cord_x_int_02 + 6][cord_y_int_02 + 6][0], "   ") == 0) {
                                            move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                            selectCordValid_02 = 1;
                                        }
                                    }
                                }
                            }

                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);

                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], " K ") == 0) {
                    print("This is a Black King\n");
                    selectCordValid_02 = 0;
                    do {
                        print("\nSelect where to move the piece by writing the cord (ex. b2) and x0 to change piece: ");
                        scanf(" %c", &cord_x_char_02);
                        scanf(" %i", &cord_y_int_02);

                        if (cord_x_char_02 == 'x' && cord_y_int_02 == 0) {
                            //print("exit\n");
                            break;
                        }

                        if (cord_x_char == 'a' || cord_x_char == 'b' || cord_x_char == 'c' || cord_x_char == 'd' || cord_x_char == 'e' || cord_x_char == 'f' || cord_x_char == 'g' || cord_x_char == 'h') {
                            //print("\nYou Selected %c%i \n", cord_x_char, cord_y_int);
                            if (cord_x_char >= 'a' && cord_x_char <= 'h') {
                                cord_x_int = cord_x_char - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8
                            }
                            else {
                                print("Something went wrong.\n");
                                exit(1);
                            }
                        }
                        else {
                            print("Something went wrong.\n");
                            exit(1);
                        }

                        cord_x_int_02 = cord_x_char_02 - 'a' + 1; // 'a' → 1, 'b' → 2, ... 'h' → 8

                        strcpy_s(pieceID_02, sizeof(pieceID_02), symb_cord[cord_x_int_02][cord_y_int_02][1]);
                        strcpy_s(piece_Symbol_02, sizeof(piece_Symbol_02), symb_cord[cord_x_int_02][cord_y_int_02][0]);

                        if (strcmp(piece_Symbol_02, piece_Pawn_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Rook_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Bishop_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Knight_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_Queen_Black) == 0 ||
                            strcmp(piece_Symbol_02, piece_King_Black) == 0) {

                            print("you can not move over your own piece!!");

                        }
                        else {
                            if (cord_x_int_02 == cord_x_int && cord_y_int_02 == cord_y_int + 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int + 1 && cord_y_int_02 == cord_y_int + 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int + 1 && cord_y_int_02 == cord_y_int) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int + 1 && cord_y_int_02 == cord_y_int - 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int && cord_y_int_02 == cord_y_int - 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int - 1 && cord_y_int_02 == cord_y_int - 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int - 1 && cord_y_int_02 == cord_y_int) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else if (cord_x_int_02 == cord_x_int - 1 && cord_y_int_02 == cord_y_int + 1) {
                                move_piece(cord_x_int, cord_y_int, cord_x_int_02, cord_y_int_02, piece_Symbol, pieceID);
                                selectCordValid_02 = 1;
                            }
                            else {
                                print("You need to select a valid scuare on the board!!\n");
                                selectCordValid_02 = 0;
                            }
                        }
                    } while (selectCordValid_02 == 0);

                }

                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[P]") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[R]") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[N]") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[B]") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[Q]") == 0) {
                    print("Select your own piece\n");
                }
                else if (strcmp(symb_cord[cord_x_int][cord_y_int][0], "[K]") == 0) {
                    print("Select your own piece\n");
                }
                else {
                    print("Empty square or invalid piece\n");
                }
            }
        }
        else if (strcmp(symb_cord[cord_x_int][cord_y_int][1], EMPTY_ID) == 0) {
            selectCordValid = 0;
            print("\nYou need to select a square where there is a piece!\n");
        }
        else {
            print("Something whent caboom!!!");
        }
    } while (selectCordValid == 0);
}


void move_piece(int int_cord_x_01, int int_cord_y_01, int int_cord_x_02, int int_cord_y_02, char piece_Symbol[4], char piece_ID[5]) {

    strcpy_s(symb_cord[int_cord_x_01][int_cord_y_01][0], sizeof(symb_cord[0][0][0]), piece_Empty);
    strcpy_s(symb_cord[int_cord_x_01][int_cord_y_01][1], sizeof(symb_cord[0][0][0]), EMPTY_ID);

    strcpy_s(symb_cord[int_cord_x_02][int_cord_y_02][0], sizeof(symb_cord[0][0][0]), piece_Symbol);
    strcpy_s(symb_cord[int_cord_x_02][int_cord_y_02][1], sizeof(symb_cord[0][0][0]), piece_ID);
}

/* void check_if_piece_x8(int cord_x, int cord_y, int true_false_int) {
    true_false_int = 0;
    if (strcmp(symb_cord[cord_x][cord_y][1], EMPTY_ID) != 0) { // square not empty
        true_false_int = 1;
    }
    else {
        true_false_int = 0;
    }
}
*/

void white_pawn_select_piece(int cord_x, int cord_y) {
    int select;

    int valid = 0;
    do {
        print("\nSelect the piece you whant to make the pawn\n");
        print("Rook: 1      Bishop: 2\n");
        print("Knight: 3    Queen: 4\n");
        scanf(" %i", &select);

        if (select == 1) { // Rook
            strcpy_s(symb_cord[cord_x][cord_y][0], sizeof(symb_cord[0][0][0]), piece_Rook_White);
            strcpy_s(symb_cord[cord_x][cord_y][1], sizeof(symb_cord[0][0][0]), "WR00");
            valid = 1;
        }
        else if (select == 2) { // Bishop
            strcpy_s(symb_cord[cord_x][cord_y][0], sizeof(symb_cord[0][0][0]), piece_Bishop_White);
            strcpy_s(symb_cord[cord_x][cord_y][1], sizeof(symb_cord[0][0][0]), "WB00");
            valid = 1;
        }
        else if (select == 3) { // Knight
            strcpy_s(symb_cord[cord_x][cord_y][0], sizeof(symb_cord[0][0][0]), piece_Knight_White);
            strcpy_s(symb_cord[cord_x][cord_y][1], sizeof(symb_cord[0][0][0]), "WN00");
            valid = 1;
        }
        else if (select == 4) { // Queen
            strcpy_s(symb_cord[cord_x][cord_y][0], sizeof(symb_cord[0][0][0]), piece_Queen_White);
            strcpy_s(symb_cord[cord_x][cord_y][1], sizeof(symb_cord[0][0][0]), "WQ00");
            valid = 1;
        }
        else {
            print("\nYou need to select one of the alterantives!!");
        }

    } while (valid == 0);
    
}

void black_pawn_select_piece(int cord_x, int cord_y) {
    int select;

    int valid = 0;
    do {
        print("\nSelect the piece you whant to make the pawn\n");
        print("Rook: 1      Bishop: 2\n");
        print("Knight: 3    Queen: 4\n");
        scanf(" %i", &select);

        if (select == 1) { // Rook
            strcpy_s(symb_cord[cord_x][cord_y][0], sizeof(symb_cord[0][0][0]), piece_Rook_Black);
            strcpy_s(symb_cord[cord_x][cord_y][1], sizeof(symb_cord[0][0][0]), "BR00");
            valid = 1;
        }
        else if (select == 2) { // Bishop
            strcpy_s(symb_cord[cord_x][cord_y][0], sizeof(symb_cord[0][0][0]), piece_Bishop_Black);
            strcpy_s(symb_cord[cord_x][cord_y][1], sizeof(symb_cord[0][0][0]), "BB00");
            valid = 1;
        }
        else if (select == 3) { // Knight
            strcpy_s(symb_cord[cord_x][cord_y][0], sizeof(symb_cord[0][0][0]), piece_Knight_Black);
            strcpy_s(symb_cord[cord_x][cord_y][1], sizeof(symb_cord[0][0][0]), "BN00");
            valid = 1;
        }
        else if (select == 4) { // Queen
            strcpy_s(symb_cord[cord_x][cord_y][0], sizeof(symb_cord[0][0][0]), piece_Queen_Black);
            strcpy_s(symb_cord[cord_x][cord_y][1], sizeof(symb_cord[0][0][0]), "BQ00");
            valid = 1;
        }
        else {
            print("\nYou need to select one of the alterantives!!");
        }

    } while (valid == 0);

}

void check_king_status() {

    if (
        strcmp(symb_cord[1][1][0], "[K]") != 0 && strcmp(symb_cord[2][1][0], "[K]") != 0 && strcmp(symb_cord[3][1][0], "[K]") != 0 && strcmp(symb_cord[4][1][0], "[K]") != 0 && strcmp(symb_cord[5][1][0], "[K]") != 0 && strcmp(symb_cord[6][1][0], "[K]") != 0 && strcmp(symb_cord[7][1][0], "[K]") != 0 && strcmp(symb_cord[8][1][0], "[K]") != 0 &&
        strcmp(symb_cord[1][2][0], "[K]") != 0 && strcmp(symb_cord[2][2][0], "[K]") != 0 && strcmp(symb_cord[3][2][0], "[K]") != 0 && strcmp(symb_cord[4][2][0], "[K]") != 0 && strcmp(symb_cord[5][2][0], "[K]") != 0 && strcmp(symb_cord[6][2][0], "[K]") != 0 && strcmp(symb_cord[7][2][0], "[K]") != 0 && strcmp(symb_cord[8][2][0], "[K]") != 0 &&
        strcmp(symb_cord[1][3][0], "[K]") != 0 && strcmp(symb_cord[2][3][0], "[K]") != 0 && strcmp(symb_cord[3][3][0], "[K]") != 0 && strcmp(symb_cord[4][3][0], "[K]") != 0 && strcmp(symb_cord[5][3][0], "[K]") != 0 && strcmp(symb_cord[6][3][0], "[K]") != 0 && strcmp(symb_cord[7][3][0], "[K]") != 0 && strcmp(symb_cord[8][3][0], "[K]") != 0 &&
        strcmp(symb_cord[1][4][0], "[K]") != 0 && strcmp(symb_cord[2][4][0], "[K]") != 0 && strcmp(symb_cord[3][4][0], "[K]") != 0 && strcmp(symb_cord[4][4][0], "[K]") != 0 && strcmp(symb_cord[5][4][0], "[K]") != 0 && strcmp(symb_cord[6][4][0], "[K]") != 0 && strcmp(symb_cord[7][4][0], "[K]") != 0 && strcmp(symb_cord[8][4][0], "[K]") != 0 &&
        strcmp(symb_cord[1][5][0], "[K]") != 0 && strcmp(symb_cord[2][5][0], "[K]") != 0 && strcmp(symb_cord[3][5][0], "[K]") != 0 && strcmp(symb_cord[4][5][0], "[K]") != 0 && strcmp(symb_cord[5][5][0], "[K]") != 0 && strcmp(symb_cord[6][5][0], "[K]") != 0 && strcmp(symb_cord[7][5][0], "[K]") != 0 && strcmp(symb_cord[8][5][0], "[K]") != 0 &&
        strcmp(symb_cord[1][5][0], "[K]") != 0 && strcmp(symb_cord[2][6][0], "[K]") != 0 && strcmp(symb_cord[3][6][0], "[K]") != 0 && strcmp(symb_cord[4][6][0], "[K]") != 0 && strcmp(symb_cord[6][6][0], "[K]") != 0 && strcmp(symb_cord[6][6][0], "[K]") != 0 && strcmp(symb_cord[7][6][0], "[K]") != 0 && strcmp(symb_cord[8][6][0], "[K]") != 0 &&
        strcmp(symb_cord[1][7][0], "[K]") != 0 && strcmp(symb_cord[2][7][0], "[K]") != 0 && strcmp(symb_cord[3][7][0], "[K]") != 0 && strcmp(symb_cord[4][7][0], "[K]") != 0 && strcmp(symb_cord[5][7][0], "[K]") != 0 && strcmp(symb_cord[6][7][0], "[K]") != 0 && strcmp(symb_cord[7][7][0], "[K]") != 0 && strcmp(symb_cord[8][7][0], "[K]") != 0 &&
        strcmp(symb_cord[1][8][0], "[K]") != 0 && strcmp(symb_cord[2][8][0], "[K]") != 0 && strcmp(symb_cord[3][8][0], "[K]") != 0 && strcmp(symb_cord[4][8][0], "[K]") != 0 && strcmp(symb_cord[5][8][0], "[K]") != 0 && strcmp(symb_cord[6][8][0], "[K]") != 0 && strcmp(symb_cord[7][8][0], "[K]") != 0 && strcmp(symb_cord[8][8][0], "[K]") != 0
        ) {
        king_true_int = 1;
    }
    else if (
        strcmp(symb_cord[1][1][0], " K ") != 0 && strcmp(symb_cord[2][1][0], " K ") != 0 && strcmp(symb_cord[3][1][0], " K ") != 0 && strcmp(symb_cord[4][1][0], " K ") != 0 && strcmp(symb_cord[5][1][0], " K ") != 0 && strcmp(symb_cord[6][1][0], " K ") != 0 && strcmp(symb_cord[7][1][0], " K ") != 0 && strcmp(symb_cord[8][1][0], " K ") != 0 &&
        strcmp(symb_cord[1][2][0], " K ") != 0 && strcmp(symb_cord[2][2][0], " K ") != 0 && strcmp(symb_cord[3][2][0], " K ") != 0 && strcmp(symb_cord[4][2][0], " K ") != 0 && strcmp(symb_cord[5][2][0], " K ") != 0 && strcmp(symb_cord[6][2][0], " K ") != 0 && strcmp(symb_cord[7][2][0], " K ") != 0 && strcmp(symb_cord[8][2][0], " K ") != 0 &&
        strcmp(symb_cord[1][3][0], " K ") != 0 && strcmp(symb_cord[2][3][0], " K ") != 0 && strcmp(symb_cord[3][3][0], " K ") != 0 && strcmp(symb_cord[4][3][0], " K ") != 0 && strcmp(symb_cord[5][3][0], " K ") != 0 && strcmp(symb_cord[6][3][0], " K ") != 0 && strcmp(symb_cord[7][3][0], " K ") != 0 && strcmp(symb_cord[8][3][0], " K ") != 0 &&
        strcmp(symb_cord[1][4][0], " K ") != 0 && strcmp(symb_cord[2][4][0], " K ") != 0 && strcmp(symb_cord[3][4][0], " K ") != 0 && strcmp(symb_cord[4][4][0], " K ") != 0 && strcmp(symb_cord[5][4][0], " K ") != 0 && strcmp(symb_cord[6][4][0], " K ") != 0 && strcmp(symb_cord[7][4][0], " K ") != 0 && strcmp(symb_cord[8][4][0], " K ") != 0 &&
        strcmp(symb_cord[1][5][0], " K ") != 0 && strcmp(symb_cord[2][5][0], " K ") != 0 && strcmp(symb_cord[3][5][0], " K ") != 0 && strcmp(symb_cord[4][5][0], " K ") != 0 && strcmp(symb_cord[5][5][0], " K ") != 0 && strcmp(symb_cord[6][5][0], " K ") != 0 && strcmp(symb_cord[7][5][0], " K ") != 0 && strcmp(symb_cord[8][5][0], " K ") != 0 &&
        strcmp(symb_cord[1][5][0], " K ") != 0 && strcmp(symb_cord[2][6][0], " K ") != 0 && strcmp(symb_cord[3][6][0], " K ") != 0 && strcmp(symb_cord[4][6][0], " K ") != 0 && strcmp(symb_cord[6][6][0], " K ") != 0 && strcmp(symb_cord[6][6][0], " K ") != 0 && strcmp(symb_cord[7][6][0], " K ") != 0 && strcmp(symb_cord[8][6][0], " K ") != 0 &&
        strcmp(symb_cord[1][7][0], " K ") != 0 && strcmp(symb_cord[2][7][0], " K ") != 0 && strcmp(symb_cord[3][7][0], " K ") != 0 && strcmp(symb_cord[4][7][0], " K ") != 0 && strcmp(symb_cord[5][7][0], " K ") != 0 && strcmp(symb_cord[6][7][0], " K ") != 0 && strcmp(symb_cord[7][7][0], " K ") != 0 && strcmp(symb_cord[8][7][0], " K ") != 0 &&
        strcmp(symb_cord[1][8][0], " K ") != 0 && strcmp(symb_cord[2][8][0], " K ") != 0 && strcmp(symb_cord[3][8][0], " K ") != 0 && strcmp(symb_cord[4][8][0], " K ") != 0 && strcmp(symb_cord[5][8][0], " K ") != 0 && strcmp(symb_cord[6][8][0], " K ") != 0 && strcmp(symb_cord[7][8][0], " K ") != 0 && strcmp(symb_cord[8][8][0], " K ") != 0
        ) {
        king_true_int = 2;
    }



    }

