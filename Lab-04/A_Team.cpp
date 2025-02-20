#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        vector<int> v(3);
        map<int,int> mp;
        for(int i=0; i<3; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp[1]>=2)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}