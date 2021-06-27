#include <iostream>
#define Log(Op) std::cout<<Op;
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			Log("I hate");
		}
		else{
			Log("I love");
		}
		if(i != n-1)
		{
			Log(" that ");
		}
		else{
			Log(" it ");
		}
	}
}
