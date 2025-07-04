#include <iostream>
using namespace std;
int main () 
{
    int weight,speed,tall;
    cin >> speed >> tall >> weight;
    bool weak = false;
    if (tall < 100 || weight > 200)
    {
        weak = true;
        speed = (speed*(60.0/100.0));
        cout << "It too weak." << endl;
    }
    
    if(!weak&&speed > 100){cout << "It can jump over." << endl;}
    if(!weak&&speed <= 100){cout << "It can't jump over." << endl;}
}