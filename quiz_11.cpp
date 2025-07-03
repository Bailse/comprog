#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main ()
 {
  int day,month;
  int year365,year366;
  int year_TH;
  int count = 0;
  
  cin >> day >> month >> year_TH;
    int monthy1[] {30, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int monthy2[] {30, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  //cout << sizeof(monthy1)/(sizeof(monthy1[0])*month) << endl;
  //cout << year_TH % 4 << endl;
  int ans_day = 0;
  if (year_TH % 4 == 3)
  { 
    for (int i = 0; i < month; i++)
    {
      ans_day = ans_day+monthy2[i];
      count = i;
      
    }
    
    if(count == 0) {
    ans_day = day;}
    else if(count >= 1){
    ans_day = ans_day - (monthy2[count] - day - 1);}
    
    cout << "all day = "<<  ans_day << endl;

  }
  else 
  {
        for (int i = 0; i < month; i++)
    {
      ans_day = ans_day+monthy2[i];
      count = i;
      
    }
    
    if(count == 0) {
    ans_day = day;}
    else if(count >= 1){
    ans_day = ans_day - (monthy2[count] - day);}
    
    cout << "all day = "<<  ans_day << endl;
  }


 
}