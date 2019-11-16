#pragma once
#include <iostream>
#include <vector>
using namespace std;

class Board
{
public:
	Board();
	void Show();
	bool SetPiece(string piece, int row, int column);
private:
	int mBoardWidth;
	int mBoardHeight;
	vector<vector<class Cell*>> mBoard;
};

