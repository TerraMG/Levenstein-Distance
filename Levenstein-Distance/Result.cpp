#include "stdafx.h"
#include "Result.h"


Result::Result()
{
}

Result::Result(Position poz, string op)
{
	prev = poz;
	operation = op;
}


Result::~Result()
{
}

Position Result::Prev()
{
	return prev;
}

string Result::Operation()
{
	return operation;
}
