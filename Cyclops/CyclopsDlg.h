
// CyclopsDlg.h : ͷ�ļ�
#include "CamDlg.h"
#define CAM_NUM 3
//

#pragma once


// CCyclopsDlg �Ի���
class CCyclopsDlg : public CDialogEx
{
// ����
public:
	CCyclopsDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CYCLOPS_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

	CCamDlg* m_pCamDlg[CAM_NUM];
	int Cyclops_MainInit();
};