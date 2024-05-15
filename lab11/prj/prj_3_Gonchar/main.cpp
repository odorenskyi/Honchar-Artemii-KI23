#include <iostream>
#include "ModulesGonchar.h"
#include "LinnikovaModules.h"
#include "ZakharchenkoModules.h"
#include "struct_type_project_2.h"
using namespace std;

int main()
{
    string filename = "edirectory.txt";
    createFileIfNotExists(filename);
    string data = startup(filename);

    cout << data << endl;
    int action;

    while (true){
    cout<<"1 - пошук запису за введеним кодом товару\n2 - зберігання довідника у заданий текстовий файл\n3 - додавання нового запису в довідник\n4 - вилучення заданого запису\n5 - завершення роботи"<< endl;
    cin >> action;

    switch (action){
        case 1: {
            int productNumber;
            cout << "Введіть номер продукта для пошуку: ";
            cin >> productNumber;
            printEntryByProductNumber(filename, productNumber);
            break;
        }
        case 2: {
            string targetFilename;
            cout << "Введіть назву файлу для зберігання довідника: ";
            cin >> targetFilename;
            createFileIfNotExists(targetFilename);
            copyDirectoryToFile(filename, targetFilename);
            cout << "Довідник збережено в файл " << targetFilename << endl;
            break;
        }
        case 3: {
            Edirectory entry;
            cout << "Введіть номер розділу: ";
            cin >> entry.directoryPart;

            cout << "Введіть назву розділу: ";
            cin >> entry.directoryPartName;

            cout << "Введіть номер группи: ";
            cin >> entry.groupArticle;

            cout << "Введіть номер товару: ";
            cin >> entry.numberArticle;

            cout << "Введіть назву товару: ";
            cin >> entry.articleName;

            writeToFile(filename, entry.directoryPart, entry.directoryPartName, entry.groupArticle, entry.numberArticle, entry.articleName);
            break;
        }
        case 4:{
            int productNumber;
            cout << "Введіть номер продукта для видалення: ";
            cin >> productNumber;
            deleteEntryByProductNumber(filename, productNumber);
            break;
        }
        case 5:{
            return 0;
        }
      }
    }

    return 0;
}
