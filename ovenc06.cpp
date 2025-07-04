#include <iostream>
using namespace std;
int main () 
{
    int taste = 0; //รสชาติ n , m amount
    float price = 0; 
    int allamount = 0;
    cin >> taste;
    int amount[100];
    int n[taste];
    for (int i = 0; i < taste; i++)
    {   
        cin  >> amount[i] >> n[i]; 
    }
    
    for (int i = 0; i < taste; i++)
    {   
        allamount += amount[i];
        price = price+(n[i]*amount[i]);
    }
    // ตอนนี้เก็บราคา กับ จำนวนได้แล้ว //
     
    //cout << allamount << endl; // correct
    //cout << "------------------------------" << endl;
    //keep price // keep all amount
    
    if (allamount >= 2*taste )
    {
        price = (97.0/100.0) * price;
        if (allamount > 14 && price > 25)
        {
            price = price -10 ;
        }
    }
    else if (allamount < 20 && price < 500)
    {
        price = 600+price;
    }

    else
    {   
        int dis1 = taste*0.35;
        price = price - dis1;
    }
    
    cout << (int)price << endl;
}
//100