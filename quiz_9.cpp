#include <iostream>
using namespace std;
int main () {

    double Gpax1,Gpax2;
    string ID1,ID2; 
    char grade[] { 'A','B','C','D','F'};
    //string score[] { "cp_01", "cp_02", "cal1_1", "cal1_2", "cal2_1", "cal2_2"};
    char sc1[3];//{'cp_01','cal1_1','cal2_1'};
    char sc2[3];//{'cp_02','cal1_2','cal2_2'};

////////////////////////////
   
     cin >> ID1 >>Gpax1>> sc1[0] >>sc1[1] >> sc1[2];
    cout<<"---------------"<<endl;
     cin >> ID2 >>Gpax2>> sc2[0]>> sc2[1] >> sc2[2];
    int i = 0;
    int A = 145-'A'; int B = 136-'B'; int C = 127-'C'; int D = 118-'D'; int F = 70-'F'; // สูตรการคำนวณเกรด
    int scf1[3];//เก็บหลังคำนวณเสร็จ
    int scf2[3];

    while ( i < sizeof(sc1)/sizeof(sc1[0]))
    {
        switch (sc1[i])
        {
        case 'A':
       
            scf1[i] = 145-sc1[i];
            break;
        case 'B':
         
            scf1[i]= 136-sc1[i];
            break;
        case 'C':
        
            scf1[i]= 127-sc1[i];
            break;
        case 'D':
  
            scf1[i]= 118-sc1[i];
            break;
        case 'F':
 
            scf1[i]= 70-sc1[i];
            break;
        default:
            break;
        }
    i++;    
    }
    int z=0;
    while ( z < sizeof(sc2)/sizeof(sc2[0]))
    {
        switch (sc2[z])
        {
        case 'A':
            
            scf2[z] = 145-sc2[z];
            break;
        case 'B':

            scf2[z]= 136-sc2[z];
            break;
        case 'C':

            scf2[z]= 127-sc2[z];
            break;
        case 'D':

            scf2[z]= 118-sc2[z];
            break;
        case 'F':
   
            scf2[z]= 70-sc2[z];
            break;
        default:
            break;
        }
    z++;    
    }
   
    
    //ต่อมาสร้าง ลำดับความสำคัญในการวัดผล//
    if (scf1[0] > scf2[0])
    {
        cout << ID1 << endl;
    }
    if (scf1[0] < scf2[0])
    {
        cout << ID2 << endl;
    }
    if (scf1[0] == scf2[0] && scf1[0] != 80 && scf2[0] != 80)
    {
         cout << "none" <<endl;
    }


    if (scf1[0] == 80 && scf2[0] == 80)
    {   
        if (Gpax1 > Gpax2 )
        {
            cout << ID1 << endl;
        }
        if (Gpax1 < Gpax2 )
        {
            cout << ID2 << endl;
        }

        if (Gpax1 == Gpax2)
        {
            if (scf1[1]>scf2[1])
            {
                cout << ID1 << endl;
            }
            if (scf1[1]<scf2[1])
            {
                cout << ID2 << endl;
            }
            
            if (scf1[1]==scf2[1])
            {
                if (scf1[2]>scf2[2])
                {
                    cout << ID1 << endl;
                }
                if (scf1[2]<scf2[2])
                {
                    cout << ID2 << endl;
                }
                if (scf1[2]==scf2[2])
                {
                    cout << "both" << endl;
                }
                
            }
            
        }
    }
    




    //while (i<sizeof(grade)/sizeof(grade[0]))
    //{
        //cout << grade[i] << endl;
    //    cout << grade_score[i] <<endl;
    //    i++;
   // }
   // cout << "--------------" << endl;
    
    
    
    


}