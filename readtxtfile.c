#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char text[MAX_LENGTH];
    char *ptr = text;
    
    while (1) {
        printf("Enter text (type END to stop): ");
        fgets(ptr, MAX_LENGTH, stdin);
        
        if (strncmp(ptr, "END", 3) == 0) {
            break;
        }
        
        printf("You entered: %s", ptr);
        ptr += strlen(ptr);
    }
    
    return 0;
}
