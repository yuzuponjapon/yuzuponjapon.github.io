#include "DxLib.h"
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	const int WIDTH = 960, HEIGHT = 640;
	SetWindowText("テニスゲーム");
	SetGraphMode(WIDTH, HEIGHT, 32);
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == - 1) return -1;
	SetBackgroundColor(0, 0, 0);
	SetDrawScreen(DX_SCREEN_BACK);

	int ballx = 40;
	int bally = 80;
	int ballVx = 5;
	int ballVy = 5;
	int ballR = 10;

	while (1)
	{
		ClearDrawScreen();
		ballx = ballx + ballVx;

	}







	DxLib_End();
	return 0;
}