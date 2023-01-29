#include "head.h"
void showError() {
	std::string errstr = "\n未检测到原神运行....\n\n请开启原神后再使用此工具......\n\n...此程序将在三秒后自动关闭.....\n\n";
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