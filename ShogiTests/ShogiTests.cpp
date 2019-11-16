// ShogiTests.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include "Board.h"

int main()
{
	Board board;

	board.SetPiece("王",4,8);

	board.Show();
}