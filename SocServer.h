#pragma once

#include "SocCom.h"
#include <list>
#define UM_ACCEPT WM_USER+1
// CSocServer 명령 대상

class CSocServer : public CSocket
{
public:
	CSocServer();
	virtual ~CSocServer();

	CSocCom m_socCom[MAX_CLIENT_COUNT];
	CSocCom* GetAcceptSocCom();

	std::list<int>m_index;

	HWND m_hWnd;
	void CSocServer::Init(HWND hWnd);
	virtual void OnAccept(int nErrorCode);
};


