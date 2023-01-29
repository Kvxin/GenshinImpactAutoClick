#include "head.h"

//点击位置1
void SetPoint1(int x, int y) {
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}
//点击位置2
void SetPoint2(int x, int y) {
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}
void Awex()
{ 
    //播放声音并清屏
    
    PlaySound(MAKEINTRESOURCE(IDR_WAVE2), NULL, SND_RESOURCE | SND_ASYNC);
    //设置要点击的变量
    int x1 = 1308;
    int y1 = 734;
    int x2 = 1308;
    int y2 = 800;
    while (true)
    {
        //当按下F12的时候跳出循环
        if (GetAsyncKeyState(VK_F12) & 0x8000)
        {
            Times();
            cout << "    按下了F12，停止点击" << endl;
            PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_ASYNC);
            break;
        }
        Sleep(100);
        SetPoint1(x1, y1);
        Sleep(100);
        SetPoint2(x2, y2);
    }
}
