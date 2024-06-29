#include <iostream>
using namespace std;

int main() {
    //10.ABCBA pattern
    int n;
    cout << "Enter the value of n: "<< endl;
    cin >> n;

    for(int row = 0; row < n; row++) {
        char ch = 'A';

        for(int col = 0; col < row+1; col++) {
            cout << ch;
            ch++;
        }

        --ch;

        for(int col = 0; col < row; col++) {
            --ch;
            cout << ch;
        }

        cout << endl;
    }









    //9.Full fancy 1 2 pattern
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     for(int col = 0; col < (2*row)+1; col++) {
    //         if(col % 2 == 0) {
    //             cout << row+1;
    //         }
    //         else {
    //             cout << "*";
    //         }
    //     }

    //     cout << endl;
    // }

    // for(int row = 0; row < n-1; row++) {
    //     for(int col = 0; col < 2*(n-row)-3; col++) {
    //         if(col % 2 == 0) {
    //             cout << n-row-1;
    //         }
    //         else {
    //             cout << "*";
    //         }
    //     }

    //     cout << endl;
    // }








    //8.Fancy 1 2 Pattern
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     for(int col = 0; col < (2*row)+1; col++) {
    //         if(col % 2 == 0) {
    //             cout << row+1;
    //         }
    //         else {
    //             cout << "*";
    //         }
    //     }

    //     cout << endl;
    // }
 






    //7.Mix Pyramid
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // //Uppar half
    // for(int row = 0; row < n; row++) {
    //     //Left uppar half star
    //     for(int star = 0; star < n-row; star++) {
    //         cout << "*";
    //     }

    //     //middle uppar half spaces
    //     for(int space = 0; space < (2*row)+1; space++) {
    //         cout << " ";
    //     }

    //     //Reght uppar half star
    //     for(int star = 0; star < n-row; star++) {
    //         cout << "*";
    //     }
        
    //     cout << endl;
    // }

    // //Lower Half
    // for(int row = 0; row < n; row++) {
    //     //Left lower half star
    //     for(int star = 0; star < row+1; star++) {
    //         cout << "*";
    //     }

    //     //Middle lower half space
    //     for(int space = 0; space < 2*(n-row)-1; space++) {
    //         cout << " ";
    //     }

    //     //Right lower half star
    //     for(int star = 0; star < row+1; star++) {
    //         cout << "*";
    //     }

    //     cout << endl;
    // }








    //6.Hollow Diamond Pattern
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // //Part 1 for hollow pyramid
    // for(int row = 0; row < n; row++) {
    //     //spaces
    //     for(int space = 0; space < n-row-1; space++) {
    //         cout << " ";
    //     }

    //     //stars
    //     for(int star = 0; star < row+1; star++) {
    //         //cout << "* ";
    //         if(star == 0 || star == (row+1)-1) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
    //     }

    //     cout << endl;
    // }

    // //Part 2 for inverted hollow pyramid
    // for(int row = 0; row < n; row++) {
    //     //spaces
    //     for(int space = 0; space < row; space++) {
    //         cout << " ";
    //     }

    //     //stars
    //     for(int star = 0; star < n-row; star++) {
    //         //cout << "* ";
    //         if(star == 0 || star == n-row-1) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
    //     }

    //     cout << endl;
    // }







    //5.Inverted Hollow Pyramid
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     //spaces
    //     for(int space = 0; space < row; space++) {
    //         cout << " ";
    //     }

    //     //stars
    //     for(int star = 0; star < n-row; star++) {
    //         //cout << "* ";
    //         if(row == 0 || star == 0 || star == (n-row)-1) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
    //     }

    //     cout << endl;
    // }









    //4.Hallow Pyramid
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     //spaces
    //     for(int space = 0; space < n-row-1; space++) {
    //         cout << " ";
    //     }

    //     //stars with some spaces within for hollow inside the pyramid
    //     for(int star = 0; star < row+1; star++) {
    //         if(star == 0 || star == (row+1)-1 || row == n-1) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
    //     }

    //     cout << endl;
    // }





    //3.Diamond Patterns
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // //rows
    // for(int row = 0; row < n; row++) {
    //     //spaces
    //     for(int space = 0; space < n-row-1; space++) {
    //         cout << " ";
    //     }

    //     //stars
    //     for(int star = 0; star < row+1; star++) {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // for(int row = 0; row < n; row++) {
    //     //spaces
    //     for(int space = 0; space < row; space++) {
    //         cout << " ";
    //     }

    //     //stars
    //     for(int star = 0; star < n-row; star++) {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }





    //2.Inverted Half Pyramid
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     //spaces
    //     for(int space = 0; space < row; space++) {
    //         cout << " ";
    //     }

    //     //stars
    //     for(int star = 0; star < n-row; star++) {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    




    //1.Full Pyramid
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // //rows
    // for(int row = 0; row < n; row++) {
    //     //spaces
    //     for(int space = 0; space < n-row-1; space++) {
    //         cout << " ";
    //     }

    //     //stars
    //     for(int star = 0; star < row+1; star++) {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    return 0;
}