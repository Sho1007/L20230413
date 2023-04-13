#include "Orange.h"
#include <iostream>

FOrange::FOrange()
	: FFruit("Orange")
{
	std::cout << "오렌지가 생성되었습니다.\n";
}

FOrange::~FOrange()
{
	std::cout << "오렌지가 소멸되었습니다.\n";
}
