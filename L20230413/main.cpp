#include <iostream>
#include "Blender.h"
#include "Apple.h"
#include "Orange.h"
#include "Pineapple.h"
using namespace std;

int main()
{
	FBlender* Blender = new FBlender();

	FFruit** Fruit = new FFruit * [3];
	Fruit[0] = new FApple();
	Fruit[1] = new FOrange();
	Fruit[2] = new FPineapple();

	int FruitNum;

	while (true)
	{
		cout << "과일을 선택하세요.\n";
		cout << "1. 사과, 2. 오렌지, 3. 파인애플\n";

		cin >> FruitNum;

		if (FruitNum <= 0 || FruitNum >= 4)
		{
			cout << "잘못된 숫자입니다.\n";
		}
		else
		{
			break;
		}
	}

	Blender->Blend(Fruit[FruitNum - 1]);

	for (int i = 0; i < 3; ++i)
	{
		delete Fruit[i];
	}
	return 0;
}