#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 

struct day { 
    char *name; 
    char *act; 
    int date; 
}; 

struct day *week; 

void create() { 
    int i; 
    week = (struct day *)malloc(7 * sizeof(struct day)); // Allocate memory for 7 days

    for (i = 0; i < 7; i++) { 
        week[i].name = (char *)malloc(20 * sizeof(char)); // Allocate memory for day name
        week[i].act = (char *)malloc(100 * sizeof(char)); // Allocate memory for activity

        printf("\nEnter name of day %d: ", i + 1); 
        scanf("%s", week[i].name); 
        printf("\nEnter date of day %d: ", i + 1); 
        scanf("%d", &week[i].date); 
        printf("\nEnter activity of day %d: ", i + 1); 
        scanf("%s", week[i].act); 
    } 
} 

void display() { 
    printf("\nDay\tDate\tActivity\n"); 
    for (int i = 0; i < 7; i++) { 
        printf("\n%s\t%d\t%s", week[i].name, week[i].date, week[i].act); 
    } 
} 

void freeMemory() { 
    for (int i = 0; i < 7; i++) { 
        free(week[i].name); // Free memory for day name
        free(week[i].act);  // Free memory for activity
    } 
    free(week); // Free memory for the week array
} 

int main() { 
    printf("Creating the calendar:\n"); 
    create(); 
    printf("\nPrinting the Calendar:\n"); 
    display(); 

    freeMemory(); // Free dynamically allocated memory

    return 0; 
}
