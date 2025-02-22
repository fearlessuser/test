//测试专用文件
#include<stdio.h>
#include<string.h>
#include<time.h>
void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int recur(int n)
{
	if(n == 1)
		return 1;
	int res = recur(n-1);
	return res+n;
}
void graphtest(int** graph,int index,int n)
{
	for(int i = index;i<n-1;i++)
	{
		for(int j = 0;j<n;j++)
		{
			graph[j][i] = graph[j][i+1];
		}
	}
}
time_t time_cnt;
struct tm time_st;
int main()
{
	// char str[50] = {0};
	// snprintf(str,sizeof(str),"我爱你%d遍,宝贝",1000);
	// printf("%d\n",strlen(str));
	// printf(str);
	char*p = 'a';
	printf("%d\n",sizeof(p));
	printf("%d",recur(100));
	// quadraticRecur(10);
}

