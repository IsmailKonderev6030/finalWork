#include<iostream>

using namespace std;

int main(){

    char words [5][50];

    for(int i {0}; i < 5; i++){
        cout<< "Enter " << i+1 << " word: ";
        cin.getline(words[i],50);
    }

    char* res[5];
    int count {0};

    for(int i {0}; i < 5; i++){
        int j{0};
        while(words[i][j] != '\0' && j < 4) j++;

        if(j < 4) res[count++] = words[i];
    }

     for(int i {0}; i < count; i++)
        cout<<res[i]<<' ';
    
    return 0;
}
