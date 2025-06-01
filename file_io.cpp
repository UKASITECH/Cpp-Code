#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Write to file
    ofstream outFile("data.txt");  // Open file for writing
    if (outFile) {                 // Check if file opened successfully
        outFile << "Hello, File I/O!\n";
        outFile << "Simple example.\n";
        outFile.close();           // Close file
    } else {
        cout << "Cannot open file for writing.\n";
    }

    // Read from file
    ifstream inFile("data.txt");   // Open file for reading
    if (inFile) {
        string line;
        while (getline(inFile, line)) {  // Read line by line
            cout << line << endl;        // Print each line
        }
        inFile.close();            // Close file
    } else {
        cout << "Cannot open file for reading.\n";
    }

    return 0;
}
