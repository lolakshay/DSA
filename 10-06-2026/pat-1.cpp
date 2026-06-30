#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
// for(int i=0;i<n;i++)
// {
//     cout << "*";

//     if((i+1)%5==0)
//     {
//         cout << "\n";
//     } 
// } my method which is alsoo good instead of using 2 for loop
    return 0;
}