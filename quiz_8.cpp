#include <iostream>
#include <string>
using namespace std;

int main () 
{  
   string b; cin >> b;
    string a[27] {"01","02","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","51","53","55","58"};
    //cout<<sizeof(a)<<endl;
    //cout<<sizeof(a)/sizeof(a[0])<<endl;
    bool ans = false;
  
    int i = 0;
  while (i<sizeof(a)/sizeof(a[0]))
  {
    if (a[i]==b)
    {
        ans = true;
        
        break;
    }
    i++;
  }
  

if (ans)
{
    cout<<"OK"<<endl;
}
else
    cout<<"Error"<<endl;
}
 //for(int i=0;i<sizeof(a)/sizeof(a[0]);i++) 
    //{
    //    if (a[i]==b)
    //    {
    //        ans = true;
    //        return 0;
    //        break;
    //    }
        
    //}