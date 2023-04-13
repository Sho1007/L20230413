#include "Fruit.h"
#include <iostream>

FFruit::FFruit()
{
	std::cout << "과일이 생성되었습니다.\n";
}
FFruit::FFruit(std::string NewName)
	: Name(NewName)
{
	std::cout << "과일이 생성되었습니다.\n";
}

FFruit::~FFruit()
{
	std::cout << "과일이 소멸되었습니다.\n";
}