#include<bits/stdc++.h>
#define Log(Msg) std::cout<<Msg<<std::endl;
int main()
{
    std::string s;
    int a(0), b(0);
    std::cin>>s;
    for(int i=0; i<s.size();i++)
    {
        if(isupper(s[i]))
        {
            a++;
        }
        else{
            b++;
        }
    } 
    if(a>b)
    {
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
       std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    Log(s);
}
