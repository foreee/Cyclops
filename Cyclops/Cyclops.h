
// Cyclops.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCyclopsApp: 
// �йش����ʵ�֣������ Cyclops.cpp
//

class CCyclopsApp : public CWinApp
{
public:
	CCyclopsApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCyclopsApp theApp;