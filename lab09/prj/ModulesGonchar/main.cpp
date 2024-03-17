#include <cmath>
#include <iostream>
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

    cout << "\nНарахована сума зарплати: " << total_salary << "\n";
    cout << "Податок на прибуток: " << income_tax << "\n";
    cout << "Пенсійний фонд: " << pension_tax << "\n";
    cout << "Фонд загальнообов'язкового державного соцстрахування на випадок безробіття: " << social_security_tax << "\n";
    cout << "Загальнообов'язкове державне соцстрахування у зв'язку з тимчасовою втратою працездатності:" << unemployment_tax << "\n";
    cout << "\nСума до видачі працівникові (з вирахуваними податками):" << net_salary << "\n";
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
            cout << "Такого розміру нема" << endl;
            return;
    }
    cout << "США: " << us_size <<endl;
    cout << "ЄС: " << eu_size << endl;
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
        cout << "Кількість бінариних нулів: " << count << endl;
    } else {
        cout << "Кількість бінарних одиниць: " << count << endl;
    }
}
