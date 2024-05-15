#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

string startup(string filename){
    ifstream file(filename);

    if (!file.is_open()){
        cout<<"Error";
    }

    stringstream buffer;
    buffer<<file.rdbuf();

    return buffer.str();
}

void createFileIfNotExists(string filename) {
    ifstream file(filename);
    if (!file.good()) {
        ofstream outfile(filename);
        if (!outfile) {
            cout<<"Error";
        }
        outfile << "";
    }
}



