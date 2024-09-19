//测试专用文件
#include<stdio.h>
void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("%p\n", swap);
	((void (*)(int*, int*))0x0000000000401550)(&a,&b);
	printf("a = %d,b = %d", a, b);
}

