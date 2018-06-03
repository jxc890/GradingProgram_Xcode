//
//  main.cpp
//  GradingProgram
//
//  Created by Jiakai Chen on 6/3/18.
//  Copyright © 2018 Jiakai Chen. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int score;
    cout << "Please enter your score：";
    cin >> score;
    
    // using Switch Statement in C++
    int i = 0;
    if (score >= 0 && score <= 59){
        i = 1;
    }
    if (score >= 60 && score <= 69){
        i = 2;
    }
    if (score >= 70 && score <= 79){
        i = 3;
    }
    if (score >= 80 && score <= 99){
        i = 4;
    }
    if (score >= 90 && score <= 100){
        i = 5;
    }
    
    switch (i) {
        case 1:
             cout << "You got an F." << endl;
            break;
        case 2:
             cout << "You got an D." << endl;
            break;
        case 3:
             cout << "You got an C." << endl;
            break;
        case 4:
             cout << "You got an B." << endl;
            break;
        case 5:
             cout << "You got an A." << endl;
            if (score == 100)
             cout << "You got the perfect score!" << endl;
            break;
        default:
            cout << "Please enter your correct score!";
            cin >> score;
            break;
    }
    /*
    if (score < 0){
        cout << "Please enter your correct score!";
        cin >> score;
    }
    
    if (score >= 0 && score <= 59){
        cout << "You got an F." << endl;
    }
    if (score >= 60 && score <= 69){
        cout << "You got an D." << endl;
    }
    if (score >= 70 && score <= 79){
        cout << "You got an C." << endl;
    }
    if (score >= 80 && score <= 89){
        cout << "You got an B." << endl;
    }
    if(score >= 90 && score <= 100){
        cout << "You got an A." << endl;
        if (score == 100){
            cout << "You got the perfect score!" << endl;
        }
    }*/
    
    //system( "read -n 1 -s -p \"Press any key to continue...\"" );
    return 0;
}
