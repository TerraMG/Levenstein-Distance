#pragma once
#include <string>

using namespace std;

class Result
{
	Position prev;
	string operation;

public:
	Result();
	Result(Position, string);
	~Result();

	Position Prev();
	string Operation();
};

