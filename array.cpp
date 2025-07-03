#include <iostream>

using namespace std;
int main () 
{
    int a[5]; // a0 a1 a2 a3 a4 

    for(int i = 0; i < 5; i++)
    {
        a[i] = 5;
    }
    cout << a[0] + a[3] << endl;

    cout<<sizeof(a)<<endl;
    cout<<sizeof(a[1])<<endl;
    cout<<sizeof(a[1])/sizeof(int)<<endl; //int 4 byte

}