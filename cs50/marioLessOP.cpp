// #include <iostream>
// using namespace std;

// int main() {
//     int userInput;
    
//     do {
//         cout << "Input a number between 1-8: ";
//         cin >> userInput;
//     } while (userInput > 8 || userInput < 1);

//     cout << "Height : " << userInput << endl;

//     for (int i = 1; i <= userInput; i++) {
//         cout << string(userInput - i, ' '); // Print leading spaces
//         cout << string(i, '#'); // Print left hashtags
//         cout << "  "; // Print gap between halves
//         cout << string(i, '#'); // Print right hashtags
//         cout << endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int userInput;
    
    do {
        cout << "Input a number between 1-8: ";
        cin >> userInput;
    } while (userInput > 8 || userInput < 1);

    cout << "Height : " << userInput << endl;

    for (int i = 1; i <= userInput; i++) {
        // Print spaces
        for (int j = 0; j < userInput - i; j++) {
            cout << " ";
        }
        
        // Print left hashtags
        for (int k = 1; k <= i; k++) {
            cout << "#";
        }

        // Print gap between halves
        cout << "  ";
        
        // Print right hashtags
        for (int m = 1; m <= i; m++) {
            cout << "#";
        }
        
        cout << endl;
    }

    return 0;
}
