#include<iostream>
using namespace std;

int main(){
    int num1;
    int even = 0;
    int odd = 0;
    cout << "Enter an integer: ";
    cin >> num1;
    while(num1 != 0){
        if(num1%2 == 0){
            even++;
        }else{
            odd++;
        }
        cout << "Enter an integer: ";
        cin >> num1;
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}