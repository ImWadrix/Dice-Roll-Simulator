#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "Dice Rolling Simulator" << endl;
    
    int num_dice, num_sides;
    
    cout << "How many dice do you want to roll? ";
    cin >> num_dice;
    
    cout << "How many sides does each die have? ";
    cin >> num_sides;
    
    srand(time(0)); // seed the random number generator with the current time
    
    for (int i = 1; i <= num_dice; i++) {
        int result = rand() % num_sides + 1; // generate a random number between 1 and num_sides
        cout << "Die " << i << " rolled a " << result << endl;
    }
    
    return 0;
}
