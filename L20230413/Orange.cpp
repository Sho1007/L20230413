#include "Orange.h"
#include <iostream>

FOrange::FOrange()
	: FFruit("Orange")
{
	std::cout << "�������� �����Ǿ����ϴ�.\n";
}

FOrange::~FOrange()
{
	std::cout << "�������� �Ҹ�Ǿ����ϴ�.\n";
}