#include "Board.h"


Board::Board():
	mBoardWidth(9)
	,mBoardHeight(9)
{
	//tempのメモリを明示的に解放するには？良い書き方はあるか？
	//やりたいことはbの初期化
	vector<vector<string>> temp(mBoardWidth, vector<string>(mBoardHeight, "□"));
	b = temp;
}

void Board::Show()
{
	for (const auto& cellw : b)
	{
		for(const auto& cell : cellw)
			{
			cout << cell + ",";
			}
		cout << endl;
	}
	cout << endl;
}

bool Board::SetPiece(string piece, int row, int column)
{
	if (row < 0 || mBoardWidth < row)
	{
		cout << "Error:Assigned Piece is out of board range. " <<endl;
		return false;
	}

	if (column < 0 || mBoardHeight < column)
	{
		cout << "Error:Assigned Piece is out of board range." << endl;
		return false;
	}

	b[column][row] = piece;

	return true;
}