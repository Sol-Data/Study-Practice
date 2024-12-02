// Mouse Moving Program 

//*******(1)���ȭ��

#include <Windows.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

//***(2)�����Լ�

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASS WndClass; 	//������ Ŭ���� ����ü	
	HWND hwnd; 		//������ �ڵ�
	MSG msg;			//�޽�������ü


						//***(3)������ Ŭ���� �ʱ�ȭ�� ���

	WndClass.style = CS_HREDRAW | CS_VREDRAW;   //Ŭ���� ��Ÿ��
	WndClass.lpfnWndProc = WndProc;	//���������ν���
	WndClass.cbClsExtra = 0;		//������Ŭ���� �����Ϳ���
	WndClass.cbWndExtra = 0;		//�������� ������ ����
	WndClass.hInstance = hInstance;		//�ν��Ͻ� �ڵ�
	WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	//������ �ڵ�
	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	//Ŀ���ڵ�
	WndClass.hbrBackground = (HBRUSH)GetStockObject(LTGRAY_BRUSH);
	//��� �귯���ڵ�(������)
	WndClass.lpszMenuName = NULL;
	// �޴��̸�
	WndClass.lpszClassName = TEXT("MClass");
	//������ Ŭ���� �̸�
	if (!RegisterClass(&WndClass)) 	//������Ŭ���� register
		return 1;

	//***(4)������ ����

	hwnd = CreateWindow(			//��������� API�Լ�
		TEXT("MClass"), 		//��ϵ� ������ Ŭ���� �̸�		
		TEXT("���콺�� �׸��׸���"),		// Ÿ��Ʋ�ٿ� ��µ� ����
		WS_OVERLAPPEDWINDOW,	//������ ��Ÿ��
		CW_USEDEFAULT, 		//��������������� x��ǥ
		CW_USEDEFAULT,		//��������������� y��ǥ
		CW_USEDEFAULT,		//�������� �ʺ�
		CW_USEDEFAULT,		//�������� ����
		NULL, 			//�θ��������� �ڵ�
		NULL,			//�޴� �Ǵ� �ڽ� �������� �ڵ�
		hInstance,			//���ø����̼� �ν��Ͻ� �ڵ�
		NULL			//������ ���� �������� �ּ�
	);
	ShowWindow(hwnd, nCmdShow); 	//������ �����츦 ȭ�鿡 ǥ��

									//***(5)�޽��� ����

	while (GetMessage(&msg, NULL, 0, 0)>0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return msg.wParam;
}

//***(6)������ ���ν���

LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	HDC hdc;
	PAINTSTRUCT ps;

	static POINT MousePos; //���콺 x,y ��ǥ�� ������ ����


	static BOOL bDrawing = FALSE;

	switch (iMessage) {
	case WM_LBUTTONDOWN:
		MousePos.x = LOWORD(lParam);
		MousePos.y = HIWORD(lParam);
		bDrawing = TRUE;
		SetCapture(hWnd);
		return 0;
	case WM_MOUSEMOVE:
		if (bDrawing == TRUE) {
			hdc = GetDC(hWnd);
			MoveToEx(hdc, MousePos.x, MousePos.y, NULL);
			MousePos.x = LOWORD(lParam);
			MousePos.y = HIWORD(lParam);
			LineTo(hdc, MousePos.x, MousePos.y);
			ReleaseDC(hWnd, hdc);
		}
		return 0;
	case WM_LBUTTONUP:
		bDrawing = FALSE;
		ReleaseCapture();
		return 0;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		EndPaint(hWnd, &ps);
		return 0;
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	}
	return(DefWindowProc(hWnd, iMessage, wParam, lParam));
}



