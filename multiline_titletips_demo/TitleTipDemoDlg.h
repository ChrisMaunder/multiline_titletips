// TitleTipDemoDlg.h : header file
//

#if !defined(AFX_TITLETIPDEMODLG_H__2B553FE8_C4A6_11D3_A432_9B3298EA27E6__INCLUDED_)
#define AFX_TITLETIPDEMODLG_H__2B553FE8_C4A6_11D3_A432_9B3298EA27E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTitleTipDemoDlg dialog
#include "TitleTip.h"

class CTitleTipDemoDlg : public CDialog
{
// Construction
public:
	CTitleTipDemoDlg(CWnd* pParent = NULL);	// standard constructor

    CTitleTip m_TitleTip;

// Dialog Data
	//{{AFX_DATA(CTitleTipDemoDlg)
	enum { IDD = IDD_TITLETIPDEMO_DIALOG };
	CStatic	m_staticText;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTitleTipDemoDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTitleTipDemoDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TITLETIPDEMODLG_H__2B553FE8_C4A6_11D3_A432_9B3298EA27E6__INCLUDED_)
