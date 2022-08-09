#include <iostream>

using namespace std;


int factorial(int n){
    /*
    A demo function calculating factorial of numer(e.g. !num)
    */
    if(n<=1)
        return 1;
    else
        return n*factorial(n-1);
}

int main(){
    int num,result;
    /*
    cout << "Enter number to be factorialized:";
    cin >> num;
    */
    num = 8;
    result = factorial(num);
    cout << num << "!=" <<result;

    return 0;
}
