#pragma once


// CFullScreenDlg dialog

class CVdieoRenderWnd : public CDialogEx
{
	DECLARE_DYNAMIC(CVdieoRenderWnd)

public:
	CVdieoRenderWnd(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CVdieoRenderWnd();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_FULL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
