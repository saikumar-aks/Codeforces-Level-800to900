#include <bits/stdc++.h>
#define Log(Op) std::cout<<Op<<std::endl
int main()
{
    int count(0), val;
    std::vector<int> v;
    v.reserve(4);
    for(int i=0;i<4;++i)
    {
        scanf("%d", &val);
        v.push_back(val);
    }
    std::sort(v.begin(), v.end());
    for(int i=0;i<4;i++)
    {
        if(v[i]==v[i+1])
        {
            count++;
        }
    }
    Log(count);

}
