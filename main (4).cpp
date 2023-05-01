#include <iostream>
#include <fstream>
#include <string>
using namespace std; 

// getline is part of string 
// getline has two input parameters (getting line from where?
// and putting the lines here) 

string people[100]; 
int index = 0;

void show(){
  for(int i = 0; i < index; i++) {
    // skip remove names...
    if(people[i] == ""){
      continue; 
    }
    cout << people[i] << "\n";
  }
}

void remove(){
  cout << "What name would you like to remove?\n";
  string input;
  getline(cin, input);

  // look through the names for the name they typed..
  for(int i = 0; i < index; i++) {
    if(people[i] == input) {
      cout << "I have found it! I am removing the name...\n"; 
      people[i] = ""; 
    }
  }
  show(); 
  
}

int main() {

  string input;

  cout << "What is your name?\n"; 
  getline(cin, input); 

  cout << "Nice to meet you " << input << ".\n";

  cout << "Loading people...\n";
  // creating an ifstream file and opening file "save.txt"
  ifstream file("save.txt"); 

  // index = 0, ppl[0++] + "luke"; index is now 1 because added Luke
  if(file.is_open()) {
    while(getline(file, input)) 
      people[index++] = input;
  }

  show();

  remove();
  
}