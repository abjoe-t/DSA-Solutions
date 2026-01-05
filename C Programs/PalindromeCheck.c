#include <stdio.h>
int main() {
    int n = 121, original = n, reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    if (original == reversed) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
