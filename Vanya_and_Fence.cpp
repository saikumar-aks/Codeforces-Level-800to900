#include<bits/stdc++.h>
#define Log(M) printf("%d", M)
int main()
{
   static int n , h , val , c(0);
   scanf("%d%d", &n, &h);
   while(n--)
   {
       std::cin>>val;
       if(val <= h)
          c++;
       else
          c+=2;
       
   }
    Log(c);
}
