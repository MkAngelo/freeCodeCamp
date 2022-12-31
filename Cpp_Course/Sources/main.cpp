#include <iostream>

using namespace std;

int main(){
    
    string phrase = "Giraffe Academy";
    //cout << phrase.find("Academy", 0); // que busco, desde que caracter
    cout << phrase.substr(8, 3); // caracter inicial, cuantos tomara

    return 0;
}