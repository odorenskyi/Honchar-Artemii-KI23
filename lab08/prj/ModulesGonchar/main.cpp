#include <cmath>

double s_calculation(double x, double y, double z){

    system("chcp 65001 > nul");

    double S;

    S = ((1.0/2) * pow(x , 2)) - sqrt(abs(pow((y+z),2) - pow(x, 5))) - log10(sin(z));

    return S;
}
