#include "Board.h"


Board::Board():
	mBoardWidth(9)
	,mBoardHeight(9)
{
	//temp�̃������𖾎��I�ɉ������ɂ́H�ǂ��������͂��邩�H
	//��肽�����Ƃ�b�̏�����
	vector<vector<string>> temp(mBoardWidth, vector<string>(mBoardHeight, "��"));
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