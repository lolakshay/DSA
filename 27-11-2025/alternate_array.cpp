#include<bits/stdc++.h>
using namespace std;
vector<int> alternate_ele(vector<int> &arr)
{
    vector<int>res;
    for(int i=0;i<arr.size();i+=2)
    {
        res.push_back(arr[i]);
    }
    return res;

}
int main()
{
    vector<int> arr;
    
    int n;
    cout<<"Enter how many elements are there in the array";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        arr.push_back(i);
    }
    vector<int> res = alternate_ele(arr);
    for(int x:res)
        cout<<x<<" ";
    return 0;


}