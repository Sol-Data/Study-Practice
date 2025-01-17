
// SEditGraphicView.cpp: CSEditGraphicView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "SEditGraphic.h"
#endif

#include "SEditGraphicDoc.h"
#include "SEditGraphicView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSEditGraphicView

IMPLEMENT_DYNCREATE(CSEditGraphicView, CView)

BEGIN_MESSAGE_MAP(CSEditGraphicView, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CSEditGraphicView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_FIG_CIR, &CSEditGraphicView::OnFigCir)
	ON_COMMAND(ID_FIG_RECT, &CSEditGraphicView::OnFigRect)
	ON_COMMAND(ID_FIG_LINE, &CSEditGraphicView::OnFigLine)
	ON_COMMAND(ID_FIG_CROSS, &CSEditGraphicView::OnFigCross)
	ON_COMMAND(ID_FIG_APPLE, &CSEditGraphicView::OnFigApple)
END_MESSAGE_MAP()

// CSEditGraphicView 생성/소멸

CSEditGraphicView::CSEditGraphicView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CSEditGraphicView::~CSEditGraphicView()
{
}

BOOL CSEditGraphicView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// CSEditGraphicView 그리기

void CSEditGraphicView::OnDraw(CDC* pDC)
{
	CSEditGraphicDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
	CFont font, *pOldFont;
	font.CreatePointFont(300, _T("Broadway"));
	//글자크기와 폰트 설정
	// 30point font size (300/10=30) 
	pOldFont = (CFont*)pDC->SelectObject(&font);
	CString strInput1 = _T(" << Input Data >>");
	CString strInput2 = pDoc->GetText();
	pDC->SetTextColor(RGB(0, 0, 0));
	pDC->TextOut(0, 20, strInput1);

	pDC->SetBkColor(RGB(255, 255, 255));
	pDC->SetTextColor(pDoc->ColorGet());

	pDC->TextOut(50, 100, strInput2);

	// 이후에 새로운 코드 추가^^ @ OnDraw() 함수
	switch (m_nOption)
	{

	case 1:
	{
		CBrush brush(RGB(0, 255, 0));
		//Brush Object 선택
		CBrush *pOldBrush = pDC->SelectObject(&brush); //Brush Object 선택
		pDC->Ellipse(200, 200, 400, 400);
		brush.DeleteObject();  //Brush Object제거
		break;
	}
	case 2:
	{

		CBrush brush(RGB(150, 0, 150));
		//Brush Object 생성
		CBrush *pOldBrush = pDC->SelectObject(&brush);
		//Brush Object 선택
		pDC->Rectangle(200, 200, 400, 400);
		brush.DeleteObject();		//Brush Object제거
		break;

	}

	case 3:
	{
		CDC* pDC = GetDC();
		int nPenType[] = { PS_SOLID,  PS_DOT, PS_DASHDOT, PS_DASH, PS_DASHDOTDOT };

		for (int i = 0; i<sizeof(nPenType) / sizeof(nPenType[0]); i++)
		{
			CPen pen(nPenType[i], 1, RGB(0, 0, 255));
			pDC->SelectObject(&pen);
			/*-------- 직선 --------------*/

			pDC->MoveTo(100, 200 + i * 50);
			pDC->LineTo(500, 200 + i * 50);

			/* ------- 사선 --------------*/
			/*
			pDC->MoveTo(100, 200 + i * 50);
			pDC->LineTo(500, 300 + i * 50);
			*/
		}
		break;
	}



	case 4:
	{
		CBrush brush(HS_DIAGCROSS, RGB(255, 90, 0));  //Orange Color
													  //Brush Object 선택
		CBrush *pOldBrush = pDC->SelectObject(&brush); //Brush Object 선택
		pDC->RoundRect(200, 200, 400, 400, 50, 50);
		pDC->SelectObject(pOldBrush);
		brush.DeleteObject();  //Brush Object제거
		break;
	}
	case 5:
	{
		CBitmap bitmap;
		bitmap.LoadBitmap(IDB_BITMAP1);
		CBrush brush(&bitmap);

		//Brush Object 선택
		CBrush *pOldBrush = pDC->SelectObject(&brush); //Brush Object 선택

		pDC->SetBkColor(TRANSPARENT);

		pDC->RoundRect(200, 200, 400, 400, 50, 50);
		pDC->SelectObject(&brush);
		brush.DeleteObject();  //Brush Object제거

		break;
	}

	}



}


// CSEditGraphicView 인쇄


void CSEditGraphicView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CSEditGraphicView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CSEditGraphicView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CSEditGraphicView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void CSEditGraphicView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CSEditGraphicView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CSEditGraphicView 진단

#ifdef _DEBUG
void CSEditGraphicView::AssertValid() const
{
	CView::AssertValid();
}

void CSEditGraphicView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSEditGraphicDoc* CSEditGraphicView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSEditGraphicDoc)));
	return (CSEditGraphicDoc*)m_pDocument;
}
#endif //_DEBUG


// CSEditGraphicView 메시지 처리기


void CSEditGraphicView::OnFigCir()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nOption = 1;
	Invalidate();
}

void CSEditGraphicView::OnFigRect()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nOption = 2;
	Invalidate();
}

void CSEditGraphicView::OnFigLine()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nOption = 3;
	Invalidate();
}

void CSEditGraphicView::OnFigCross()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nOption = 4;
	Invalidate();
}

void CSEditGraphicView::OnFigApple()
{
	// TODO: 여기에 명령 처리기 코드를 추가합니다.
	m_nOption = 5;
	Invalidate();
}


