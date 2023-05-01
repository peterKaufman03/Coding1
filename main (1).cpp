#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;


int main() {
  srand(time(0));
  cout << "Hello World!\n";

  cout << "\n\n";
  string favGames[100];

  int index = 0;

  while(true) {
    cout << "\n\nWhat would you like to do?\n";
    cout << "Type 'quit' to quit.\n";
    cout << "Type 'add' to add a game.\n";
    cout << "Type 'bulkadd' to add multiple games at a time.\n";
    cout << "Type 'show' to show the array of games.\n";
    cout << "Type 'edit' to edit last entry.\n";

    string input;
    cin >> input;

    if(input == "quit") {
      cout << "Thanks for playing!\n";
      break;
    }

    if(input == "add") {
      cout << "What game would you like to add:\n";
      cin >> input;
      favGames[index] = input;
      index += 1;
      // assignment bulk add, loop to add games until they type 'quit'
    }

    int loop = 0;
    int loopCount = 0; 
    if(input == "bulkadd") {
      cout << "What game would you like to add:\n";
      while(loop < 99) {
        loopCount += 1;
        cin >> input;
        favGames[index] = input;
        index += 1;
        if(input == "quit") {
          break;
          }
      }
    }

    if(input == "show") {
      cout << "\nHere are your favorite games:\n\n";
      for(int i = 0; i < index; i++) {
        cout << favGames[i] << "\n";
      }
    }

    if(input == "edit") {
      cout << "Please re-enter last game name.\n"; 
      cin >> input;
      favGames[index - 1] = input;
    }

    if(input == "find") {
      cout << "What game would you like to change?";
      cin >> input;
      for(int i = 0; i < index; i++) {
        if(favGames[i] == input) {
          cout << "Found it!\n";
          cout << "What would you like to change this to?\n";
          cin >> input;
          favGames[i] = input;
        }
      }
    }
    
  }     

  
}