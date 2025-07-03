#include <iostream>
#include <array>
using namespace std;
int main () 
{   

    int c ,target , sum;
    cin >> c;
    cin >> target;
    int in[c];
    for(int i = 0 ; i < c ;i++ )
    {
        cin >> in[i];
    }
 
    
    for (int i = 0; i < c; i++)
    {
       for (int j = i+1; j < c ; j++)
       {
         if (in[i]+in[j] == target)
         {
            cout << "[" << i << "," << j << "]" << endl;
          
         }
         
       }
       
    }

}

