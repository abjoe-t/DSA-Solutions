#include <stdio.h>
int main() {
    char op = '+';
    int a = 10, b = 5;
    switch(op) {
        case '+': printf("%d", a+b); break;
        case '-': printf("%d", a-b); break;
    }
    return 0;
}
