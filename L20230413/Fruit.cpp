#include "Fruit.h"
#include <iostream>

FFruit::FFruit()
{
	std::cout << "������ �����Ǿ����ϴ�.\n";
}
FFruit::FFruit(std::string NewName)
	: Name(NewName)
{
	std::cout << "������ �����Ǿ����ϴ�.\n";
}

FFruit::~FFruit()
{
	std::cout << "������ �Ҹ�Ǿ����ϴ�.\n";
}