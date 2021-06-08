#include<bits/stdc++.h>
#define Log(Msg) std::cout<<Msg<<std::endl;
int count = 0;
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int a , b , c;
        std::cin>>a>>b>>c;
        if((a+b+c)>=2)
        {
            count++;
        }
    }
    Log(count);
}
