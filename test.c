#include <stdio.h>
// funtion prototypes
void printWelcomeMessage();
void calculateAverage();

// global variables
int subjectGrades[5];
int numOfSubjects;

int main(){
    printWelcomeMessage();
    printf("enter the number of subjects");
    scanf("%d", &numOfSubjects);


    // input subjects grade
    for (int i = 0; i < numOfSubjects; i++) {
        printf("enter grade for subjects %d: ", i + 1);
        scanf("%d", &subjectGrades[i]);
    } 
    calculateAverage();
    return 0;
}

void printWelcomeMessage(){
    printf("welcome to the grade calculator!`\n");
}
void calculateAverage() {
    int total = 0;


    // calculate total marks
for(int i= 0; i < numOfSubjects; i++) {
    total += subjectGrades[i];

}
average = (float)total / numOfSubjects;
printf("average grade: %.2f\n", average);
}