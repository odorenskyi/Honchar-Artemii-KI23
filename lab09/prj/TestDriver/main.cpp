#include <iostream>
#include "ModulesGonchar.h"
using namespace std;

int main() {

    double x, y, z;
    cout << "¬вед≥ть x,y,z: ";
    cin >> x >> y >> z;
    double result_s = s_calculation(x, y, z);
    cout << "–езультат: " << result_s << endl;

    int numbers[5];

    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }
    calculateSalary(numbers);

    int sockSize;
    cout<<"¬вед≥ть розм≥р: ";
    cin>>sockSize;
    convertSockSize(sockSize);

    int N;
    cout << "¬вед≥ть число дл€ п≥драхунку б≥т≥в: ";
    cin >> N;
    countBits(N);

    return 0;
}
