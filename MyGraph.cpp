// MyGraph.cpp: файл реализации
//

#include "stdafx.h"
#include "Kurs1.h"
#include "MyGraph.h"


// CMyGraph

IMPLEMENT_DYNAMIC(CMyGraph, CStatic)

CMyGraph::CMyGraph()
{

}

CMyGraph::~CMyGraph()
{
}


BEGIN_MESSAGE_MAP(CMyGraph, CStatic)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// обработчики сообщений CMyGraph




void CMyGraph::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: Add your message handler code here
					   // Do not call CStatic::OnPaint() for painting messages
	CRect rc;
	GetClientRect(&rc);

	dc.FillSolidRect(&rc, RGB(0, 128, 128));

}
