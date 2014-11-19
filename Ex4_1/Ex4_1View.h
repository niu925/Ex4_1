// Ex4_1View.h : interface of the CEx4_1View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX4_1VIEW_H__BD2B153E_291A_4549_8089_2420D6A4F294__INCLUDED_)
#define AFX_EX4_1VIEW_H__BD2B153E_291A_4549_8089_2420D6A4F294__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx4_1View : public CView
{
protected: // create from serialization only
	CEx4_1View();
	DECLARE_DYNCREATE(CEx4_1View)

// Attributes
public:
	CEx4_1Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx4_1View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEx4_1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx4_1View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Ex4_1View.cpp
inline CEx4_1Doc* CEx4_1View::GetDocument()
   { return (CEx4_1Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX4_1VIEW_H__BD2B153E_291A_4549_8089_2420D6A4F294__INCLUDED_)
