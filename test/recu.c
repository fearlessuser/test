#include "recu.h"
int quadraticRecur(int n) {
    if (n <= 0)
    return 0;
    int *nums = malloc(sizeof(int) * n);
    printf(" 递归 n = %d 中的 nums 长度 = %d\r\n", n, n);
    int res = quadraticRecur(n - 1);
    free(nums);
    return res;
}
int factor(int a)
{
    if (a== 1)
    {
         return 1;
    }
    return a*factor(a);
}