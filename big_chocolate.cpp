#include <cstdio>
#include <iostream>

using namespace std;

int main(){

    int r, c;
    while (scanf("%d %d", &r, &c) == 2)
        cout << r*c - 1 << endl;

    return 0;
}