#include "Blender.h"
#include <iostream>

FBlender::FBlender()
{
	std::cout << "�ͼ��Ⱑ �����Ǿ����ϴ�.\n";
}

FBlender::~FBlender()
{
	std::cout << "�ͼ��Ⱑ �Ҹ�Ǿ����ϴ�.\n";
}

void FBlender::Blend(FFruit* Fruit)
{
	std::cout << Fruit->GetName() << "�꽺�� ����� �����ϴ�.\n";
}