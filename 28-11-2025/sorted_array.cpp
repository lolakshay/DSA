#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {10,70,30,40,50};
    bool count=true;
    int arr_size = arr.size();
    for(int i=0;i<arr_size-1;i++)
    {
        if(arr[i]>arr[i+i])
        {
            count=false;
            break;
        }
    }

    if(count)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }


}
