#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s, s1="hello";
	int j=0, s_size=0;
	cin>>s;
	for(int i=0;i<s.size();++i)
	{
		if(s[i]==s1[j])
		{
			j++;
			s_size++;
			if(s_size==5)
			{
				printf("YES");
				return 0;
			}
		}
	}
	printf("NO");
	return 0;
}
