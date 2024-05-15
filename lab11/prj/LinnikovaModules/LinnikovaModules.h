#ifndef LINNIKOVAMODULES_H_INCLUDED
#define LINNIKOVAMODULES_H_INCLUDED
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

void writeToFile(string filename, int directoryPart, string directoryPartName, int groupArticle, int numberArticle, string articleName);
void deleteEntryByProductNumber(string filename, int productNumber);
#endif // LINNIKOVAMODULES_H_INCLUDED
