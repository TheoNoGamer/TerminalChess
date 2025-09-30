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


int main(void) {
	while (1) {

		char user01_Name[20];
		char user02_Name[20];
		int user01_Color_int = 0;  
		int user02_Color_int = 0; 
		char user01_Color[30] = "undefined";
		char user02_Color[30] = "undefined";
		int user_turn_int = 0; // 0 = undefined; 1 = user01; 2 = user02
		int user_win_int = 0; // 0 = undefined; 1 = user01; 2 = user02

		int randNum;
		int userSetup = 0;
		do { // Setup Users
			userSetup = 0;

			user01_Color_int = 0;  // 0 = undefined // 1 = white // 2 = black
			user02_Color_int = 0;  // 0 = undefined // 1 = white // 2 = black
			user_turn_int = 0;

			srand(time(0));
			randNum = rand() % 40 + 1; /* define white/black */
			// print("---- Debug__Debug__ Random number: %i ---- \n", randNum); /* ---- DEBUG ---- */
			if (randNum <= 20) {
				strcpy(user01_Color, "white"); strcpy(user02_Color, "black");
				user01_Color_int = 1; user02_Color_int = 2;
				user_turn_int = 1;
			}
			else if (randNum > 20) {
				strcpy(user01_Color, "black"); strcpy(user02_Color, "white");
				user01_Color_int = 2; user02_Color_int = 1;
				user_turn_int = 2;
			}
			else {
				print("Error: \n something whent wrong \n pls try againg");
				exit(1);
			}
			int userNamesValid = 0;
			userNamesValid = 0;
			do {
				print("The firs user write your name: ");
				scanf(" %s", &user01_Name);
				print("Hi %s, now the second user pls write your name: ", user01_Name);
				scanf(" %s", &user02_Name);
				 
				if (strcmp(user01_Name, user02_Name) == 0) {
					print("\nYou can not have duplicate names! \n\n");
					userNamesValid = 0; // is not valid
				}
				else {
					userNamesValid = 1; // is valid
				}
			} while (userNamesValid == 0);

			print("Hello %s and %s. \n", user01_Name, user02_Name);
			print("%s, you will be playing as %s. \n", user01_Name, user01_Color);
			print("%s, you will be playing as %s. \n", user02_Name, user02_Color);
			print("--------------------------------------------------------\n");

			userSetup = 1;
		} while (userSetup == 0);

		init_blank_board_symbols();
		init_start_board_symbols(); 

		char piece_Pawn_Symb[2] = "P";
		char piece_Rook_Symb[2] = "R";
		char piece_Queen_Symb[2] = "Q";
		char piece_King_Symb[2] = "K";
		char piece_Knight_Symb[2] = "N";
		char piece_Bishop_Symb[2] = "B";

		int wiktory = 0;
		do {
			print("Pawn: %s		Rook: %s \n", piece_Pawn_Symb, piece_Rook_Symb);
			print("Knight: %s	Bishop: %s \n", piece_Knight_Symb, piece_Bishop_Symb);
			print("Queen: %s	King: %s \n", piece_Queen_Symb, piece_King_Symb);

			/* Display board */
			print("  ---------------------------------\n");
			print("8 |%s|%s|%s|%s|%s|%s|%s|%s|\n",
				symb_cord[1][8], symb_cord[2][8], symb_cord[3][8], symb_cord[4][8], symb_cord[5][8], symb_cord[6][8], symb_cord[7][8], symb_cord[8][8]);
			print("  ---------------------------------\n");
			print("7 |%s|%s|%s|%s|%s|%s|%s|%s|\n",
				symb_cord[1][7], symb_cord[2][7], symb_cord[3][7], symb_cord[4][7], symb_cord[5][7], symb_cord[6][7], symb_cord[7][7], symb_cord[8][7]);
			print("  ---------------------------------\n");
			print("6 |%s|%s|%s|%s|%s|%s|%s|%s|\n",
				symb_cord[1][6], symb_cord[2][6], symb_cord[3][6], symb_cord[4][6], symb_cord[5][6], symb_cord[6][6], symb_cord[7][6], symb_cord[8][6]);
			print("  ---------------------------------\n");
			print("5 |%s|%s|%s|%s|%s|%s|%s|%s|\n",
				symb_cord[1][5], symb_cord[2][5], symb_cord[3][5], symb_cord[4][5], symb_cord[5][5], symb_cord[6][5], symb_cord[7][5], symb_cord[8][5]);
			print("  ---------------------------------\n");
			print("4 |%s|%s|%s|%s|%s|%s|%s|%s|\n",
				symb_cord[1][4], symb_cord[2][4], symb_cord[3][4], symb_cord[4][4], symb_cord[5][4], symb_cord[6][4], symb_cord[7][4], symb_cord[8][4]);
			print("  ---------------------------------\n");
			print("3 |%s|%s|%s|%s|%s|%s|%s|%s|\n",
				symb_cord[1][3], symb_cord[2][3], symb_cord[3][3], symb_cord[4][3], symb_cord[5][3], symb_cord[6][3], symb_cord[7][3], symb_cord[8][3]);
			print("  ---------------------------------\n");
			print("2 |%s|%s|%s|%s|%s|%s|%s|%s|\n",
				symb_cord[1][2], symb_cord[2][2], symb_cord[3][2], symb_cord[4][2], symb_cord[5][2], symb_cord[6][2], symb_cord[7][2], symb_cord[8][2]);
			print("  ---------------------------------\n");
			print("1 |%s|%s|%s|%s|%s|%s|%s|%s|\n",
				symb_cord[1][1], symb_cord[2][1], symb_cord[3][1], symb_cord[4][1], symb_cord[5][1], symb_cord[6][1], symb_cord[7][1], symb_cord[8][1]);
			print("  ---------------------------------\n");
			print("    a   b   c   d   e   f   g   h  \n");
			print("\n"); 

			if (user_turn_int == 1) { // If user01 turn
				print("%s, it is your turn. ", user01_Name);
				print("You are %s. ", user01_Color);

				init_move_white();
				user_turn_int = 2;
				print("\n");
			}
			else if (user_turn_int == 2) { // If user02 turn
				print("%s, it is your turn. ", user02_Name);
				print("You are %s. ", user02_Color);

				init_move_white();
				user_turn_int = 1;
				print("\n");

			}
			else {
				print("\nSomething Whent Wrong! \n");
				exit(0);
			}

		} while (wiktory == 0);


		// Go Again?
		int isDone = 0;
		do {
			isDone = 0;
			char continueAns;
			print("\nDo you whant you go again?\n");
			print("Write y/n: ");
			scanf(" %c", &continueAns);
			if (continueAns == 'n') {
				print("Exit");
				exit(0);
			}
			else if (continueAns == 'y') {
				isDone = 1;
				print("\n\n");
			}
			else {
				print("\nPls answer! \n");
				print("\nPls answer! \n");
				print("\nPls answer! \n");
				print("\nPls answer! \n");
			}
			
		} while (isDone == 0);		
	}
}