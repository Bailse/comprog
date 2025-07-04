#include <iostream>
using namespace std;
int main () 
{
    int x,y,z;
    cin >> x >> y >> z;
    
    if(z==1)
    {
    auto ans = x+y;
      cout << ans << endl;
    }
    else if(z==2)
    {
    auto  ans = x-y;  
      cout << ans << endl;
    }
    else if(z==3)
    {
    auto  ans = x*y;
      cout << ans << endl;
    }
    else if(z==4)
    {
        if (y==0){cout << "cannot divide by zero"<<endl;}
        else{
    auto  ans = x/y;
    cout << ans << endl;}
    }
    else if(z==5)
    {
        if (y=0){cout << "cannot divide by zero"<<endl;}
        else{
    auto    ans = x%y;
    cout << ans << endl;}
    }
    else;
}