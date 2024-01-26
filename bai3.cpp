/*
	Bai 3 kiem tra Khoa C/C++
*/

#include <stdio.h>
#include <Windows.h>

DWORD WINAPI functionInThread1(LPVOID lp)
{
	while (1) {
		printf("[Task 1] Say hello\r\n");
		Sleep(1000);
	}
}

DWORD WINAPI functionInThread2(LPVOID lp)
{
	while (1) {
		printf("[Task 2] Xin chao\r\n");
		Sleep(1500);
	}
}


void main() {
	DWORD thread_1_id = 1;
	DWORD thread_2_id = 2;
	HANDLE thread_1 = CreateThread(NULL,
		1024,
		functionInThread1,
		NULL,
		0,
		&thread_1_id);

	HANDLE thread_2 = CreateThread(NULL,
		1024,
		functionInThread2,
		NULL,
		0,
		&thread_2_id);

	while (1)
	{
		;
	}
}
