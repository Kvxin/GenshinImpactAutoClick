#include "head.h"
//����������������ɫ����
void SetColorAndBackground(int ForgC, int BackC) {
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
//��ʾ��ӭ��Ļ
void showMenu() {
	HWND hd = GetConsoleWindow();
	system("cls");
	SetWindowPos(hd, NULL, 0, 0, 400, 300, NULL);
	SetColorAndBackground(3, 0);
	std::cout << "\t  ԭ �� �� �� �� �� �� ��" << std::endl;
	std::cout << "\t--------------------------" << std::endl;
	SetColorAndBackground(4, 0);
	std::cout << "\n\n\t   F10-----����";
	SetColorAndBackground(8, 0);
	std::cout << "\n\n\t   F12-----�ر�" << std::endl;
	SetColorAndBackground(15, 0);
	std::cout << "\n\nʹ�ñ������뱣������ԭ�������";
	SetColorAndBackground(4, 0);
	std::cout << "1920x1080";
	SetColorAndBackground(15, 0);
	std::cout << "�ֱ���\n\n������Ļ�����ű�����100%��״̬�£�����ᷢ��ʲô����Ҳ��֪������Ҳû�Թ�\n\n" <<endl;

}