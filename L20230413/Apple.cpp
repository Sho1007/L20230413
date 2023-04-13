#include "Apple.h"
#include <iostream>

FApple::FApple()
	: FFruit("Apple")
{
	std::cout << "사과가 생성되었습니다.\n";
}

FApple::~FApple()
{
	std::cout << "사과가 소멸되었습니다.\n";
}
