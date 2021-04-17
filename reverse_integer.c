#include<stdio.h>
int main() {
	int a = 0x7FFFFFFF;
	int i = 0, rev = 0;

	int size = sizeof(a)*8;
	for (i=0;i<size;i++) {
		if (a & (1<<i)) {
			rev |= (1 << (size - 1 - i));
		}
	}
	printf("a %08X rev %08X",a,rev);

	return 0;
}

