#pragma once
#include "SysImpl.h"

#include <memory>
#include <iostream>
using namespace std;

class Media
{
public:
	Media(const shared_ptr<SysImpl>& impl) :m_impl(impl){}

	virtual void Play() = 0;

protected:
	shared_ptr<SysImpl> m_impl;
};

class MPEG : public Media
{
public:
	MPEG(const shared_ptr<SysImpl>& impl) :Media(impl) {}

	virtual void Play()
	{
		m_impl->PlayImpl("MPEG");
	}
};

class AVI : public Media
{
public:
	AVI(const shared_ptr<SysImpl>& impl) :Media(impl) {}

	virtual void Play()
	{
		m_impl->PlayImpl("AVI");
	}
};

class WMV : public Media
{
public:
	WMV(const shared_ptr<SysImpl>& impl) :Media(impl) {}

	virtual void Play()
	{
		m_impl->PlayImpl("WMV");
	}
};
