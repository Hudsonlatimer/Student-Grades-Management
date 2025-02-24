#include <stdio.h>

int main() {
    char name[50];
    int grade1, grade2, grade3, total, studentCount = 0;
    float average, classTotal = 0;
    int choice = 1;

    while (choice == 1) {

        printf("Enter student name: ");
        scanf(" %49[^\n]", name); 


        printf("Enter grade for Subject 1: ");
        scanf("%d", &grade1);
        while (grade1 < 0 || grade1 > 100) {
            printf("Invalid grade! Please enter a value between 0 and 100: ");
            scanf("%d", &grade1);
        }

        printf("Enter grade for Subject 2: ");
        scanf("%d", &grade2);
        while (grade2 < 0 || grade2 > 100) {
            printf("Invalid grade! Please enter a value between 0 and 100: ");
            scanf("%d", &grade2);
        }

        printf("Enter grade for Subject 3: ");
        scanf("%d", &grade3);
        while (grade3 < 0 || grade3 > 100) {
            printf("Invalid grade! Please enter a value between 0 and 100: ");
            scanf("%d", &grade3);
        }

  
        total = grade1 + grade2 + grade3;
        average = total / 3.0;

   
        printf("\nResults for %s:\n", name);
        printf("Total Marks: %d\n", total);
        printf("Average Marks: %.2f\n", average);
        
  
        if (average >= 50) {
            printf("Status: Pass\n");
        } else {
            printf("Status: Fail\n");
        }
   
        studentCount++;
        classTotal += average;

     
        printf("\nDo you want to enter details for another student? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);
    }

 
    if (studentCount > 0) {
        printf("\nFinal Summary:\n");
        printf("Number of students processed: %d\n", studentCount);
        printf("Class Average: %.2f\n", classTotal / studentCount);
    }

    return 0;
}
