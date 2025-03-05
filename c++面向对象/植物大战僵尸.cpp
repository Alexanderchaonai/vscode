#include <iostream>//输入输出流，cin>>输入，cout<<输出
#include <vector>//动态数组容器，vector<数据类型>容器名
#include <Windows.h>//在Windows系统处理鼠标和键盘事件等

using namespace std;//导入std命名空间，
//在当前作用域使用std成员不必写std::前缀

//const修饰的变量为常量（即不可修改）
const short w = 102, h = 27;//活动范围
string xy[h];//活动范围内每一个坐标的内容

vector<short>zombie;//僵尸

//生成新的僵尸
void new_zombie()
{
	//随机生成僵尸的位置（行）
	short y = (rand() % 5 + 1) * 5 - 2;

	//遍历（当前行）{如果（当前行有僵尸）不生成，返回}
	for (short x = 0; x < xy[y].size(); x++)
	{
		if (xy[y][x] == '*')return;
	}
	
	//僵尸会出现在活动范围的最右侧
	xy[y][99] = '*';
	xy[y - 1][98] = '*';
	xy[y + 1][98] = '*';
	xy[y - 1][100] = '*';
	xy[y + 1][100] = '*';

	//储存当前僵尸的数据
	// （坐标+随机生命值）
	zombie.push_back
	(y * 1000 + 99 * 10 + rand() % 5 + 1);
}

//控制僵尸移动
void move_zombie()
{
	//遍历（僵尸）
	// {把当前僵尸所占的每一个坐标左移一个单位，修改当前僵尸x坐标}
	for (short y = 0; y < zombie.size(); y++)
	{
		xy[zombie[y] / 1000]
			[zombie[y] % 1000 / 10] = ' ';
		xy[zombie[y] / 1000]
			[zombie[y] % 1000 / 10 - 1] = '*';

		xy[zombie[y] / 1000 - 1]
			[zombie[y] % 1000 / 10 + 1] = ' ';
		xy[zombie[y] / 1000 - 1]
			[zombie[y] % 1000 / 10] = '*';

		xy[zombie[y] / 1000 - 1]
			[zombie[y] % 1000 / 10 - 1] = ' ';
		xy[zombie[y] / 1000 - 1]
			[zombie[y] % 1000 / 10 - 2] = '*';

		xy[zombie[y] / 1000 + 1]
			[zombie[y] % 1000 / 10 + 1] = ' ';
		xy[zombie[y] / 1000 + 1]
			[zombie[y] % 1000 / 10] = '*';

		xy[zombie[y] / 1000 + 1]
			[zombie[y] % 1000 / 10 - 1] = ' ';
		xy[zombie[y] / 1000 + 1]
			[zombie[y] % 1000 / 10 - 2] = '*';

		zombie[y] -= 10;
	}
}

vector<short>plant;//植物

//生成新的植物（在哪种植）
void new_plant(short x, short y)
{
	//因为一个植物占三个单位，
	// 如果（植物放在这会溢出）不种植，返回
	if (x < 2 || x > w - 6)return;

	//遍历（当前坐标左右个两个单位）
	for (short x1 = x - 2; x1 < x + 3; x1++)
	{
		//如果（当前位置有植物 或 当前位置有僵尸）不种植，返回
		if (xy[y][x1] == '+' || xy[y][x1] == '*')return;
	}

	//可以种植，修改当前坐标内容
	xy[y][x] = '+';
	xy[y][x - 1] = '+';
	xy[y][x + 1] = '+';
	xy[y - 1][x] = '+';
	xy[y + 1][x] = '+';

	//储存到植物容器用于将来修改（坐标+生命值）
	plant.push_back(x * 100 + y * 10 + 5);
}

//生成新的炮弹
void new_shell()
{
	//遍历（植物）
	for (short x = w - 2, y = 3; y < h; x--)
	{
		//如果（当前位置是植物 且 右侧一个单位不是炮弹）
		if (xy[y][x] == '+' && xy[y][x + 1] != '~')
		{

			xy[y][x] = '~';//当前位置修改为炮弹
			x -= 3;//一个植物占三个单位
		}

		//如果（已经检查到当前行最左侧）检查下一行
		if (x < 4)x = w - 1, y += 5;
	}
}

