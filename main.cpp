//
//  main.cpp
//  p6-2
//
//  Created by Jakob Hammond on 9/28/23.
//

#include <iostream>
using namespace std;

int main(void){
    
    int sideLength;
    int rowLength;
    
    cout << "Enter number of asterisks per side: ";
    cin >> sideLength;
    rowLength = sideLength + (sideLength - 1);
    
    for(int leftBlankSpace = rowLength/2; leftBlankSpace > 0; leftBlankSpace--){
        cout << ".";
    }
    
}
