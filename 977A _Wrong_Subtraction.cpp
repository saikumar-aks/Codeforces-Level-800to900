#include<iostream>
#define Log(Msg) std::cout<<Msg<<std::endl;
int main()
{
    int a , b;
    std::cin>>a>>b;
    for(int i=0;i<b;++i)
    {
        if(a%10 != 0)
        {
            a-=1;
        }
        else
        {
            a/=10;
        }
    }
    Log(a);
}
