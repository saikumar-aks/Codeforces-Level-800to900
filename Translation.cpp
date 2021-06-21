#include<bits/stdc++.h>
#define Log(M) std::cout<<M<<std::endl;
int main()
{
    std::string s , t;
    std::cin>>s>>t;
    std::reverse(s.begin(),s.end());
    if(t==s)
    {
        Log("YES");
    }
    else{
        Log("NO");
    }
}
