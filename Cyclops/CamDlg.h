#pragma once


// CCamDlg �Ի���

class CCamDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCamDlg)

public:
	CCamDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCamDlg();

// �Ի�������
	enum { IDD = IDD_CYCLOPS_CAM1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};