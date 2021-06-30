#include <bits/stdc++.h>
#define Log(Op) std::cout<<Op<<std::endl
int main()
{
    int k, l, m, n, d, c(0);
    std::cin>>k>>l>>m>>n>>d;
    c=d;
    if(k==1 || l==1 || m==1 || n==1)
    {
        Log(d);
    }
    else
    {
        for(int i=1;i<=d;++i)
        {
            if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
            {
                c--;
            }
        }
        Log(c);
    }
}
