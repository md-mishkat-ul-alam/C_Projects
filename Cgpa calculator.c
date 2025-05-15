#include <stdio.h>

int main() {
    int n, i;
    float credit, gradePoint, totalCredits = 0.0, weightedSum = 0.0;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("\nSubject %d:\n", i);

        printf("  Enter credit hours: ");
        scanf("%f", &credit);

        printf("  Enter grade point (0.0 - 4.0): ");
        scanf("%f", &gradePoint);

        if(gradePoint < 0.0 || gradePoint > 4.0) {
            printf("  Invalid grade point! Please enter a value between 0.0 and 4.0\n");
            i--; // retry same subject
            continue;
        }

        weightedSum += credit * gradePoint;
        totalCredits += credit;
    }

    if(totalCredits == 0) {
        printf("\nError: Total credits cannot be zero.\n");
    } else {
        float cgpa = weightedSum / totalCredits;
        printf("\nYour CGPA is: %.2f (out of 4.0)\n", cgpa);
    }

    return 0;
}
