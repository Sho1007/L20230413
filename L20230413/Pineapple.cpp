#include "Pineapple.h"
#include <iostream>

FPineapple::FPineapple()
	: FFruit("Pineapple")
{
	std::cout << "���ξ����� �����Ǿ����ϴ�.\n";
}

FPineapple::~FPineapple()
{
	std::cout << "���ξ����� �Ҹ�Ǿ����ϴ�.\n";
}