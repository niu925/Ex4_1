// Ex4_1.h : main header file for the EX4_1 application
//

#if !defined(AFX_EX4_1_H__F31A8F40_7E8F_41D4_A30D_4D4B6B65EB8C__INCLUDED_)
#define AFX_EX4_1_H__F31A8F40_7E8F_41D4_A30D_4D4B6B65EB8C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CEx4_1App:
// See Ex4_1.cpp for the implementation of this class
//

class CEx4_1App : public CWinApp
{
public:
	CEx4_1App();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx4_1App)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CEx4_1App)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX4_1_H__F31A8F40_7E8F_41D4_A30D_4D4B6B65EB8C__INCLUDED_)
