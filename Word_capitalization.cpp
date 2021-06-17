#include<bits/stdc++.h>
int main()
{
    std::string s;
    std::cin>>s;
    char a = toupper(s[0]);
    std::cout<<a;
    for(int i=1;i<s.size();i++)
    {
        std::cout<<s[i];
    }
}
