#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

// Function to be ecevuted by the thread
void *threadFunction(void* arg) {
    printf("Hello from the thread!\n");
    return NULL;

}

int main()
 {
     pthread_t thread;
     
     //create the thread

     if (pthread_create(&thread, NULL, threadFunction, NULL) != 0) {
         printf("Error creating thread\n");
             exit(1);
     }

     //wait for thread to complete
     
     if (pthread_join(thread, NULL) != 0) {
         printf("Error");
         exit(1);
     }
     
     printf("completed");
     return 0;
 }

