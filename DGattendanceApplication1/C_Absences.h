﻿#pragma once


// C_Absences 对话框

class C_Absences : public CDialogEx
{
	DECLARE_DYNAMIC(C_Absences)

public:
	C_Absences(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~C_Absences();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ABSENCES };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
