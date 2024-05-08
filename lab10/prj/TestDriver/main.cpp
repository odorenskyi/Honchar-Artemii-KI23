#include <iostream>
#include "ModulesGonchar.h"
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "uk_UA.UTF-8");
    author("test.txt");
    wordFile("word.txt");
    double x = 0.1;
    double y = 0.1;
    double z = 0.1;
    int b = 1;


    string outputFileName = "output.txt";
    calculations(x, y, z, b, outputFileName);
    return 0;
}
