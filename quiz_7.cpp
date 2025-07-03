#include <iostream>
#include <cmath>
using namespace std;
int main () {

int n = 5;
int i = n;
while (i>0) //การขึ้นบรรทัดใหม่
{   
    int j =i;
    while (j>0) //การเขียน *****
{
    cout<<"*";
    j--;
}
    cout<<endl;
    i--;
}


}
