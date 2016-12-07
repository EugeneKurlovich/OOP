#include <afxwin.h>
#include <string>

int counter = 0;
int times = 0;
class CMyMainWnd : public CFrameWnd {

public:
	int x; int y; int flag;
	int x1, y1, x2, y2;
	CRect rect;
	CBrush *ppn = new CBrush;
	CMyMainWnd() {
		Create(NULL, L"Рисование окружности");
		SetTimer(0, 1000, NULL);
		x1 = 0, y1 = 0, x2 = 0, y2 = 0;
		ppn = new CBrush(RGB(255, 0, 0));

	}
	~CMyMainWnd()
	{
		KillTimer(1);
	}
	afx_msg void OnTimer(UINT);
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT, CPoint);
	afx_msg void OnRButtonDown(UINT, CPoint);
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
	{
		switch (nChar)
		{
		case 49:
		{
			x1 = 100;
			y1 = 100;
			x2 = 10;
			y2 = 10; 
			flag = 1;
			ppn = new CBrush(RGB(255, 0, 0));
			this->Invalidate();
		};
		break;
		case 50:
		{
			x1 = 150;
			y1 = 150;
			x2 = 20;
			y2 = 20;
			flag = 2;
			ppn = new CBrush(RGB(255, 255, 0));
			this->Invalidate();
		}
		break;
		case 51:
		{
			x1 = 100;
			y1 = 100;
			x2 = 400;
			y2 = 400;
			flag = 3;
			ppn = new CBrush(RGB(0, 0, 255));
		this->Invalidate();
		}
		break;
		case 52:
		{
			x1 = 250;
			y1 = 250;
			x2 = 60;
			y2 = 60; 
			flag = 4;
			ppn = new CBrush(RGB(0, 0, 0));
			this->Invalidate();
		}
		break;
		case 53:
		{
			x1 = 250;
			y1 = 250;
			x2 = 60;
			y2 = 60; 
			flag = 5;
			ppn = new CBrush(RGB(128, 0, 0));
			this->Invalidate();
		}
		break;
		}
	}
	DECLARE_MESSAGE_MAP()
};
	BEGIN_MESSAGE_MAP(CMyMainWnd, CFrameWnd)
		ON_WM_LBUTTONDOWN()
		ON_WM_RBUTTONDOWN()
		ON_WM_TIMER()
		ON_WM_PAINT()
		ON_WM_KEYDOWN()
	END_MESSAGE_MAP()


	class CMyApp : public CWinApp {
	public:
		CMyApp() {};
		virtual BOOL InitInstance() {
			m_pMainWnd = new CMyMainWnd();
			m_pMainWnd->ShowWindow(SW_SHOW);
			return TRUE;
		}
	};

	CMyApp theFIRSTapp;


	void CMyMainWnd::OnLButtonDown(UINT, CPoint)
	{

		flag = 6;
		ppn = new CBrush(RGB(0, 0, 0));
		this->Invalidate();
	};

	void CMyMainWnd::OnRButtonDown(UINT, CPoint)
	{


	}


	void CMyMainWnd::OnTimer(UINT)
	{
		times++;
		if (flag == 6)
		{
			if (times % 2 == 0)
			{
				CClientDC dc(this);

				dc.TextOutW(x, y, L"");
				x = x + 20;
				y = y + 20;
				dc.TextOutW(x, y, L"TEXT");
				counter++;
				if (counter == 10)
				{
					KillTimer(0);
					counter = 0;
			
				}
			}
		}
	}

	void CMyMainWnd::OnPaint()
	{
		CPaintDC* pDC = new CPaintDC(this);
		pDC->SelectObject(ppn);
		switch (flag) {
		case 1: {pDC->Ellipse(x1, y1, x2, y2); }break;
		case 2: {pDC->Ellipse(x1, y1, x2, y2); }break;
		case 3: {pDC->Ellipse(x1, y1, x2, y2); }break;
		case 4: {pDC->Ellipse(x1, y1, x2, y2); }break;
		case 5: {pDC->Ellipse(x1, y1, x2, y2); }break;
		} 
	}
