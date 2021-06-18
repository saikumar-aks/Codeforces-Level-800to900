#include<bits/stdc++.h>
int main()
{
    std::string s;
    std::cin>>s;
    std::string a;
    for(int i=0;i<s.size();i+=2)
    {
        a.push_back(s[i]);
    }
    std::sort(a.begin(),a.end());
    std::cout<<a[0];
    for(auto it=a.begin()+1;it!=a.end();++it)
    {
        std::cout<<"+"<<*it;
    }
    
}
