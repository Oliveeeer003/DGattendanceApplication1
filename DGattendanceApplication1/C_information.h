#pragma once


// C_information 对话框

class C_information : public CDialogEx
{
	DECLARE_DYNAMIC(C_information)

public:
	C_information(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~C_information();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_Information };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CEdit CtrCareer;
	CEdit CtrName;
	CEdit CtrNum;
	CEdit CtrPass;
	virtual BOOL OnInitDialog();
};
