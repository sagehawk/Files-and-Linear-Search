//https://replit.com/teams***************************************************************************
//
// Sajjad Haq
// H00803115
// CSC 122 COMPUTER SCIENCE II (62339)
//
// I certify that this is my own work and where appropriate an extension of the
// starter code provided for the assignment.
//
//***************************************************************************
#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  ifstream inFile;
  string inputFileName;
  vector<string> names;
  string nameToFind;

  cout << "Please enter the name of your names file: ";
  cin >> inputFileName;

  inFile.open(inputFileName);

  while (inFile.fail()) {
    cout << "I'm sorry, I could not open '" << inputFileName << "'.\n"
         << "Please enter another name: ";
    cin >> inputFileName;
    inFile.open(inputFileName);
  }

  cout << "File '" << inputFileName << "' opened successfully!\n";

  string name;
  while (getline(inFile, name)) {
    names.push_back(name);
  }
  cin.ignore();
  cout << "What name would you like to find in this file? \n";

  getline(cin, nameToFind);

  transform(nameToFind.begin(), nameToFind.end(), nameToFind.begin(),
            ::tolower);

  bool found = false;
  while (found == false) {
    for (int i = 0; i < names.size(); i++) {
      string currentName = names[i];

      transform(currentName.begin(), currentName.end(), currentName.begin(),
                ::tolower);
      if (currentName == nameToFind) {
        if (i == 0) {
          cout << "'" << names[i] << "' is the " << i + 1
               << "st name in the file!\n";
        }
        if (i == 1) {
          cout << "'" << names[i] << "' is the " << i + 1
               << "nd name in the file!\n";
        }
        if (i == 2) {
          cout << "'" << names[i] << "' is the " << i + 1
               << "rd name in the file!\n";
        }
        if (i > 2) {
          cout << "'" << names[i] << "' is the " << i + 1
               << "th name in the file!\n";
        }
        found = true;
        break;
      }
    }
    if (found == false) {
      cout << "I'm sorry, that name does not exist in '" << inputFileName
           << "'.\n";
      cout << "Please enter another name: ";
      getline(cin, nameToFind);
    }
  }
}