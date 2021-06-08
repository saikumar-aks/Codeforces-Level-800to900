#include <iostream>
#define Log(Msg) std::cout<<Msg<<std::endl
int main()
{
   int W;
   std::cin>>W;
  if(W % 2 == 0)
  {
      if (W == 2) Log("NO");
      else Log("YES");
  }
  else
  {
      Log("NO");
  }
}
