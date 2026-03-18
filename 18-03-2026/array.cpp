#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Elemets in the array are ... ";
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<"\n";
    }
}