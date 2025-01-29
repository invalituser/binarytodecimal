#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main(){
    string binary;
    int decimal = 0;
    cout << "Enter binary number: ";
    cin >> binary;
    
    int length = binary.length(); //here I take length of my binary to separate variable

    for (int i = 0; i < length; i++){

        char BinaryAsChar = binary[i]; // I take every character separately

        int charTOint = BinaryAsChar - '0'; //my char becomes int

        decimal = decimal + charTOint * pow(2, length - i - 1);

    }

    cout << "Value is: " << decimal << endl;
}