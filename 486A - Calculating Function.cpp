#include <iostream>
#define Log(Op) std::cout<<Op;
int main()
{
    long long n, a;
    std::cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    Log(a);
    return 0;
}