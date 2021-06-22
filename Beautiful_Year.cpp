#include<iostream>
#define Input(X_VAL) scanf("%d", &X_VAL)
#define Log(X_VAL1)  printf("%d",X_VAL1)
int main()
{
   int year,a,b,c,d;
   Input(year);
   while(true)
   {
       year+=1;
        a = year/1000;
        b = (year/100)%10;
        c = (year/10)%10;
        d = year%10;
       if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
       {
           break;
       }
   }
   Log(year);
 
}
