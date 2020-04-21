#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    int counter = 0, checker = 0;
    char arr[100];
    
    cout << "Enter a word: ";
    cin.getline(arr, 99);
    
    counter = strlen(arr) - 1;
    for(int i = 0; arr[i]; i++){
        if(arr[i] == arr[counter]){
            checker++;
        }
        counter--;
    }
    
    if(checker == strlen(arr)){
        cout << arr << " is a palindrome";
    } else{
        cout << arr << " is not a palindrome";
    }
    
    return 0;
}