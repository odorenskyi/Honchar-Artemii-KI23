#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>

#include "ModulesGonchar.h"

using namespace std;

int main()
{
    system("chcp 1251 & cls");

    try {
    string filePath = __FILE__;
    string path = filePath;

    path.resize(path.length() - 20);
    string resFile = "\TestSuite\\TestResults.txt";
    string testFile = "\TestSuite\\TestSuiteFile.txt";

    int checking = filePath.find("\\lab12\\prj");
    if (checking == -1) {
            for (int i = 0; i < 100; i++){
                    Beep(675, 100);
            }
            ofstream file;
            file.open(path + resFile);
            file << "Встановленні вимоги порядку виконання лабораторної роботи порушено!" << endl;
            file.close();
    }
    else {
        ifstream file;
        file.open(path + testFile);
        if (!file.is_open()) throw (string)"Помилка відкриття файлу";

        string line;

        while (!file.eof()) {
            getline(file, line);
            char status = line[line.length() - 1];

            int countLen = line.length() - 2;
            line.resize(countLen);

            float len = stof(line);

            ClassLab12_Gonchar *buff = new ClassLab12_Gonchar(len);
            if (status == 'y') buff->setFull();

            ofstream res;
            res.open(path + resFile, ios_base::app);
            res <<"Довжина: " << buff->getLen() << ", Об'єм: " << buff->getVol() <<  ", Заповненість: " << buff->getRipn() << "\n\n";
            res.close();

            delete buff;
        }
        file.close();
    }
    system("pause");
    return 0;
    }
    catch(string errorString) { cout << errorString << endl; }
}
