#include <stdio.h>

int main() {
    int n, i;
    int marks1, marks2, marks3;
    int average;
    char grade;
    
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nEnter marks for student %d:\n", i);
        
        scanf("%d", &marks1);
        scanf("%d", &marks2);
        scanf("%d", &marks3);

        average = (marks1 + marks2 + marks3) / 3;

        switch (average / 10) {
            case 10:
            case 9:
                grade = 'A';
                break;
            case 8:
                grade = 'B';
                break;
            case 7:
                grade = 'C';
                break;
            case 6:
                grade = 'D';
                break;
            default:
                grade = 'F';
        }

        printf("Average = %d\n", average);
        printf("Grade = %c\n", grade);
        printf("Result = %s\n",
               (average >= 60 && marks1 >= 40 && marks2 >= 40 && marks3 >= 40)
               ? "Pass" : "Fail");
    }

    return 0;
}
