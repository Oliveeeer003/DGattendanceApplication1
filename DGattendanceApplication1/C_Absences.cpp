// C_Absences.cpp: 实现文件
//

#include "pch.h"
#include "DGattendanceApplication1.h"
#include "C_Absences.h"
#include "afxdialogex.h"


// C_Absences 对话框

IMPLEMENT_DYNAMIC(C_Absences, CDialogEx)

C_Absences::C_Absences(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_ABSENCES, pParent)
{

}

C_Absences::~C_Absences()
{
}

void C_Absences::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(C_Absences, CDialogEx)
END_MESSAGE_MAP()


// C_Absences 消息处理程序
