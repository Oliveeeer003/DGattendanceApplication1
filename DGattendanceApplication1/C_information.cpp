// C_information.cpp: 实现文件
//

#include "pch.h"
#include "DGattendanceApplication1.h"
#include "C_information.h"
#include "afxdialogex.h"


// C_information 对话框

IMPLEMENT_DYNAMIC(C_information, CDialogEx)

C_information::C_information(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_Information, pParent)
{

}

C_information::~C_information()
{
}

void C_information::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(C_information, CDialogEx)
END_MESSAGE_MAP()


// C_information 消息处理程序
