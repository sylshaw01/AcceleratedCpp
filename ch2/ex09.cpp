#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main(){

    cout << "Enter the first number:";
    int a;
    cin >> a;
    cout << endl <<"Enter the second number:";
    int b;
    cin >> b;
    if(a>=b){
        cout << endl << "The first number is bigger" << endl;
    } else {
        cout << endl << "The second number is bigger" << endl;
    }


    return 0;
}