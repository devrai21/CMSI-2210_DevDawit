#include <stdio.h>
#include <time.h>
#include <math.h>

int main() {
    printf("This program will time how long you can hold your breath. Take a deep breath, then press the 'Enter' key. When you absolutely have to exhale, press the 'Enter' key again. The duration will be displayed in minutes and seconds.\n");
    getchar(); // waiting for user input for Enter

    time_t start_time, end_time; // used to store the starting and ending times for measuring the duration; StackOverflow
    int elapsed_time;
    start_time = time(NULL);

    printf("Timer started. Press 'Enter' to stop...");
    getchar(); 

    end_time = time(NULL);
    elapsed_time = difftime(end_time, start_time);

    int minutes = (int)(elapsed_time / 60);
    int seconds = (int)fmod(elapsed_time, 60); //fmod is apart of the math.h library; tutorialspoint.com

    printf("You held your breath for %d minutes and %d seconds. Good job!.\n", minutes, seconds);
}
