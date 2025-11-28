#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr)
{
   vector<int> res;
   int a;
   a=arr.size();
   int j;
   for(int i=0;i<a;i++)
   {
        for(j=i+1;j<a;j++)
        {
            if(arr[i]<arr[j])
            break;
        }
        if(j==a){
            res.push_back(arr[i]);
        }
   }
   return res;
}



int main()
{
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> result = leaders(arr);
    for(int res:result)
    {
        cout<<res<<" ";
    }
    cout<<endl;
    return 0;
}
