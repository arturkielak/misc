#include <iostream>
#include <string>
#include <math.h>

using namespace std;

typedef unsigned long long _long;
const char alpha[] = "0123456789";
_long alpha_length = 10;
_long min_length = 4;
_long max_length = 8;

void generate() {
    for(_long a = min_length; a <= max_length; a++) {
        _long power = pow(alpha_length, a);
        for (_long j = 0; j < power; j++) {
            _long k = j;
            for (_long i = 0; i < a; i++) {
                cout << alpha[k % alpha_length];
                k = k / alpha_length;
            }
            cout << endl;
        }
    }
}

int main() {
    generate();
    return 0;
}
