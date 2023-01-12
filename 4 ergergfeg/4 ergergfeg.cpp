#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    system("chcp 1251"); 
    ifstream fin; 
    fin.open("MyInput.txt"); 
    string str, str2; 
    int count = 0; 
    while (!fin.eof()) { 
        str = ""; 
        getline(fin, str); 
        istringstream iss(str); 
        string str2; 
        while (iss >> str2) { 
            count++; 
        }
    }
    ofstream fout; 
    fout.open("MyAnswer.txt"); 
    fout << count - 1; 
    fout.close();
    fin.close();
    return 0;
}
