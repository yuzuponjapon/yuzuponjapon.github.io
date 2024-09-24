#include "DxLib.h"
#include <stdio.h>
#include <math.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	SetWindowText("RGB�l�ɂ��F�w��");
	SetGraphMode(1040, 300, 32);
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1) return -1;
	SetBackgroundColor(128,128 ,128 );
	ClearDrawScreen();
	int y = 10;
	for (int i = 0; i <= 255; i++) {
		int x = 5 + i * 4;
		DrawBox(x, y, x + 4, y + 80, GetColor(i, 0, 0), TRUE);
		DrawBox(x, y+100, x + 4, y + 180, GetColor(0, i, 0), TRUE);
		DrawBox(x, y+200, x + 4, y + 280, GetColor(0, 0, i), TRUE);
	}
	WaitKey();
	DxLib_End();
	return 0;
}
