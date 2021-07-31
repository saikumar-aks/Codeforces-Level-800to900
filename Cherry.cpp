#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int A[100010];
    int n , t;
	cin>>t;
	while(t--)
	{
		long long int ans=0;
		cin >> n;
		for (int i = 1; i <= n; ++i) 
		{
          cin >> A[i];
          ans = max(ans, A[i] * A[i - 1]);
        }
    cout << ans << endl;
	}

}
