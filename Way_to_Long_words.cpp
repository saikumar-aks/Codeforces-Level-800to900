#include<bits/stdc++.h>
#define Log(Msg) std::cout<<Msg<<std::endl;
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string str;
        std::cin>>str;
        if(str.length() > 10)
            std::cout<<str[0]<<(str.length() - 2)<<str[str.length()-1]<<std::endl;
        else
          Log(str);
    }
}
