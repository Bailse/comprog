#include <iostream>
#include <cmath>
using namespace std;
int main () 
{
    int hr1,min1,hr2,min2;
    cin >> hr1 >> min1 >> hr2 >> min2;
    
    int allmin1 = (hr1*60)+min1;
    int allmin2 = (hr2*60)+min2;
    //cout << allmin1 <<" "<< allmin2 << endl;

   // int opmin = abs(allmin1-allmin2);
    int opmin = (allmin2 - allmin1 + 1440) % 1440; //บวกไปครบ 1 วัน แล้วหารออก 1 วัน
    //cout << opmin << endl;
    cout << (int)opmin/60 << " hr " << (opmin%60) <<" min until alarm rings."<< endl;

}