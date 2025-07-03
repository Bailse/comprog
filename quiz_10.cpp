#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main () {
    int sum = 0;
    int a =0;
    int n =0;
   while (cin >> a && a != -1)
   {
     sum += a;
    n++;
   }
   if ( sum == 0){
    cout << "No data" <<endl; }
    else{
    double mean = (sum/n);
    mean = round(mean *100) / 100;
    cout << mean << endl;
    }
    
}