#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std;

int health = 30, attack, block, turns = 0;
int totalTreasure = 0; 

void story() {
  cout << "You are in a desolate world unfamilier to your own. Each day, you are tasked to go out in the landscape, trying to find resources and stay alive for as long as possible.\nHow long can you survive?\n\n";
  cout << "To start your adventure, you have a weapon and " << health << " health.\n"; 
  cout << "What would you like to call your weapon?\n"; 
    char input;
    cin >> input; 
}

bool askYN(string question = "Would you like to go adventurering?") {
  while(true) {
    cout << question << " (y/n)\n";
    char input;
    cin >> input;

    if(input == 'y') {
      return true;
    }
    else if(input == 'n') {
      return false;
    }
  } 
} 

int rollDie(int sides = 6, int min = 1) {
  return rand() % sides + min;
}

// int index = 0;
// string enemy[5]; 

// string enemyName(int enemy = 5, int min = 1) {
//   return string(enemy[]);
//   enemy[0] = "Orc"
//   enemy[1] = "Scrap Bandit"
//   enemy[2] = "Chum"
//   enemy[3] = "Witch Doctor"
//   enemy[4] = "Giant Earthworm"

//   for(int i = 0; i < index; i++) {
//     cout << enemyName[i] <<; 
//   }
// }


void adventure() {
  int count = 0;
  int loopCount = 0;

  while(loopCount < 1) {
    loopCount += 1;

    int attack = rand() % rollDie(); 
    int block = rand() % rollDie();
    int treasure = rand() % rollDie(20); 
    
      if(attack <= block) {
        count += 1;
        cout << "The enemy attacked and did damage to you.\n";
          health += attack - block; 
          cout << "Your health is now: " << health << ".\n";
          totalTreasure = treasure - treasure;
          cout << "You now have " << totalTreasure << " coins.\n";
      }
      if(attack > block) {
        count += 1;
        cout << "You attacked with your weapon and did damage to the enemy.\n";
        totalTreasure = treasure + treasure;
        cout << "You now have " << totalTreasure << " coins.\n";
      }
  }
}

void end() {
   if (health > 0) {
    cout << "\nCongratultions! You have successfully survived the attack and can move on!\n";
  }

  else if (health <= 0) {
    cout << "\nYou have fallen to the enemy and are now Dead.\n";
  }
}



int main() {
  srand(time(0));

  story(); 
  
  if(askYN()) {
    cout << "Here we go again!\n";
    
    // int loopCount = 0;
    // if( input = "y") {
      adventure();
    // }
  }
  else {
    cout << "Thanks for playing!\n";
  }


}