//***(1)���ȭ��

#include <windows.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

//***(2)�����Լ�

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	WNDCLASS WndClass; 	//������ Ŭ���� ����ü	
	HWND hwnd; 		    //������ �ڵ�
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
	WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	//��� �귯���ڵ�(������)
	WndClass.lpszMenuName = NULL;
	// �޴��̸�
	WndClass.lpszClassName = TEXT("MouseClass");
	//������ Ŭ���� �̸�
	if (!RegisterClass(&WndClass)) 	//������Ŭ���� register
		return 1;

	//***(4)������ ����

	hwnd = CreateWindow(			//��������� API�Լ�
		TEXT("MouseClass"), 		//��ϵ� ������ Ŭ���� �̸�		
		TEXT("MouseSDK"),		// Ÿ��Ʋ�ٿ� ��µ� ����
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

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	HDC hdc;				//����̽� ���ؽ�Ʈ
	PAINTSTRUCT ps;			//����Ʈ ����ü


	switch (message)  	// Ŀ�ο��� ���� �޽����� switch������ ó��
	{
	case WM_CREATE:
		return 0;

	case WM_LBUTTONDOWN:
		MessageBox(hwnd, TEXT("���� ���콺�� Ŭ���ϼ̽��ϴ�."), TEXT("���� ���콺 Ŭ��!"), MB_OK);
		return 0;


	case WM_RBUTTONDOWN:
		MessageBox(hwnd, TEXT("������ ���콺�� Ŭ���ϼ̽��ϴ�."), TEXT("������ ���콺 Ŭ��!"), MB_OK);
		return 0;


    case WM_PAINT:
		hdc = BeginPaint(hwnd, &ps);
		TextOut(hdc, 100, 100, TEXT("���콺�� Ŭ���ϼ���"), strlen("���콺�� Ŭ���ϼ���"));
		TextOut(hdc, 100, 200, TEXT("������ ���콺 / ���� ���콺��  Ŭ���Ͻø� �޽��� ���ڰ� ��Ÿ���ϴ�."), strlen("������ ���콺 / ���� ���콺��  Ŭ���Ͻø� �޽��� ���ڰ� ��Ÿ���ϴ�."));
		EndPaint(hwnd, &ps);
		return 0;
		

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;

	}

	return DefWindowProc(hwnd, message, wParam, lParam);
}
