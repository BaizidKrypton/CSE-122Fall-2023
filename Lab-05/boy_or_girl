#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int count=0;
   stack<char>q;
   sort(s.begin(),s.end());

q.push(s[0]);
for(int i=0;i<s.size();i++){
    if(q.top()!=s[i])
    q.push(s[i]);
}
while(!q.empty()){
    count++;
    q.pop();
}
   
   if(count%2==0) cout<<"CHAT WITH HER!";
   else cout<<"IGNORE HIM!";
   return 0;

}
