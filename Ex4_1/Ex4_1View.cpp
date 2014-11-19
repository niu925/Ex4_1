// Ex4_1View.cpp : implementation of the CEx4_1View class
//

#include "stdafx.h"
#include "Ex4_1.h"

#include "Ex4_1Doc.h"
#include "Ex4_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx4_1View

IMPLEMENT_DYNCREATE(CEx4_1View, CView)

BEGIN_MESSAGE_MAP(CEx4_1View, CView)
	//{{AFX_MSG_MAP(CEx4_1View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx4_1View construction/destruction

CEx4_1View::CEx4_1View()
{
	// TODO: add construction code here

}

CEx4_1View::~CEx4_1View()
{
}

BOOL CEx4_1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx4_1View drawing

void CEx4_1View::OnDraw(CDC* pDC)
{
	CEx4_1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CEx4_1View printing

BOOL CEx4_1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CEx4_1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CEx4_1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CEx4_1View diagnostics

#ifdef _DEBUG
void CEx4_1View::AssertValid() const
{
	CView::AssertValid();
}

void CEx4_1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx4_1Doc* CEx4_1View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx4_1Doc)));
	return (CEx4_1Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx4_1View message handlers
