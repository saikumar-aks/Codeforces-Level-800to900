#include<bits/stdc++.h>
int main()
{
    int n , val;
    scanf("%d", &n);
    std::vector<int> s;
    s.reserve(n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d", &val);
        s[val]=i;
    }
    for(auto it=s.begin()+1;it != s.end();++it)
    {
        std::cout<<*it<<" ";
    }
}
