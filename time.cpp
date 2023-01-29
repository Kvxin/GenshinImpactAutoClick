#include "head.h"
/*
    使用strtok函数，来解析时间字符串，获取时分秒数据
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