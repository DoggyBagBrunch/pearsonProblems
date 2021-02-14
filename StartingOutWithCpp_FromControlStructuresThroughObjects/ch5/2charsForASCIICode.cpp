/*
 Characters for the ASCII Codes 
 Write a program that uses a loop to display the characters for the ASCII codes 0 through 127. 
 Display 16 characters on each line.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
  for (int i = 0; i < 128; i++) {
    if (i%16 == 0) {
      cout << endl;
    }
    cout << (char)i;
  }
}