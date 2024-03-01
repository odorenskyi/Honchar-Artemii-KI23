#include <iostream>
#include <ModulesGonchar.h>
using namespace std;

void aboutAuthor(){
    cout<<"Гончар Артемій ©"<<endl;
}

int aAndB(int a, int b){
    int result = (a + 1 <= b) ? 1 : 0;
    return result;
}

int main()
{
    system("chcp 65001 & cls");
    int x;
    int y;
    int z;
    int a;
    int b;
    cout<<"Enter x,y,z"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<"Enter a, b"<<endl;
    cin>>a;
    cin>>b;
    cout<<endl;
    cout<<s_calculation(x,y,z)<<endl;
    cout<<aAndB(a,b)<<endl;
    cout << "x hex: " << hex << x << endl;
    cout << "y hex: " << hex << y << endl;
    cout << "z hex: " << hex << z << endl;
    cout << "x dec: " << oct << x << endl;
    cout << "y dec: " << oct << y << endl;
    cout << "z dec: " << oct << z << endl;
    aboutAuthor();
    return 0;
}
