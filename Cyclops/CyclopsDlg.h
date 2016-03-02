
// CyclopsDlg.h : 头文件
#include "CamDlg.h"
#define CAM_NUM 3
//

#pragma once


// CCyclopsDlg 对话框
class CCyclopsDlg : public CDialogEx
{
// 构造
public:
	CCyclopsDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CYCLOPS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	CCamDlg* m_pCamDlg[CAM_NUM];
	int Cyclops_MainInit();
};
