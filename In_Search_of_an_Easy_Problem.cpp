#include<iostream>
#define Log(M) std::cout<<M
int main()
{
    int n,val,c(0);
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &val);
        if(val==1)
        {
            c++;
        }
    }
    (c>0) ? Log("HARD") : Log("EASY");
}
