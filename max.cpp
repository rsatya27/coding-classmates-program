//Name: Rajneesh S
//Date: 9/24/24
//Assignment: Code your classmates program
#include <iostream>
using namespace std;
int main(){
    int num1 = 7;

    cout << "Enter a number between 1-10." << endl;
    cin >> num1;
    if num1 == 7{
        cout << "Good job. You guessed the right number.";
    }
    else if num1 == 1{
        cout << "Such a basic guess";
    }
    else if num1 == 2{
        cout << "So not close";
    }
    else if num1 == 3{
        cout << "Double or nothing";
    }
    else if num1 == 4{
        cout << "Almost there";
    }
    else if num1 == 5{
        cout << "grrr";
    }
    else if num1 == 6{
        cout << "So close";
    }
    else if num1 == 8{
        cout << "So close dude";
    }
    else if num1 == 9{
        cout << "Shoot dude";
    }
    else if num1 == 10{
        cout << "Put some effort dude";
    }
    else{
        cout << "I asked for you to enter a number between 1-10";
    }
}
