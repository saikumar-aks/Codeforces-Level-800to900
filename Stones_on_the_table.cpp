#include<bits/stdc++.h>
int count =0;
int main()
{
    int t;
    std::cin>>t;
    std::string s;
    std::cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
     std::cout<<count;
}
