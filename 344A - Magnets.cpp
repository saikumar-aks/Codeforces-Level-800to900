#include <iostream>
int main()
{
	int n , cnt=1;
	std::string a , b;
	std::cin>>n>>a;
	for(int i=0; i<n-1;i++)
	{
		std::cin>>b;
		if(a != b)
		{
			cnt++;
			a = b;
		}
	}
	std::cout<<cnt;
}
