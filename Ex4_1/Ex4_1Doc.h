// Ex4_1Doc.h : interface of the CEx4_1Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX4_1DOC_H__E48502E6_F4FD_497D_B5B8_2C2C1ED37DBB__INCLUDED_)
#define AFX_EX4_1DOC_H__E48502E6_F4FD_497D_B5B8_2C2C1ED37DBB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx4_1Doc : public CDocument
{
protected: // create from serialization only
	CEx4_1Doc();
	DECLARE_DYNCREATE(CEx4_1Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx4_1Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEx4_1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEx4_1Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX4_1DOC_H__E48502E6_F4FD_497D_B5B8_2C2C1ED37DBB__INCLUDED_)
