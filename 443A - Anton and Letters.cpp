#include <bits/stdc++.h>
#define Log(Op) std::cout<<Op<<std::endl
int main()
{
    std::string s;
    std::set<char> a;
    int i=0;
    std::getline(std::cin, s);
    while(s[i])
    {
        if(isalpha(s[i]))
           a.insert(s[i]);
        i++;
    }
    Log(a.size());
}
