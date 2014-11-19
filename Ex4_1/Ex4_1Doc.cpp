// Ex4_1Doc.cpp : implementation of the CEx4_1Doc class
//

#include "stdafx.h"
#include "Ex4_1.h"

#include "Ex4_1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx4_1Doc

IMPLEMENT_DYNCREATE(CEx4_1Doc, CDocument)

BEGIN_MESSAGE_MAP(CEx4_1Doc, CDocument)
	//{{AFX_MSG_MAP(CEx4_1Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx4_1Doc construction/destruction

CEx4_1Doc::CEx4_1Doc()
{
	// TODO: add one-time construction code here

}

CEx4_1Doc::~CEx4_1Doc()
{
}

BOOL CEx4_1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx4_1Doc serialization

void CEx4_1Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CEx4_1Doc diagnostics

#ifdef _DEBUG
void CEx4_1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx4_1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx4_1Doc commands
