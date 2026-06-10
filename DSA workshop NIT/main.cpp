#include <iostream>
#include<vector>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
     return (n%10)+fact(n/10);
}

int main()
{
    long long n = 78094378988999;
    long long ans = fact(n);
    cout<<ans;
    return 0;
}