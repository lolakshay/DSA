#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
        string modstr(string s)
        {
            string newstr;
            newstr = s;
            newstr[0]='T';
            return newstr;
        }

};

int main()
{
    Solution obj;
    string s = "AGNAS";
    string modified = obj.modstr(s);
     
    cout<<"String before "<<s;
    cout<<"String after" <<obj.modstr(s);
    return 0;
}