#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int main() {
  srand(time(0));

  // welcome the player
  cout << "Hello Adventurer! A Orc stands in your path. You must defeat it to move forward.\n";
  // set up the game
  int health = 10, attack, block, turns = 0;
  //     seed the random number generator
  int count = 0;
  int loopCount = 0;

  int randomNumber = rand() % 10 + 1;
  if(randomNumber > 5) {
    count += 1;
  }

  cout << "";
  // start the loop
  while(loopCount < 4) {
    loopCount += 1;
      //     add 1 to turns
  turns += 1;
    cout << "It is the " << turns << " turn.\n";
  //     start the encounter
  //         randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
  //         if block is greater or equal to attack, successful block
  //         otherwise, subtract attack value from health.
  int attack = rand() % 5; 
  int block = rand() % 5;
    if(attack <= block) {
      count += 1;
      cout << "The Orc slashed with his sword and did damage to you.\n";
        health += attack - block; 
        cout << "Your health is now: " << health << ".\n";
    }
    if(attack > block) {
      count += 1;
      cout << "You attacked with your weapon and did damage to the Orc.\n";
    }
  }
  // keep looping while health is greater than zero and fewer than 4 turns have happened
  
  // if health is greater than 0, congratulate player
  if (health > 0) {
    cout << "Congratultions! You have successfully survived the Orc attack and can move on!\n";
  }
  // otherwise, tell the player they're dead.
  else if (health <= 0) {
    cout << "You have fallen to the Orc warrior and are now Dead.\n";
  }
}