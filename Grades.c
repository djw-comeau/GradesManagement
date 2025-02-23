// Name: David Comeau
// Student ID: W0158668
// Course: PROG2007 Programming in C
// Instructor: Nadia Gouda
// Date: February 22, 2025

#include <stdio.h>

int main()
{
  char name[100];
  int grade1, grade2, grade3;
  int total, studentCount = 0;
  float average, overallAverage = 0.0;
  int enterStudent;

  printf("************************************\n");
  printf("   Student Grades Management System\n");
  printf("   PROG2007 - Programming in C\n");
  printf("   David Comeau\n");
  printf("************************************\n");

  do
  {
    // Well, we need to know the students name to give them a grade.
    printf("\nStudent Name: ");
    scanf(" %[^\n]", name);

    studentCount++; // This is going to increment the student counter.

    // Next, let's give them some grades, while confirming that they're between 0 and 100.
    do
    {
      printf("Enter a grade for Programming in C (0-100): ");
      scanf("%d", &grade1);
      if (grade1 < 0 || grade1 > 100)
        printf("Invalid input! Grade must be between 0 and 100.\n");
    } while (grade1 < 0 || grade1 > 100);

    do
    {
      printf("Enter a grade for Linux (0-100): ");
      scanf("%d", &grade2);
      if (grade2 < 0 || grade2 > 100)
        printf("Invalid input! Grade must be between 0 and 100.\n");
    } while (grade2 < 0 || grade2 > 100);

    do
    {
      printf("Enter a grade for Object Oriented Programming (0-100): ");
      scanf("%d", &grade3);
      if (grade3 < 0 || grade3 > 100)
        printf("Invalid input! Grade must be between 0 and 100.\n");
    } while (grade3 < 0 || grade3 > 100);
    // Of course, the prompt will ask again if an invalid number is entered.

    // We're going to want to know the total, and the average, of all the grades.
    total = grade1 + grade2 + grade3;
    average = total / 3.0;

    // Then, we display those results.
    printf("\nStudent: %s\n", name);
    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    // A nice little easter egg for Morgan if his average is below 50.
    if (strcmp(name, "Morgan") == 0 && average < 50)
    {
      printf("Result: Looks like a skill issue.\n");
    }
    else
    {
      printf("Result: %s\n", (average >= 50) ? "Pass" : "Fail");
    }

    // This updates the overall average.
    overallAverage += average;

    // This asks if you want to do it again for another student.
    printf("\nDo you want to enter details for another student? (Enter 1 for Yes, Enter 2 for No): ");
    scanf("%d", &enterStudent);
  } while (enterStudent == 1);

  // Compute and display overall summary
  if (studentCount > 0)
  {
    overallAverage /= studentCount;
    printf("\nSummary:\n");
    printf("Number of Students Graded: %d\n", studentCount);
    printf("Class Average: %.2f\n", overallAverage);
  }

  printf("\n************************************\n");
  printf("Grade Calculations Complete.\n");

  return 0;
}