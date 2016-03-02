#pragma once


// CCamDlg 对话框

class CCamDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCamDlg)

public:
	CCamDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCamDlg();

// 对话框数据
	enum { IDD = IDD_CYCLOPS_CAM1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
