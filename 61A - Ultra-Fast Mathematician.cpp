#include <iostream>
int main()
{
    std::string s1, s2;
    std::cin>>s1>>s2;
    for(int i =0;i<s1.size();i++)
    {
        (s1[i]==s2[i]) ? printf("0") : printf("1");
    }
}
