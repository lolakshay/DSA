#include<bits/stdc++.h>
using namespace std;
int remDup(vector<int> &arr)
{
    int n = arr.size(); 
    if(n<=1)
        return n;
    
    int index = 1;
    for(int i = 1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            arr[index++]=arr[i];
        }
    }
    return index;
    
}




int main()
{
    vector<int> arr ={2,2,2,2,2,2,2};
    int newsize = remDup(arr);

    for(int i =0;i<newsize;i++){
        cout<<arr[i]<< " ";
    }

}