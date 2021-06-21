#include<iostream>
#include<string>
#define Log(M) std::cout<<M<<std::endl;
int main()
{
    int n ,t;
    std::cin>>n>>t;
    std::string s;
    std::cin>>s;
    while(t--)
    {
        for(int i=0;i<n-1;++i)
        {
            if(s[i]=='B' && s[i+1] == 'G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
    }
    Log(s);
}
