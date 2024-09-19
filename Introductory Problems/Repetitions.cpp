#include <iostream>
#include <vector>

using namespace std;

int main () {

    int biggest = 1, ax = 1;
    char comp;
    string word;
    cin >> word;

    for(int i = 0; i < (word.size()); i++) {
        comp = word[i];
        if(comp == word[i+1]) {
            ax++;
        }
        else {
            if(ax > biggest) {
                biggest = ax;
            }
            ax = 1;
        }
    }

    if(ax > 1) biggest = ax;

    cout << biggest << "\n";

    return 0;
}