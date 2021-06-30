#include <bits/stdc++.h>
#define Log(Op) std::cout<<Op<<std::endl
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
       int a, b;
       scanf("%d%d", &a, &b);
       printf("%d\n", (a % b) ? b*(a/b+1) - a : 0);
    }
}
