#include <iostream>
#include "ModulesGonchar.h"
using namespace std;

int main() {

    double x, y, z;
    cout << "������ x,y,z: ";
    cin >> x >> y >> z;
    double result_s = s_calculation(x, y, z);
    cout << "���������: " << result_s << endl;

    int numbers[5];

    for (int i = 0; i < 5; ++i) {
        cin >> numbers[i];
    }
    calculateSalary(numbers);

    int sockSize;
    cout<<"������ �����: ";
    cin>>sockSize;
    convertSockSize(sockSize);

    int N;
    cout << "������ ����� ��� ��������� ���: ";
    cin >> N;
    countBits(N);

    return 0;
}
