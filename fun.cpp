#include "head.h"

//���λ��1
void SetPoint1(int x, int y) {
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}
//���λ��2
void SetPoint2(int x, int y) {
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}
void Awex()
{ 
    //��������������
    
    PlaySound(MAKEINTRESOURCE(IDR_WAVE2), NULL, SND_RESOURCE | SND_ASYNC);
    //����Ҫ����ı���
    int x1 = 1308;
    int y1 = 734;
    int x2 = 1308;
    int y2 = 800;
    while (true)
    {
        //������F12��ʱ������ѭ��
        if (GetAsyncKeyState(VK_F12) & 0x8000)
        {
            Times();
            cout << "    ������F12��ֹͣ���" << endl;
            PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_ASYNC);
            break;
        }
        Sleep(100);
        SetPoint1(x1, y1);
        Sleep(100);
        SetPoint2(x2, y2);
    }
}
