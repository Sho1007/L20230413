#include "Apple.h"
#include <iostream>

FApple::FApple()
	: FFruit("Apple")
{
	std::cout << "����� �����Ǿ����ϴ�.\n";
}

FApple::~FApple()
{
	std::cout << "����� �Ҹ�Ǿ����ϴ�.\n";
}