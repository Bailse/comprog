#include <iostream>
using namespace std;
int main () 
{
    int n;
    string s;
    cin >> n >> s;
    int z = n;
    int a = 1;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i+1; j--)
        {   
            cout << " "; //ช่องว่าง

        }
        for (int k = 0; k < a; k++) //การพิมพ์ ใน "/" //
            {   
                cout << "/";
            }
        
        for (int l = 1; l < b; l++) //พิมพ์คำ
        {
            cout << s;
        }
        b+=2;
               
        cout << "\\";        
         
        cout<<endl;
    }
    
}