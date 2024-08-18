


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_vowel(char c, const char vowels[]) {
    for (int i = 0; vowels[i] != '\0'; i++) {
        if (c == vowels[i]) {
            return 1;  // The character is a vowel
        }
    }
    return 0;  // The character is not a vowel
}
char *disemvowel(const char *str){
    // Define a static array of vowels
    char vowels[] = "aeiouAEIOU";
  
    // Check for NULL input
    if (str == NULL) {
        return NULL;
    }

    size_t len = strlen(str);
  
    char *result = (char *)malloc((len + 1) * sizeof(char));
  
    // Check for NULL input
    if (result == NULL) {
        return NULL;
    }

    int j = 0;  // Index for the result string

    // Loop through the input string
    for(int i = 0; str[i] != '\0'; i++){  
      if (!is_vowel(str[i], vowels)) {
            result[j++] = str[i];   
        }   
    }
  
    result[j] = '\0';

    return result;
}


