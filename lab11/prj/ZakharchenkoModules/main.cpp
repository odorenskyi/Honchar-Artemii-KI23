#include "ZakharchenkoModules.h"

void printEntryByProductNumber(string filename, int productNumber) {
    ifstream infile(filename);
    if (!infile.is_open()) {
        cout << "Error opening file: " << filename << endl;
        return;
    }

    string line;
    bool found = false;
    while (getline(infile, line)) {
        if (line.find("Номер продукту: " + to_string(productNumber)) != string::npos) {
            cout << line << endl;
            found = true;
            break;
        }
    }

    infile.close();
    if (!found) {
        cout << "Запису " << productNumber << " не знайдено." << endl;
    }
}

void copyDirectoryToFile(string sourceFilename, string targetFilename) {
    ifstream sourceFile(sourceFilename);
    if (!sourceFile.is_open()) {
        cout << "Помилка відкриття файлу: " << sourceFilename << endl;
        return;
    }

    ofstream targetFile(targetFilename);
    if (!targetFile.is_open()) {
        cout << "Помилка відкриття файлу: " << targetFilename << endl;
        sourceFile.close();
        return;
    }

    string line;
    while (getline(sourceFile, line)) {
        targetFile << line << endl;
    }

    sourceFile.close();
    targetFile.close();
}
