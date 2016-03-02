// CamDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "Cyclops.h"
#include "CamDlg.h"
#include "afxdialogex.h"


// CCamDlg 对话框

IMPLEMENT_DYNAMIC(CCamDlg, CDialogEx)

CCamDlg::CCamDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCamDlg::IDD, pParent)
{

}

CCamDlg::~CCamDlg()
{
}

void CCamDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCamDlg, CDialogEx)
END_MESSAGE_MAP()


// CCamDlg 消息处理程序
