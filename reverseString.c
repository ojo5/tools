#include <stdio.h>
#include <string.h>
// Function to reverse copy bytes from arg2 to arg1
void reverse_copy(void* arg1, const void* arg2, size_t arg3) {
    for (int i = 0; i < arg3; i++) {
        ((char*)arg1)[i] = ((char*)arg2)[arg3 - i - 1];
    }
}

int main() {
    // Example string to reverse
    const char* original = "Hello, World!";

    size_t length = strlen(original);
    // Allocate memory for the reversed string
    char reversed[length + 1];  // +1 for the null terminator
    
    // Call reverse_copy to reverse the string in place
    reverse_copy(reversed, original, length);
    
    // Add null terminator to make it a valid C string
    reversed[length] = '\0';

    // Print results
    printf("Original: %s\n", original);
    printf("Reversed: %s\n", reversed);
    
    return 0;
}