/*
 * Competitive Programming
 *
 * @author        Daniele Cappuccio
 * @link          (https://github.com/daniele-cappuccio/UVa-online-judge)
 * @license       MIT License (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

/* return string representation of num in base rad as new string (or NULL) */
char* toBaseWhatever(int num, int rad){
    char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int i;
    char buf[66];   /* enough space for any 64-bit in base 2 */

    /* bounds check for radix */
    if (rad < 2 || rad > 62)
        return NULL;
    /* if num is zero */
    if (!num)
        return strdup("0");

    /* null terminate buf, and set i at end */
    buf[65] = '\0';
    i = 65;

    if (num > 0) {  /* if positive... */
        while (num) { /* until num is 0... */
            /* go left 1 digit, divide by radix, and set digit to remainder */
            buf[--i] = digits[num % rad];
            num /= rad;
        }
    } else {    /* same for negative, but negate the modulus and prefix a '-' */
        while (num) {
            buf[--i] = digits[-(num % rad)];
            num /= rad;
        }
        buf[--i] = '-';
    }   
    /* return a duplicate of the used portion of buf */
    return strdup(buf + i);
}

int main(){

    ios::sync_with_stdio(false); //faster I/O
    int N;

    while (true){
        cin >> N;
        if (N < 0) break;

        string str(toBaseWhatever(N, 3));
        cout << str << endl;      
    }

    return 0;
}