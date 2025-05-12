#include <iostream>
using namespace std;

unsigned long long factorial(unsigned long long n);


unsigned long long fabonacci(unsigned long long n);


int main(){
    cout << "Factorial : " << factorial(20) << endl;
    cout << "Fabonnaci : " << fabonacci(10) << endl;
}


unsigned long long fabonacci(unsigned long long n){
    if(n <= 1){
        return n;
    }

    return fabonacci(n - 1) + fabonacci(n - 2);
}

unsigned long long factorial(unsigned long long n){
    if(n == 0){
        return 1; // Base Case
    }

    return n * factorial(n -1) ;
}
