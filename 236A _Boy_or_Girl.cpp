#include<bits/stdc++.h>
int count =0;
int main()
{
    std::string s;
    std::cin>>s;
    std::sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
    }
    if((s.size()-count)%2 == 0)
    {
        std::cout<<"CHAT WITH HER!";
    }
    else
    {
        std::cout<<"IGNORE HIM!";
    }

}
