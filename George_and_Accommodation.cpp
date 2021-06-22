#include<iostream>
#define Log(M) printf("%d", M)
int main()
{
   static int n, p, q, c(0);
   scanf("%d", &n);
   while(n--)
   {
       scanf("%d%d", &p, &q);
       if(abs(p-q)>=2)
        c++;
       
   }
    Log(c);
}
