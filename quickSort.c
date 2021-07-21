#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
void main()
{
	int i= 0,len;
	int a[] = {1,3,3,3,3,8,4,6,9,5,2};
	len = sizeof(a)/sizeof(a[0]);
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
	printf("\n");

	qsort(a,len, sizeof(int), compare);

	for(i=0;i<len;i++)
		printf("%d ",a[i]);
	printf("\n");
}
