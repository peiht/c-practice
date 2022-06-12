#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char data[100];

    ofstream outfile;
    outfile.open("data.sh");

    cout << "writing data to the file " << endl;
    cout << "enter your name :" << endl;
    cin.getline(data, 100);

    outfile << data << endl;

    cout << "enter your age" << endl;
    cin >> data;
    cin.ignore();

    outfile << data << endl;

    outfile.close();


    ifstream infile;
    infile.open("data.sh");
    cout << "Reading from file :" << endl;
    infile >> data;

    cout << data << endl;                       

    infile >> data;

    cout << data << endl;

    infile.close();
    return 0;
}