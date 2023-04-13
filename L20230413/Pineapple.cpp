#include "Pineapple.h"
#include <iostream>

FPineapple::FPineapple()
	: FFruit("Pineapple")
{
	std::cout << "파인애플이 생성되었습니다.\n";
}

FPineapple::~FPineapple()
{
	std::cout << "파인애플이 소멸되었습니다.\n";
}
