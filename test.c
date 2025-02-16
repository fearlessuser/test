//测试专用文件
#include<stdio.h>
#include<time.h>
void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
time_t time_cnt;
struct tm time_st;
int main()
{
	int a = 10;
	int b = 20;
	time_cnt = time(NULL);
	time_st  = *localtime(&time_cnt);
	printf("%lld\n",time_cnt);
	printf("%d\n",time_st.tm_year+1900);
	printf("%d\n",time_st.tm_mon+1);
	printf("%d\n",time_st.tm_mday);
	printf("%d\n",time_st.tm_hour);
	printf("%d\n",time_st.tm_min);
	printf("%d\n",time_st.tm_sec);
	time_cnt = mktime(&time_st);
	printf("%lld\n",time_cnt);
	char *timedata = ctime(&time_cnt);
	printf("%s\n",timedata);
	char *timedata1 = asctime(&time_st);
	printf("%s\n",timedata1);
	printf("我又回来啦,VSCODE大人\n");
	printf("hehe");
}

