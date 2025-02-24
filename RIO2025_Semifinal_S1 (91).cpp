#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdio.h>

bool check(char* num) {
    int len = 0;
    char *t = num;
    while(*t++) len++;
    for(size_t i = 0; i <= (len / 2); i++) {
        if(num[i] != num[len - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    long l, r;
    std::cin >> l >> r;
    for(long i = l; l <= i && i <= r; i++) {
        char s_i[64] ={0};
        sprintf(s_i, "%ld", i);
        if(check(s_i)){
            std::cout << "Palindrome!" << std::endl;
        }
        else {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
