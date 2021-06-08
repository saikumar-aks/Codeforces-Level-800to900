#include<bits/stdc++.h>
#define Log(Msg) std::cout<<Msg<<std::endl;
int count = 0;
int main()
{
    int n , k, val;
    std::cin>>n>>k;
    std::vector<int> arr;
    for(int i=0;i<n;i++)
    {
        std::cin>>val;
        arr.push_back(val);
    }
    for(auto &x : arr)
    {
        if(x >= arr[k-1] && x>0)
            count++;
    }
    Log(count);
    
}  
