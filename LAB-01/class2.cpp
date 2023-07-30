#include <iostream>
using namespace std;
int main()

{

    int a,b,c;
    cin>>a>>b>>c;

    if(a>c&&a>b)
    {
        cout<<"highest num is:";
        cout<<a;
    }

   else if(b>a&&b>c)
    {

        cout<<"highest num is:";
        cout<<b;

    }

    else

   {

        cout<<"highest num is:";
        cout<<c;
   }
    return 0;



}
