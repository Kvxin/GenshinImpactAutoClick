#include "head.h"
int checkIsRun() {
	HWND hd = FindWindow(L"UnityWndClass", L"原神");
	return hd ? 1 : 0;
}
int main() {
	cout << "正在检查是否运行原神" << endl;
	if (checkIsRun()) {
		showMenu();
		while (1) {
			
			if (GetAsyncKeyState(VK_F10) & 0x8000)
			{
				Times();
				cout << "    按下了F10，开始点击" << endl;
				//执行Awex函数
				Awex();
			}
		}
	}
	else {
		showError();
	}
	system("pause");
	return 0;
}



