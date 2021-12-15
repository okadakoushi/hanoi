#include <iostream>
#include <vector>
using namespace std;

void hanoi(int deskCount, const char* base, const char* target, const char* move)
{
	if (deskCount <= 0)
	{
		return;
	}

	//�x�[�X�̈�ԑ傫���~�Ղ𓮂������߂ɁA
	//��ɐς܂�Ă���A�~�Ղ𓮂����B
	hanoi(deskCount - 1, base, move, target);

	//���O���o���B
	printf("DeskNo.%d Moved.... %s -> %s\n", deskCount, base, target);

	hanoi(deskCount - 1, move, target, base);
}

int main()
{
	//�~�Ղ̐��B
	int count = 3;

	hanoi(count, "Left", "Center", "Right");

	return 0;
}

