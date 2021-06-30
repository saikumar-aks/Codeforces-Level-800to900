#include <bits/stdc++.h>
#define Log(Op) std::cout<<Op<<std::endl
int main()
{
    int n, p, q, c(0), val;
    std::vector<int> v;
    std::cin>>n>>p;
    while(p--)
    {
        std::cin>>val;
        v.push_back(val);
    }
    std::cin>>q;
    while(q--)
    {
        std::cin>>val;
        v.push_back(val);
    }
    std::sort(v.begin(), v.end());
    for(int i =0;i<v.size();++i)
    {
        if(v[i]!=v[i+1])
        {
            c++;
        }
    }
    if(n==c)
    {
        Log("I become the guy.");
    }
    else
    {
        Log("Oh, my keyboard!");
    }

}
