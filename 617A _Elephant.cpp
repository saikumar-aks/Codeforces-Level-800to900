#include<iostream>
#define Log(Msg) std::cout<<Msg<<std::endl;
int main()
{
    int a;
    std::cin>>a;

    if(a%5==0)
    {
        Log(a/5);
    }
    else
    {
        Log((a/5)+1);
    }
}
