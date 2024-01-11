#include <stdio.h>
#include <time.h>

 int array[20] = {2, 3, 4, 5, 6, 7, 12, 23, 32, 34, 45, 56, 59, 65, 67, 76, 78, 87, 88, 94};
int number;

void binary_research();

int main(void){

    int choice; 
    clock_t start, end;
    double cpu_time_used;

    do {
        printf("1-Binary Research\n");
        printf("0- Exit\n");
        printf("Enter an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("this is the array give a number and it's will give you his index in the array\n");
                printf("the array: {2, 3, 4, 5, 6, 7, 12, 23, 32, 34, 45, 56, 59, 65, 67, 76, 78, 87, 88, 94}\n");
                printf("Enter the number: ");
                scanf("%d", &number);
                start = clock(); // Enregistrez le temps de début
                // Appeler la fonction que vous voulez chronométrer
                binary_research();
                end = clock(); // Enregistrez le temps de fin
                cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
                printf("Time taken: %f seconds\n", cpu_time_used);
                break;

            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid option. Please enter a valid option.\n");
        }

        if (choice != 0) {
            printf("\nPress Enter to continue...");
            getchar(); // Consume the newline character
            getchar(); // Wait for Enter key
            printf("\033[H\033[J"); // Clear the terminal
        }

    } while (choice != 0);

    return 0;
    
}


void binary_research() {
int len = sizeof(array) / sizeof(array[0]);
int mid = len / 2;
int left = 0;
int right = len - 1; 

while (left <= right) { 
    if (array[mid] == number) {
        printf("%d found at index %d\n", number, mid);
        break;
    } else if (array[mid] < number) {
        left = mid + 1;
        printf("Searching in the right half\n");
    } else if (array[mid] > number) {
        right = mid - 1;
        printf("Searching in the left half\n");
    }

    mid = (left + right) / 2; 
}



    
}


    
