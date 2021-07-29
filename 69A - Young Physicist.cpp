#include<bits/stdc++.h>
using std::cin;
using std::cout;
int main()
{
	int t, x, y, z, X_SUM(0), Y_SUM(0), Z_SUM(0);
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d%d", &x,&y,&z);
		X_SUM+=x;
		Y_SUM+=y;
		Z_SUM+=z;
	}
	if(X_SUM==0 && Y_SUM==0 && Z_SUM==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}


}
