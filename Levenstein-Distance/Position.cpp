#include "stdafx.h"
#include "Position.h"


Position::Position()
{
}

Position::Position(int _i, int _j)
{
	i = _i;
	j = _j;
}


Position::~Position()
{
}

int Position::I()
{
	return i;
}

int Position::J()
{
	return j;
}

bool operator<(Position p1, Position p2)
{
	if (p1.I() == p2.I())
		return (p1.J() < p2.J());
	else
		return (p1.I() < p2.I());
}
