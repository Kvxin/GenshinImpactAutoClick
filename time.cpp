#include "head.h"
/*
    ʹ��strtok������������ʱ���ַ�������ȡʱ��������
    Use the strtok function to parse the time string and get the hour, minute, and second data.
*/
void Times() {
    time_t rawtime;
    struct tm* timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    char buffer[80];
    strftime(buffer, 80, "%H:%M:%S", timeinfo);
    std::cout << buffer;
}