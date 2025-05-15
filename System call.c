// Include standard input/output library
#include <stdio.h>

// Include definitions for data types used in system calls
#include <sys/types.h>

// Include definitions for wait() and related macros
#include <sys/wait.h>

// Include definitions for fork(), pid_t, etc.
#include <unistd.h>

// Main function
int main() { 

    // Create a child process
    pid_t pid = fork(); 

    // Check if it's the child process
    if (pid == 0) { 
        // Child process logic goes here
        printf("Child process running\n"); 
        return 0; 
    } else { 
        // Parent process logic

        // Declare a variable to store the exit status
        int status; 

        // Wait for the child to finish
        wait(&status); 

        // Print after child finishes execution
        printf("Child has finished\n"); 
    } 

    // End of main function
    return 0; 
}
