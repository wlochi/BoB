//
//  main.cpp
//  99bottles
//
//  Created by Isabella Wloch on 12/19/20.
//

#include <iostream>
#include <string>
using namespace std;

int numberbottles;
string pluralize(int numIn);

int main() {
    for (int numberbottles = 99; numberbottles > 0; numberbottles--) {
        cout << numberbottles << " " << pluralize(numberbottles) << "  of beer on the wall, " << numberbottles << " " << pluralize(numberbottles) << "  of beer, " << "take one down, pass it around, " << numberbottles - 1 << " " << pluralize(numberbottles - 1) << "  of beer on the wall!" << endl;
        }
    return 0;
        // question : why did numberbottles - 1 work here, but not --numberbottles?
    //second pluralize function maybe for second half of verse?
    //print status
    //make things parameters when u want to edit the data in a function, when u want to change and return
    }

string pluralize(int numIn){
    if (numIn == 1) {
        return "bottle";
    }
    return "bottles";
}

























