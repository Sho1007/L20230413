#include "Blender.h"
#include <iostream>

FBlender::FBlender()
{
	std::cout << "믹서기가 생성되었습니다.\n";
}

FBlender::~FBlender()
{
	std::cout << "믹서기가 소멸되었습니다.\n";
}

void FBlender::Blend(FFruit* Fruit)
{
	std::cout << Fruit->GetName() << "쥬스가 만들어 졌습니다.\n";
}
