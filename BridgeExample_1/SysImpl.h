#pragma once
#include <iostream>
#include <string>
using namespace std;
class SysImpl
{
public:
	virtual void PlayImpl(const string& media) = 0;
};

class WindowsImpl : public SysImpl
{
public:
	virtual void PlayImpl(const string& media)
	{
		cout << "Play " << media << " in Windows\n";
	}
};

class LinuxImpl : public SysImpl
{
public:
	virtual void PlayImpl(const string& media)
	{
		cout << "Play " << media << " in Linux\n";
	}
};

class UNIXImpl : public SysImpl
{
public:
	virtual void PlayImpl(const string& media)
	{
		cout << "Play " << media << " in UNIX\n";
	}
};