/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>

using namespace std;

bool is_prime(int N){
    if (N <= 2) return true;
    if (N % 2 == 0) return false;
    int i;
    for (i = 3; i < N / 2; i += 2){
        if (N % i == 0) return false;
    }

    return true;
}

int value_of(char c){
    if (c >= 'A' && c <= 'Z') 
        return c - 38;
    else
        return c - 96;
}

int main(){

    string s;
    int N;

    while (getline(cin, s)){
        N = 0;
        for (char& c : s)
            N += value_of(c);

        if (N == 0) break;
        if (is_prime(N))
            cout << "It is a prime word.";
        else
            cout << "It is not a prime word."; 
        cout << endl;
    }

    return 0;
}