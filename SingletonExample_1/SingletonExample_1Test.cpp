#include "Window.h"

int main()
{
	auto mainWin = MainWindow::GetInstance();
	mainWin.ShowWindow();
	return 0;
}