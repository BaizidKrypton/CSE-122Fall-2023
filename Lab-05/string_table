#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c) {

     c=tolower(c);

if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c=='y')
    return true;
else
    return false;
}

int main(){
   string s;
   cin>>s;
   queue<char>q;
   for(int i=0;i<s.size();i++){
    if(!isVowel(s[i]))
       { q.push('.');
         if(s[i]>=65 && s[i]<=90){
            q.push(s[i]+32);
         }
         else
         q.push(s[i]);

       }

   }

   while(!q.empty()){
        cout<<q.front();
        q.pop();
   }
   return 0;
}
