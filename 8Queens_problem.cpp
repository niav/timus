/*
 * The eight queens problem is the problem of placing eight queens
 * on an 8×8 chessboard such that none of them attack one another
 * (no two are in the same row, column, or diagonal).
 */

#include <iostream>

const size_t board_size{ 9 };

void board_filling(int (&chessboard)[board_size][board_size], int col, int row, bool &beat);

int main() {

	int col, row;
	int cnt{ 1 };
	int chessboard[board_size][board_size]{};
	bool beat{ false };
	
	std::cin >> col >> row;
	board_filling(chessboard, col, row, beat);

	while (cnt < 8) {
		std::cin >> col >> row;

		board_filling(chessboard, col, row, beat);
		++cnt;
	}

	beat? std::cout << "Incorrect Queens placing on chessboard."
		: std::cout << "Correct Queens placing on chessboard.";
	
	std::cout << std::endl;
	for (auto i = 1; i <= 8; ++i) {
		for (auto j = 1; j <= 8; ++j) {
			std::cout << chessboard[i][j] << " ";
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;


	return 0;
}

void board_filling(int (&chessboard)[board_size][board_size], int col, int row, bool &beat) {
	std::size_t i;
	int a1{ col }, b1{ row };

	if (chessboard[col][row] != 0) beat = true;

	//vertical&horizontal lines filling
	for (i = 1; i < board_size; ++i) {
		chessboard[i][row] = 1;
		chessboard[col][i] = 1;
	}

	chessboard[col][row] = 8;
	
	//filling 1st diagonal
	while (a1 > 1 && b1 > 1) {//left
		--a1;
		--b1;
		if (chessboard[a1][b1] == 8) beat = true;
		else chessboard[a1][b1] = 1;
	}
	
	a1 = col;
	b1 = row;
	while (a1 < 8 && b1 < 8) {//right
		++a1;
		++b1;
		if (chessboard[a1][b1] == 8) beat = true;
		else chessboard[a1][b1] = 1;
	}

	//filling 2nd diagonal
	a1 = col;
	b1 = row;
	while (a1 > 1 && b1 < 8) {
		--a1;
		++b1;
		if (chessboard[a1][b1] == 8) beat = true;
		else chessboard[a1][b1] = 1;
	}

	a1 = col;
	b1 = row;
	while (b1 > 1 && a1 < 8) {
		++a1;
		--b1;
		if (chessboard[a1][b1] == 8) beat = true;
		else chessboard[a1][b1] = 1;
	}
}
