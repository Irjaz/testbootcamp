#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
string inputteks; 
char inputhuruf;
int pteks;
int main() {
    cout << "mengganti huruf vokal" << endl << "------------------------"<<endl;
    cout << "masukan kalimat : ";
    getline(cin, inputteks);
  cout << "masukan huruf pengganti : ";
  cin >> inputhuruf;
  cout << endl << endl;
  pteks = inputteks.size();
  for(int kteks=0; kteks< pteks; kteks++){
      if(inputteks[kteks]=='a' or inputteks[kteks]=='i' or inputteks[kteks]=='u' or inputteks[kteks]=='e' or inputteks[kteks]=='o'){
        inputteks[kteks]=inputhuruf;
      }
  }
  
  cout << inputteks;
  return 0;
}
