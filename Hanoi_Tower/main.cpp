#include <iostream>
#include <vector>
using namespace std;

void hanoi(int deskCount, const char* base, const char* target, const char* move)
{
	if (deskCount <= 0)
	{
		return;
	}

	//ベースの一番大きい円盤を動かすために、
	//上に積まれている、円盤を動かす。
	hanoi(deskCount - 1, base, move, target);

	//ログを出す。
	printf("DeskNo.%d Moved.... %s -> %s\n", deskCount, base, target);

	hanoi(deskCount - 1, move, target, base);
}

int main()
{
	//円盤の数。
	int count = 3;

	hanoi(count, "Left", "Center", "Right");

	return 0;
}