//控制炮弹移动
void move_shell()
{
	//遍历（僵尸）{如果僵尸受到攻击，血量减少}
	for (short y = 0; y < zombie.size(); y++)
	{
		//如果（僵尸左侧两个单位长度内出现炮弹）
		if (xy[zombie[y] / 1000]
			[zombie[y] % 1000 / 10] == '*'
			&& (xy[zombie[y] / 1000]
				[zombie[y] % 1000 / 10 - 1] == '~'
				|| xy[zombie[y] / 1000]
				[zombie[y] % 1000 / 10 - 2] == '~'))
		{
			zombie[y] -= 1;//僵尸血量减少

			//因为僵尸血量普遍是个位数，个位是0的数%10==0
			// 如果（僵尸死亡）
			// {当前僵尸从屏幕消失，僵尸容器移除当前僵尸}
			if (zombie[y] % 10 < 1)
			{
				xy[zombie[y] / 1000]
					[zombie[y] % 1000 / 10] = ' ';

				xy[zombie[y] / 1000 - 1]
					[zombie[y] % 1000 / 10 + 1] = ' ';

				xy[zombie[y] / 1000 - 1]
					[zombie[y] % 1000 / 10 - 1] = ' ';

				xy[zombie[y] / 1000 + 1]
					[zombie[y] % 1000 / 10 + 1] = ' ';

				xy[zombie[y] / 1000 + 1]
					[zombie[y] % 1000 / 10 - 1] = ' ';

				zombie.erase(zombie.begin() + y); y--;
			}
		}
	}

	//遍历（炮弹）
	for (short x = w - 2, y = 3; y < h; x--)
	{
		//如果（当前坐标是炮弹）
		if (xy[y][x] == '~')
		{
			xy[y][x] = ' ';//置空当前位置

			//如果（右侧两个单位没有僵尸）{右侧一个单位修改为炮弹}
			if (x < w - 2
				&& xy[y][x + 1] != '*'
				&& xy[y][x + 1] != '*')
			{
				xy[y][x + 1] = '~';
			}

			//如果（当前位置前后有植物）{当前位置修改为植物}
			if (xy[y - 1][x - 1] == '+'
				|| xy[y - 1][x] == '+'
				|| xy[y - 1][x + 1] == '+')
			{
				xy[y][x] = '+';
			}
		}

		//如果（已经检查到当前行最左侧）{检查下一行}
		if (x < 4)x = w - 1, y += 5;
	}
}

//当前游戏没有结束
bool no_close()
{
	//遍历（活动范围）
	for (short y = 1; y < 6; y++)
	{
		//如果（僵尸出现在屏幕最左侧）返回假（0表示假）
		if (xy[y * 5 - 2][2] == '*')return 0;
	}
	return 1;//返回真（非0的数字表示真）
}

//绘制屏幕
void draw()
{
	//遍历（活动范围）打印所有字符串
	for (short y = 0; y < h; y++)cout << xy[y] << endl;
}

int main()
{
	srand((unsigned)time(0));//初始化随机数种子

	//初始化屏幕（活动范围）{给活动范围内每一个坐标设置初始值}
	for (short y = 0; y < h; y++)
	{
		//如果一个字符串是多个相同的字符，
		// string（字符数，字符）可以快速赋值
		xy[y] = string(w, ' ');//屏幕每一行

		//第一行和最后一行全是'#'，
		// 中间的行第一个字符和最后一个字符是'#'
		if (y && y < h - 1)xy[y][0] = xy[y][w - 1] = '#';
		else xy[y] = string(w, '#');
	}

	short x = 2, y = 3;//控制在哪一行哪一列放植物

	//cout<<在屏幕打印，\n换行，endl刷新缓冲区
	cout << "按↑开始，按↓退出\n\n"
		<< "游戏开始后：\n"
		<< "按1~5控制在哪一行种植\n"
		<< "按↑种植，按↓退出，←和→控制在哪一列种植\n\n"
		<< "注意：僵尸会出现在最右侧，不可在最右侧种植" << endl;
	//while语法：while（进入循环的条件）{执行语句，break退出}
	while (true)
	{
		//GetAsyncKeyState（键值）用来判断当前按键有没有被按下
		if (GetAsyncKeyState(VK_UP))break;//退出当前循环
		if (GetAsyncKeyState(VK_DOWN))return 0;//退出程序
	}
	
	//主循环（游戏继续的条件（没有失败））
	while (no_close())
	{
		new_zombie();
		move_zombie();
		Sleep(2001);

		if (GetAsyncKeyState(VK_UP))new_plant(x, y);

		if (GetAsyncKeyState(VK_DOWN))break;

		if (GetAsyncKeyState(VK_LEFT) && x > 1)x--;

		if (GetAsyncKeyState(VK_RIGHT) && x < w - 7)x++;

		if (GetAsyncKeyState(49) && h > 6)y = 1 * 5 - 2;

		if (GetAsyncKeyState(50) && h > 11)y = 2 * 5 - 2;

		if (GetAsyncKeyState(51) && h > 16)y = 3 * 5 - 2;

		if (GetAsyncKeyState(52) && h > 21)y = 4 * 5 - 2;

		if (GetAsyncKeyState(53) && h > 26)y = 5 * 5 - 2;

		new_shell();//生成炮弹
		move_shell();//移动炮弹

		cout << "\x1B[2J\x1B[3J\x1B[H";//清屏

		draw();//绘制屏幕
	}

	return 0;
}