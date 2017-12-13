#pragma once
class Position
{
	int i, j;
public:
	Position();
	Position(int, int);
	~Position();

	int I();
	int J();

	friend bool operator < (Position p1, Position p2);
};

