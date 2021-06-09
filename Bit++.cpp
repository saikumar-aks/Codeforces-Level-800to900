#include<bits/stdc++.h>
#define Log(Msg) std::cout<<Msg<<std::endl;
int count = 0;
int main()
{
   int t;
   std::cin>>t;
   while(t--)
   {
      std::string statement;
      std::cin>>statement;
      bool is_true = statement == "X++" or statement == "++X";
     
      if(is_true)
         count++;
      else
        count--;
   }
    
    Log(count);
}  
