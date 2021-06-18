#include<iostream>
int c=0;
#define Log(Msg) std::cout<<Msg<<std::endl;
int main()
{
    int a , b;
    std::cin>>a>>b;
    if(a>b)
    {
        c=0;
    }
    else
    {
    while(a <= b)
    {
        
        a*=3;
        b*=2;
        c++;
    }
    }
    Log(c);

}
