/*
	Bai 1 kiem tra Khoa C/C++
*/
#include <stdio.h>

void findLBAHB(unsigned short data) {
	unsigned char LB = data;
	unsigned char HB = data>>8;
	printf("%x %x \r\n", LB, HB);
}

void main()
{
	findLBAHB(1234);
}
