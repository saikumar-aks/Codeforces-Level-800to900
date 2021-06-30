#include <iostream>
#include<iomanip>

#define Log(Op) std::cout<<Op<<std::endl;
int main()
{
   int n, val;
   double sum(0.0), res(0.0);
   std::cin>>n;
   for(int i =0;i<n;i++)
   {
       std::cin>>val;
       sum+=val;
   }
   res = sum/n;
   std::cout<<std::fixed<<std::setprecision(12)<<res;
}
