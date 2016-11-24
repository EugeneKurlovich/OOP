#include <Windows.h>

HINSTANCE HINST;
HWND CreateChildWindow();
int COL_WINDOW = 0;

LRESULT CALLBACK WndProcChild(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT PS;
	switch (message)
	{
	case WM_CREATE:
		break;
	case WM_DESTROY:
		COL_WINDOW--;
		break;
	case WM_CHAR:
		DestroyWindow(hWnd); break;//
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}
HWND CreateChildWindow()
{
	if (COL_WINDOW == 5) return NULL;
	WNDCLASS WindowClass;

	WindowClass.style = CS_DBLCLKS;
	WindowClass.lpfnWndProc = (WNDPROC)WndProcChild;
	WindowClass.cbClsExtra = 0;
	WindowClass.cbWndExtra = 0;
	WindowClass.hInstance = HINST;
	WindowClass.hIcon = LoadIcon(HINST, (LPCTSTR)IDI_APPLICATION);
	WindowClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	WindowClass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	WindowClass.lpszMenuName = 0;
	WindowClass.lpszClassName = TEXT("ChildWClass");

	//Зарегистируем класс окна
	RegisterClass(&WindowClass);

	//Создаем переменную, в которой поместим идентификатор окна
	HWND hWndC;

	WCHAR* title = new WCHAR[7];
	char *buf = new char[2];
	int i = 0;
	_itoa_s(COL_WINDOW + 1, buf, 2, 10);
	title[0] = 'W';
	title[1] = 'i';
	title[2] = 'n';
	title[3] = 'd';
	title[4] = ' ';
	title[5] = buf[0];
	title[6] = '\0';


	hWndC = CreateWindow(TEXT("ChildWClass"), title,
		WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 300, 300, NULL, NULL, HINST, NULL);
	ShowWindow(hWndC, SW_NORMAL);
	UpdateWindow(hWndC);
	COL_WINDOW++;
	return hWndC;
}

LONG WINAPI WndProc(HWND hwnd, UINT Message, WPARAM wparam, LPARAM lparam)
{
	switch (Message) {
	case WM_KEYDOWN:
	{
		switch (wparam)
		{
		case VK_F1:
		{
			int new_x = 10;
			int new_y = 10;
			int Width = 700;
			int Height = 500;
			MoveWindow(hwnd, new_x, new_y, Width, Height, TRUE);
		}
		break;
		case VK_F2:
		{
			int new_x = 100;
			int new_y = 100;
			int Width = 700;
			int Height = 500;
			MoveWindow(hwnd, new_x, new_y, Width, Height, TRUE);
		}
		break;
		case VK_F3:
		{
			int new_x = 50;
			int new_y = 50;
			int Width = 700;
			int Height = 500;
			MoveWindow(hwnd, new_x, new_y, Width, Height, TRUE);
		}
		break;
		case VK_F4:
		{
			int new_x = 150;
			int new_y = 150;
			int Width = 700;
			int Height = 500;
			MoveWindow(hwnd, new_x, new_y, Width, Height, TRUE);
		}
		break;
		case VK_F5:
		{
			int new_x = 700;
			int new_y = 200;
			int Width = 700;
			int Height = 500;
			MoveWindow(hwnd, new_x, new_y, Width, Height, TRUE);
		}
		break;
		break;
		}
	}
	break;

	case WM_CLOSE:
	{
		if (IDOK == MessageBox(hwnd, L"Выйти из Программы?", L"Выход", MB_OKCANCEL | MB_ICONQUESTION | MB_DEFBUTTON2))

			SendMessage(hwnd, WM_DESTROY, NULL, NULL);
		break;	}

	case WM_LBUTTONUP:
	{
		CreateChildWindow();
		break;
	}

	case WM_CREATE:
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	default:
		return DefWindowProc(hwnd, Message, wparam, lparam);
	}
	return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	HWND hwnd;
	MSG msg;
	WNDCLASS w;

	memset(&w, 0, sizeof(WNDCLASS));
	w.style = CS_HREDRAW | CS_VREDRAW;
	w.lpfnWndProc = WndProc;
	w.hInstance = hInstance;
	w.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
	w.lpszClassName = L"My Class";
	hInstance = hInstance;

	RegisterClass(&w);
	hwnd = CreateWindow(L"My Class", L"Первое окнонное приложение", WS_TILEDWINDOW,
		700, 200, 700, 500, NULL, NULL, hInstance, NULL);
	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd);
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;

}



