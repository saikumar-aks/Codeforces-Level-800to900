#include<iostream>
#define Log(Msg) std::cout<<Msg<<std::endl;
int main()
{
    static int n , P_EXIT(0), P_ENTER(0) , c(0) , MAX_CAP(0);
    std::cin>>n;
    while(n--)
    {
        std::cin>>P_EXIT>>P_ENTER;
        c-=P_EXIT;
        c+=P_ENTER;
        if(c > MAX_CAP)
        {
            MAX_CAP=c;
        }
        
    }
    Log(MAX_CAP);  
}
