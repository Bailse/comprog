#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
   int xe,ye,re,rp,xm,ym,xp,yp;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    
    double d1 = re-rp; //เล็ก
    
    double L1 = xe-xm; //ใหญ่ x
    double L2 = ye-ym; //ใหญ่ y

    double d2 = sqrt(L1*L1 + L2*L2);
    
    double dans = d1+d2;
    double xans = (d1*xm) + (d2*xe); 
    double yans = (d1*ym) + (d2*ye);

    float ans = xans/dans;
    int ans2 = yans/dans;
    cout<<"--------------------------------"<<endl;
    cout<<round(ans)<<endl;
    cout<<round((int)ans2)<<endl;

    //สิ่งที่รู้คือการใช้สูตรคณิตมากกว่าการcodeอีก แต่เอาจริงๆเราควรแยกชุดเลขออกกัน

}