#include "Board.h"
#include "Cell.h"


Board::Board():
	mBoardWidth(9)
	,mBoardHeight(9)
{
	for (int i = 0; i < mBoardHeight; i++) {
		vector<Cell*> temp2;
		for (int j = 0; j < mBoardWidth; j++) {
			Cell* temp = new Cell();
			temp2.emplace_back(temp);
		}
		mBoard.emplace_back(temp2);
	}
}

void Board::Show()
{
	for (const auto& cellrow : mBoard)
	{
		for (const auto& cell : cellrow)
		{
			if (cell->GetExist())
			{
				cout << cell->GetName();
			}
			else
			{
				cout << " ";
			}
			cout << ",";
		}
		cout << endl;
	}
	cout << endl;
}

bool Board::SetPiece(string piece, int row, int column)
{
	if (row < 0 || mBoardWidth < row)
	{
		cout << "Error:Assigned piece is out of board range. " << endl;
		return false;
	}

	if (column < 0 || mBoardHeight < column)
	{
		cout << "Error:Assigned piece is out of board range." << endl;
		return false;
	}

	mBoard[column][row]->Set(piece);

	return true;
}