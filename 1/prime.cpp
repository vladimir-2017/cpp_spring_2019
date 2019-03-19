#include <iostream>
#include "numbers.dat"
using namespace std;

bool isPrime(int x){
    if (x == 2)
        return true;
    if (x == 1 || x % 2 == 0)
        return false;
    for(int i = 3; i*i <= x; i += 2){
        if (x % i == 0)
            return false;
    }
    return true;
}

int amountPrime(int a, int b){
    int count = 0;
    for(int i = 0; i < Size && Data[i] <= b; i++){
        if (Data[i] >= a  && isPrime(Data[i])){
            count++;
        }        
    }
    return count;
}

int main(int argc, char* argv[]){
    if (argc % 2 != 0 && argc != 1){
        for (int i = 1; i < argc; i += 2){
            int v = atoi(argv[i]);
            int w = atoi(argv[i+1]);
            cout << amountPrime(v, w) << endl;
        }
        return 0;
    }
    return -1;    
}