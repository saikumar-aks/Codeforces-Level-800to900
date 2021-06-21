#include<iostream>
int sum=0;
#define Log(Msg) std::cout<<Msg<<std::endl;
int main()
{
    int k , n , w;
    std::cin>>k>>n>>w;
    //arithmetic prog`ression
 
    #define sum ((w  * (2 * k + (w - 1) * k)) / 2)
 
    if(sum > n)
    {
 
      Log(sum - n);
    }
    else
    {
     Log('0');
    }
}
