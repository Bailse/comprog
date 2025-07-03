#include <iostream>
#include <cmath>
using namespace std;

int main () 
{   
 int y1,x1,y2,x2;
 int scale,speed;
 cin >> scale >> speed;
 cin >> y1 >> x1 >> y2 >> x2;

 float distance = sqrt(pow(x1+x2,2)+pow(y1+y2,2))*scale;
 float time = (distance*5)/(speed*18);

 int hour = (int)time;

 int minute = ceil((time-hour)*60);
 cout << hour<<" "<<"hr "<< minute << " min"<< endl;
 
}