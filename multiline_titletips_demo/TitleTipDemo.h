// TitleTipDemo.h : main header file for the TITLETIPDEMO application
//

#if !defined(AFX_TITLETIPDEMO_H__2B553FE6_C4A6_11D3_A432_9B3298EA27E6__INCLUDED_)
#define AFX_TITLETIPDEMO_H__2B553FE6_C4A6_11D3_A432_9B3298EA27E6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTitleTipDemoApp:
// See TitleTipDemo.cpp for the implementation of this class
//

class CTitleTipDemoApp : public CWinApp
{
public:
	CTitleTipDemoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTitleTipDemoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTitleTipDemoApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TITLETIPDEMO_H__2B553FE6_C4A6_11D3_A432_9B3298EA27E6__INCLUDED_)
