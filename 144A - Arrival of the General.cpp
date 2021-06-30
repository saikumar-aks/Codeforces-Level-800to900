#include <bits/stdc++.h>
#define Log(Op) std::cout<<Op<<std::endl
int main()
{
    int n , max=0, min=101, max_index, min_index, val;
    scanf("%d", &n);
    std::vector<int> v;
    v.reserve(n);
    for(int i=0;i<n;++i)
    {
        std::cin>>val;
        v.push_back(val);
    }
    for(int i =0;i<n;i++)
    {
        if(v[i]>max)
        {
            max=v[i];
            max_index=i;
        }
        if(v[i]<=min)
        {
            min=v[i];
            min_index=i;
        }
    }
    n=n-1;
    if(max_index>min_index)
    {
        min_index=min_index+1;
    }
    Log(max_index+n-min_index);

}
