#include <iostream>
using namespace std;

int main() {





    //Inverted Numeric Half Pyramid
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n-row; col++) {
            cout << col+1 << " ";
        }

        cout << endl;
    }





    //Numeric Half Pyramid
    // int n;
    // cout << "ENter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     for(int col = 0; col < row+1; col++) {
    //         cout << col+1 << " ";
    //     }

    //     cout << endl;
    // }






    //Inverted Hallow Half Pyramid
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     for(int col = 0; col < n-row; col++) {
    //         if(col == 0 || col == (n-row)-1 || row == 0) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
    //     }

    //     cout << endl;
    // }





    //Hallow Half Pyramid
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     for(int col = 0; col < row+1; col++) {
    //         if(col == 0 || col == (row+1)-1 || row == n-1) {
    //             cout << "* ";
    //         }
    //         else {
    //             cout << "  ";
    //         }
    //     }

    //     cout << endl;
    // }





    //Inverted Half Pyramid
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     for(int col = 0; col < n-row; col++) {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }







    //Half Pyramid
    //here colum size depends on current row size
    // int n;
    // cout << "Enter the value of n: " << endl;
    // cin >> n;

    // for(int row = 0; row < n; row++) {
    //     for(int col = 0; col < row+1; col++) {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }






    //Hollow Square
    // int size;
    // cout << "Enter the size of the square: " << endl;
    // cin >> size;

    // for(int row = 0; row < size; row++) {
    //     for(int col = 0; col < size; col++) {
    //         if(row == 0 || row == size-1) {
    //             //for printing all stars in first and last row
    //             cout << "*  ";
    //         }
    //         else {
    //             //middle row
    //             if(col == 0 || col == size-1) {
    //                 //for printing stars in the first and last column of middle rows
    //                 cout << "*  ";
    //             }
    //             else {
    //                 //for printing spaces in between middle column of middle rows
    //                 cout << "   ";
    //             }
    //         }
    //     }

    //     cout << endl;
    // }






    //Hollow Rectangle
    // int row, col;
    // cout << "Enter the value of row and col: " << endl;
    // cin >> row >> col;

    // for(int r = 0; r < row; r++) {
    //     for(int c = 0; c < col; c++) {
    //         if(r == 0 || r == row-1) {
    //             //for printing all stars in first and last row
    //             cout << "*  ";
    //         }
    //         else {
    //             //middle rows
    //             if(c == 0 || c == col-1) {
    //                 //for printing stars in the first and last column of middle rows
    //                 cout << "*  ";
    //             }
    //             else {
    //                 //for printing spaces in between middle column of middle row
    //                 cout << "   ";
    //             }
    //         }
    //     }

    //     cout << endl;
    // }





    //Rectangle
    // int row, col;
    // cout << "Enter the value for row and col: " << endl;
    // cin >> row >> col;

    // for(int r = 0; r < row; r++) {
    //     for(int c = 0; c < col; c++) {
    //         cout << "*  ";
    //     }

    //     cout << endl;
    // }
    

    

    //Square Patterns
    // int size;
    // cout << "Enter the value of size: "<< endl;
    // cin >> size;

    // for(int row = 0; row < size; row++) {
    //     for(int col = 0; col < size; col++) {
    //         cout << "*  ";
    //     }

    //     cout << endl;
    // }




    // for(int i = 1; i <= 3; i++) {
    //     cout << i << "-> "; //for each value of outer loop all inner loop value will executed.
    //     for(int j = 1; j <= 2; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    return 0;
}