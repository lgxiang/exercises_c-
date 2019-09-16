// billiardsCrashing.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;
void function(double L, double W, double x, double y, double R, double a, double v, double s) {
	//分解台球运动，垂直于水平两个方向
	x = x + v * s * cos(a * M_PI/180.00);
	y = y + v * s * sin(a * M_PI/180.00);
	while (x > L - R || x < R) {
		if (x > L - R)
			x = 2 * (L - R) - x;
		if (x < R)
			x = 2 * R - x;
	}
	while (y > W - R || y < R) {
		if (y > W - R)
			y = 2 * (W - R) - y;
		if (y < R)
			y = 2 * R - y;
	}
	//cout << x << " " << y << endl;
	cout << setiosflags(ios::fixed) << setprecision(2) << x << " " << y << endl;
}

int main()
{
	double L, W, x, y, R, a, v, s;
	cin >> L >> W >> x >> y >> R >> a >> v >> s;
	while (!(L == 0 && W == 0 && x == 0 && y == 0 && R == 0 && a == 0 && v == 0 && s == 0)) {
		function(L, W, x, y, R, a, v, s);
		cin >> L >> W >> x >> y >> R >> a >> v >> s;
	}
	
	
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
