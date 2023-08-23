#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Function to generate a random integer within a range
int random_int(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Function to generate a random lowercase letter
char random_lowercase() {
    return 'a' + random_int(0, 25);
}

// Function to generate a random uppercase letter
char random_uppercase() {
    return 'A' + random_int(0, 25);
}

// Function to generate a random digit
char random_digit() {
    return '0' + random_int(0, 9);
}

// Function to generate a random valid password
void generate_password(char *password, int length) {
   int i; 
   for ( i = 0; i < length; i++) {
        int choice = random_int(0, 2);
        if (choice == 0) {
            password[i] = random_lowercase();
        } else if (choice == 1) {
            password[i] = random_uppercase();
        } else {
            password[i] = random_digit();
        }
    }
    password[length] = '\0'; // Add null terminator
}

int main() {
    srand(time(NULL)); // Seed the random number generator

    int password_length = 10; // Change this to the desired password length
    char password[password_length + 1]; // +1 for the null terminator

    generate_password(password, password_length);
    printf("Generated Password: %s\n", password);

    return 0;
}
