//
//  main.cpp
//  strings practice
//
//  Created by Max Dorfman on 10/11/16.
//  Copyright © 2016 Max Dorfman. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    
    string first_category;
    string second_category;
    cout << "How many in the first category?" << endl;
    cout << "How many in the first category?" << endl;
    double first_number;
    cin >> first_number;
    getline(cin, first_category);
    cout << "How many in the second category?" << endl;
    double second_number;
    cin >> second_number;
    getline(cin, second_category);
    double length1 = first_category.length();
    double length2 = second_category.length();
    string word1_singular = first_category.substr(0,length1 - 1);
    string word2_singular = second_category.substr(0,length2- 1);
    cout << setw(length1 + length2 + 11) << first_category << setw(10) << first_number << endl;
    cout << setw(length2 + length1 + 11) << second_category << setw(10) << second_number << endl;
    cout << fixed;
    cout << setprecision(2);
    cout << setw(length1) << word1_singular << "First" << " -to-" << "Second" << setw(length2) << word2_singular << " ratio" << setw(10) << first_number/second_number << endl;
    cout << setw(length2) << word2_singular << "Second" << " -to-" << "First" << setw(length1) << word1_singular << " ratio" << setw(10) << second_number/first_number << endl;
    cout << " " << endl;
    
    
    
    return 0;
}
