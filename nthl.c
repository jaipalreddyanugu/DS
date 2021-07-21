#include<stdio.h>

void main()
{
	unsigned int a = 0x12345678;
	unsigned int b;

	b = (a&0xFF000000)>>24 | (a&0xFF0000)>>8 | (a&0xFF00)<<8 | (a&0xFF)<<24;

	printf("%d=0x%08X %d=0x%08X\n",a,a,b,b);

	int i= 0;
	for(i;i<sizeof(a);i++)
		printf("0x%02x ",((char*)&a)[i]);
	printf("\n");

	int x = 1;
	printf("%s\n",(*(char*)&x)&1 ?"little":"big");
}
