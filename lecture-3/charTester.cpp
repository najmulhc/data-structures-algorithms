#include<iostream>

using namespace std;

int main () {
    int ch;
    cout << "Enter a character" << endl;
    ch = cin.get();

    if(ch > 47 && ch < 58 ){
        cout << "You have entererd a number character" << endl;
    } else if (ch > 64 && ch < 91) {
        cout << "You have entered a capital letter." << endl;
    } else if (ch > 96 && ch < 123) {
        cout << "You have entered a small letter." << endl;
    } else {
        cout << "Your given character is neither a number or a letter" << endl;
    }
    return 0;
}