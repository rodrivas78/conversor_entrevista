#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

int main() {

    const char token1 = '[';
    const char token2 = ']';
    char charTemp2;

    ifstream filein("Entrevista.txt"); // File to read from
    ofstream fileout("Entrevista_formatada.txt"); // Temporary file

    bool inBrackets = false;

    while (filein.get(charTemp2)) {
        if (charTemp2 == token1) {
            inBrackets = true;
        }
        else if (charTemp2 == token2) {
            inBrackets = false;
        }
        else if (!inBrackets) {
            fileout << charTemp2;
        }
        else if (charTemp2 == ' ') {
            fileout << ' ';
        }
    }

    fileout.close(); 

    return 0;
}
