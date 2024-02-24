// C_information.cpp: 实现文件
//

#include "pch.h"
#include "DGattendanceApplication1.h"
#include "C_information.h"
#include "afxdialogex.h"
#include "sqlite/sqlite3.h"
#include <iostream>


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
	DDX_Control(pDX, IDC_EDIT_CAREER, CtrCareer);
	DDX_Control(pDX, IDC_EDIT_NAME, CtrName);
	DDX_Control(pDX, IDC_EDIT_NUM, CtrNum);
	DDX_Control(pDX, IDC_EDIT_PASSW, CtrPass);
}


BEGIN_MESSAGE_MAP(C_information, CDialogEx)
END_MESSAGE_MAP()


// C_information 消息处理程序


BOOL C_information::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
    CString strname;
    CString strnum;
    CString strcareer;
    CString strp;
    SetConsoleOutputCP(CP_UTF8);
    sqlite3* db;
    char* errMsg = nullptr;

    int rc = sqlite3_open("F:/sqlite/student.db", &db); // 打开或创建名为 database.db 的数据库
    if (rc != SQLITE_OK) {
        std::cerr << "无法打开/创建数据库: " << sqlite3_errmsg(db) << std::endl;
        return -1;
    }
    else {
        std::cout << "成功打开/创建数据库！" << std::endl;

        const char* sqlQuery = "SELECT * FROM studata"; // 要执行的SQL查询语句

        rc = sqlite3_exec(db, sqlQuery, [](void* data, int argc, char** argv, char** azColName) {
            for (int i = 0; i < argc; ++i) {
                printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
            }

            printf("\n");

            return 0;
            }, nullptr, &errMsg);

        if (rc != SQLITE_OK) {
            std::cerr << "SQL错误: " << errMsg << std::endl;
            sqlite3_free(errMsg);
        }

        sqlite3_close(db); // 关闭数据库连接
    }

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
