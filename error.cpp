#include "head.h"
void showError() {
	std::string errstr = "\nδ��⵽ԭ������....\n\n�뿪��ԭ�����ʹ�ô˹���......\n\n...�˳�����������Զ��ر�.....\n\n";
	for (int i = 0; i < errstr.size(); i++) {
		Sleep(50);
		std::cout << errstr[i];
	}
	for (int i = 3; i >= 0; i--) {
		Sleep(1000);
		std::cout << i << std::endl;
	}
	exit(0);
}