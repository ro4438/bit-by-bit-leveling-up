#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    cout << "C++ File Writer Starting.\n";
    string message, filename;
    cout << "Enter your message: ";
    getline(cin, message);
    cout << "Enter file name: ";
    cin >> filename;
    if (filename.substr(filename.length()-4, filename.length()-1) != ".txt") {
        filename = filename + ".txt";
    }
    ofstream myfile;
    myfile.open(filename);
    myfile << message;
    myfile.close();
    cout << "Done!\n";
    return 0;
}
