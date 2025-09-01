// Secure code - Preventing buffer overflow by validating input length

#define MAX_SIZE 10

void safe_copy(char *input) {
    if (strlen(input) < MAX_SIZE) {
        strcpy(buffer, input);  // Safe copy if within bounds
    } else {
        printf("Error: Input too long!\n");
    }
}


// Safe alternative using strncpy

void safe_copy(char *input) {
    strncpy(buffer, input, sizeof(buffer) - 1);  // Safe copy
    buffer[sizeof(buffer) - 1] = '\0';  // Ensuring null termination
}


