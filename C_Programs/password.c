#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isLowercase(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

bool isUppercase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

bool isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

bool isSpecialChar(char ch) {
    
    char specialChars[] = "!@#$%^&*()-+";

    
    for (int i = 0; i < strlen(specialChars); ++i) {
        if (ch == specialChars[i]) {
            return true;
        }
    }

    return false;
}

bool isStrongPassword(char* password) {
    int length = strlen(password);

    bool hasLowercase = false;
    bool hasUppercase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (int i = 0; i < length; ++i) {
        if (isLowercase(password[i])) {
            hasLowercase = true;
        } else if (isUppercase(password[i])) {
            hasUppercase = true;
        } else if (isDigit(password[i])) {
            hasDigit = true;
        } else if (isSpecialChar(password[i])) {
            hasSpecialChar = true;
        }
    }


    return (length >= 8 && hasLowercase && hasUppercase && hasDigit && hasSpecialChar);
}

int main() {
    char password[100];
    printf("Enter the password: ");
    scanf("%s", password);
    if (isStrongPassword(password)) {
        printf("The password is strong.\n");
    } else {
        printf("The password is not strong.\n");
    }

    return 0;
}

