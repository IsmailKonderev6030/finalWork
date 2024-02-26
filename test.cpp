#include<iostream>

using namespace std;

int main(){

    char words [5][50];

    for(int i {0}; i < 5; i++){
        cout<< "Enter " << i+1 << " word: ";
        cin.getline(words[i],50);
    }

    return 0;
}