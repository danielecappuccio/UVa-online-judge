/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream> 
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

inline int get_value(char c){
    if (c >= 'a' && c <= 'z') return c - 96;
    return 0;
}

int sum_digits(int N){
    if (N < 10) return N;
    string str = to_string(N);
    int sum = 0;

    for (int j = 0; j < str.size(); ++j)
        sum += str[j] - '0';
    
    return sum;
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    string s, t;
    int i, A, B;

    while (getline(cin, s)){

        A = B = 0;
        for (i = 0; i < s.size(); ++i)
            A += get_value(tolower(s[i]));

        getline(cin, t);
        for (i = 0; i < t.size(); ++i)
            B += get_value(tolower(t[i]));

        while (A > 9) A = sum_digits(A);
        while (B > 9) B = sum_digits(B);

        if (B <= A) cout << fixed << setprecision(2) << (float) 100.0 * B / (float) A << " %" << endl;
        else cout << fixed << setprecision(2) << (float) 100.0 * A / (float) B << " %" << endl;
    }

    return 0;
}