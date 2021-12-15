#include <iostream>
#include <vector>
using namespace std;


int main()
{
	//丸の数。
	int count = 3;

	vector<int> LeftTower, CenterTower, RightTower;

	for (int i = count; i > 0; i--)
	{
		//一番左のタワーに降順で積んでいく。
		LeftTower.push_back(i);
	}


	


	return 0;
}