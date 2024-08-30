#include<stdio.h>
#include<stdlib.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int dp[n+1];
//     memset(dp,0,sizeof(dp));
//     dp[0] = 1;
//     dp[1] = 1;
//     for(int i = 2;i<=n;i++)
//     {
//         int sum = 0;
//         for(int j = 0;j<i;j++)
//         {
//             sum += dp[j]*dp[i-j-1];
//         }
//         dp[i] = sum;
//     }
//     printf("%d",dp[n]);
//     return 0;
// }
int main()
{
    int i = 0;
    if(i == 0)
    {
        i = 1;
        printf("%d\n",0);
    }
    else
    {
        printf("%d\n",1);
    }
    return 0;
}