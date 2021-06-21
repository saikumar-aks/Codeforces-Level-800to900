#include<iostream>
#include<string>
#define Log(M) std::cout<<M<<std::endl;
static int c =0;
int main()
{
    long long int n;
    std::cin>>n;
    while(n!=0)
    {
        if(n%10==4 || n%10==7)
        {
            c+=1;
        }
        n/=10;
    }
    if(c ==4 || c ==7)
    {
        Log("YES");
    }
    else
    {
        Log("NO");
    }
    
}
