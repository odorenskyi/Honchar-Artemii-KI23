#include <iostream>
#include <windows.h>
#include "ModulesGonchar.h"
using namespace std;

int main()
{
    while(true){
        char choise;
        cout<<"\nEnter v,n,m,q,w or W"<<endl;
        cin>>choise;

        switch(choise){
        case 'v':
            double x, y ,z;
            cout<<"¬вед≥ть x,y,z: "<<endl;
            cin>>x>>y>>z;
            cout<<s_calculation(x,y,z);
            break;
        case 'n':
            cout<<"¬вед≥ть години: "<<endl;
            int workHours[5];
            for(int i = 0; i < 5; ++i) {
                cin >> workHours[i];
            }
            calculateSalary(workHours);
            break;
        case 'm':
            int size;
            cout<<"¬вед≥ть розм≥р: "<<endl;
            cin>>size;
            convertSockSize(size);
            break;
        case 'q':
            int bit;
            cout<<"¬вед≥ть число: "<<endl;
            cin>>bit;
            countBits(bit);
            break;
        case 'w':
        case 'W':
            return 0;
        default:
            Beep(1000, 500);
        }
    }
    return 0;
}
