#include "head.h"
int checkIsRun() {
	HWND hd = FindWindow(L"UnityWndClass", L"ԭ��");
	return hd ? 1 : 0;
}
int main() {
	cout << "���ڼ���Ƿ�����ԭ��" << endl;
	if (checkIsRun()) {
		showMenu();
		while (1) {
			
			if (GetAsyncKeyState(VK_F10) & 0x8000)
			{
				Times();
				cout << "    ������F10����ʼ���" << endl;
				//ִ��Awex����
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



