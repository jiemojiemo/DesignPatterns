#pragma once
#include <string>
#include <iostream>
using namespace std;

class Window
{
public:
	virtual void ShowWindow() = 0;
};
class Window_A : public Window
{
private:
	Window_A() = default;

public:
	static Window_A GetInstance()
	{
		static Window_A winA;
		return winA;
	}

	void ShowWindow()
	{
		cout << "Window A" << endl;
	}
};

class Window_B : public Window
{
private:
	Window_B() = default;

public:
	static Window_B GetInstance()
	{
		static Window_B winB;
		return winB;
	}

	void ShowWindow()
	{
		cout << "Window B" << endl;
	}
};

class MainWindow : public Window
{
public:
	static MainWindow GetInstance()
	{
		static MainWindow mainWin;
		return mainWin;
	}
	void ShowWinA()
	{
		auto winA = Window_A::GetInstance();
		winA.ShowWindow();
	}
	void ShowWinB()
	{
		auto winB = Window_B::GetInstance();
		winB.ShowWindow();
	}
	virtual void ShowWindow()
	{
		ShowWinA();
		ShowWinB();
	}
};



