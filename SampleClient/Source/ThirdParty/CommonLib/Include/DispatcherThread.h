#pragma once

#include "Thread.h"

class DispatcherThread : public Thread
{
public:
	DispatcherThread();
	virtual ~DispatcherThread();

public:
	virtual bool work();
	virtual bool checkWaitExitCondition();	// 기본바로 wait을 탈출한다.
};
