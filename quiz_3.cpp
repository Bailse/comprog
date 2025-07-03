#include <iostream>
#include <cmath>
using namespace std;
int main () 
{
    int x;
    cin>>x;
    if (x>=2544 && x<=2643)
    {
        int y;
        int b;
        y = (x-543);
        string z = to_string(y);
        string a = z.substr(2,2);
        
        b = stoi(a); //เปลี่ยนเป็น int
        int d = (b+floor(b/4)+11);
        //cout<<a<<endl;//
        
    cout<<d%7<<endl;

    }
    else
    {
        cout<<"noob";
    }

}