#include<bits/stdc++.h>
#define Log(M) std::cout<<M<<std::endl;
int main()
{
    int n, anton(0), danik(0);
    std::string s;
    std::cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            anton++;
        }
        else{
            danik++;
        }
    }
    if(anton>danik)
    {
        Log("Anton");
    }
    else if(anton==danik)
    {
        Log("Friendship");
    }
    else
    {
        Log("Danik");
    }
