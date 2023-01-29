#include "head.h"
//设置输出的字体的颜色函数
void SetColorAndBackground(int ForgC, int BackC) {
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
//显示欢迎屏幕
void showMenu() {
	HWND hd = GetConsoleWindow();
	system("cls");
	SetWindowPos(hd, NULL, 0, 0, 400, 300, NULL);
	SetColorAndBackground(3, 0);
	std::cout << "\t  原 神 自 动 点 击 工 具" << std::endl;
	std::cout << "\t--------------------------" << std::endl;
	SetColorAndBackground(4, 0);
	std::cout << "\n\n\t   F10-----开启";
	SetColorAndBackground(8, 0);
	std::cout << "\n\n\t   F12-----关闭" << std::endl;
	SetColorAndBackground(15, 0);
	std::cout << "\n\n使用本工具请保持您的原神界面是";
	SetColorAndBackground(4, 0);
	std::cout << "1920x1080";
	SetColorAndBackground(15, 0);
	std::cout << "分辨率\n\n并且屏幕的缩放比例在100%的状态下，否则会发生什么，我也不知道，我也没试过\n\n" <<endl;

}