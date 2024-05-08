#include <cmath>
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <ctime>
#include <bitset>
using namespace std;

double s_calculation(double x, double y, double z){

    system("chcp 65001 > nul");

    double S;

    S = ((1.0/2) * pow(x , 2)) - sqrt(abs(pow((y+z),2) - pow(x, 5))) - log10(sin(z));

    return S;
}

void calculateSalary(const int hours_worked[]) {
    float hourly_rate = 40.0;
    float bonus_rate = 300.0;
    float income_tax, pension_tax, social_security_tax, unemployment_tax, net_salary;
    float total_salary = 0.0;

    for (int i = 0; i < 5; i++) {
        total_salary += hours_worked[i] * hourly_rate;
        if (hours_worked[i] > 8) {
            total_salary += bonus_rate;
        }
    }
    income_tax = 0.15 * total_salary;
    pension_tax = 0.02 * total_salary;
    social_security_tax = 0.6 * total_salary;
    unemployment_tax = 0.01 * total_salary;

    net_salary = total_salary - (income_tax + pension_tax + social_security_tax + unemployment_tax);

    cout << "\n���������� ���� ��������: " << total_salary << "\n";
    cout << "������� �� ��������: " << income_tax << "\n";
    cout << "�������� ����: " << pension_tax << "\n";
    cout << "���� ������������'�������� ���������� �������������� �� ������� ���������: " << social_security_tax << "\n";
    cout << "������������'������ �������� �������������� � ��'���� � ���������� ������� �������������:" << unemployment_tax << "\n";
    cout << "\n���� �� ������ ����������� (� ������������ ���������):" << net_salary << "\n";
}

void convertSockSize(int ukraine_size) {
    int us_size, eu_size;

    switch (ukraine_size) {
        case 23:
            us_size = 8;
            eu_size = 37;
            break;
        case 25:
            us_size = 9;
            eu_size = 39;
            break;
        case 27:
            us_size = 10;
            eu_size = 41;
            break;
        case 29:
            us_size = 11;
            eu_size = 43;
            break;
        case 31:
            us_size = 12;
            eu_size = 45;
            break;
        default:
            cout << "������ ������ ����" << endl;
            return;
    }
    cout << "���: " << us_size <<endl;
    cout << "��: " << eu_size << endl;
}

void countBits(int N) {
    int D7 = (N & (1 << 7)) ? 1 : 0;
    int count = 0;
    if (D7 == 1) {
        count = 0;
        while (N > 0) {
            count += (N & 1) ? 0 : 1;
            N >>= 1;
        }
    } else {
        count = 0;
        while (N > 0) {
            count += (N & 1) ? 1 : 0;
            N >>= 1;
        }
    }
    if (D7 == 1) {
        cout << "ʳ������ �������� ����: " << count << endl;
    } else {
        cout << "ʳ������ ������� �������: " << count << endl;
    }
}

void author(const std::string& fileName){
    ofstream file(fileName);
    if (!file.is_open()) {
        cout << "�� ������� ������� ���� ��� ������." << endl;
        return;
    }
    file << "������ ������, ����, �.�������������, ������, 2024" <<endl;

    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "�� ������� ������� ������� ����." << endl;
        return;
    }

    string word;
    inputFile >> word;
    inputFile.close();

    int consonantCount = 0;
    for (char c : word) {
        if (isalpha(c) && !strchr("���߲���������", c)) {
            consonantCount++;
        }
    }

    file << "ʳ������ ����������� ���� � ����: " << consonantCount << endl;

    string poem = "��� ���� �� ���� �������� ���, �� �� ������� ����� ����. ����: \"� �������, ���������, ��������!\" � ���� ���� ���, �� �� ����!";
    if (poem.find(word) != string::npos) {
        file << "����� \"" << word << "\" ����������� � ������ ���������." << endl;
    } else {
        file << "����� \"" << word << "\" �� ����������� � ������ ���������." << endl;
    }

    file.close();

}

void wordFile(const std::string& fileName){
    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cout << "�� ������� ������� ������� ����." << endl;
        return;
    }


    string word;
    inputFile >> word;
    inputFile.close();

    ofstream outputFile(fileName, ios_base::app);
    if (!outputFile.is_open()) {
        cout << "�� ������� ������� ���� ��� �����������." << endl;
        return;
    }

    if (!word.empty()) {
        outputFile << "����� �����: " << word.front() << std::endl;
        outputFile << "������� �����: " << word.back() << std::endl;
    }

    time_t currentTime = time(nullptr);
    outputFile << "���� �� ��� ��������: " << asctime(localtime(&currentTime));

    outputFile.close();
}

void calculations(double x, double y, double z, int b, const string& outputFileName) {
    ofstream outputFile(outputFileName, ios_base::app);
    if (!outputFile.is_open()) {
        cout << "�� ������� ������� �������� ����." << endl;
        return;
    }

    double result = s_calculation(x, y, z);

    outputFile << "��������� ��������� �� �������� s_calculation � ����������� x=" << x << ", y=" << y << ", z=" << z << ": " << result << endl;
    outputFile << "����� " << b << " � ��������� ���: " << bitset<32>(b) << endl;

    outputFile.close();
}

