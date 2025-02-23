Assignment 1: Developing a Student Grades Management System (10%)
Objective:

Create a C program that simulates a basic Student Grades Management System. This system will allow the user to:

    Input and validate data (names, grades).
    Perform arithmetic operations (average, total).
    Make decisions based on conditions (e.g., pass/fail).
    Implement loops to process multiple students.
    Use different data types (integers, floats, chars) effectively.

This assignment will test your understanding of the concepts introduced in Weeks 1 to 5 of the course.

Additionally, you will be required to record a short video explaining your program, showing the code, and demonstrating its functionality. You will also need to upload your code to GitHub and share the link.
Problem Description:

You are tasked to build a simple command-line program for a school to manage student grades. The program should:

    Prompt the user to input student details (name, grades for 3 subjects).
    Validate the input, ensuring grades are between 0 and 100.
    Calculate and display:
        Total marks for each student.
        Average marks.
        Whether the student has passed or failed (average ≥ 50 is a pass).
    Allow the user to process grades for multiple students until they choose to stop.
    Display a summary at the end with the number of students processed and their average grades.

Requirements:

    Input & Output
        Use scanf and printf for input/output operations.
        Display the data in a user-friendly format.

    Conditions (if, if-else)
        Use conditions to determine if the input grades are valid (0-100).
        Determine whether the student passes or fails.

    Loops (for, while)
        Use a loop to process data for multiple students until the user chooses to stop.

    Data Types
        Use appropriate types:
            char for the student’s name.
            float for average grades.
            int for individual grades and total marks.

    Video Demonstration
        Record a short video (2-3 minutes) explaining your program:
            Introduce the idea behind the program.
            Show your code and explain its key components.
            Demonstrate the program in action by running it with sample inputs.

    GitHub Submission
        Create a GitHub repository for your project.
        Upload your full code to the repository.
        Share the GitHub link as part of your submission.

Sample Output:
Input and Output for One Student:

Enter student name: John  
Enter grade for Subject 1: 85  
Enter grade for Subject 2: 90  
Enter grade for Subject 3: 78  

Results for John:  
Total Marks: 253  
Average Marks: 84.33  
Status: Pass  

Option to Process Another Student:

Do you want to enter details for another student? (1 for Yes, 0 for No): 1  

Final Summary:

Number of students processed: 3  
Class Average: 76.5  

Invalid Input:

Enter grade for Subject 2: 110  
Invalid grade! Please enter a value between 0 and 100.  

Evaluation Criteria:
Criteria 	Marks
Input Validation 	2
Use of Conditions (if, if-else) 	2
Use of Loops 	2
Correct Calculations (total, avg) 	2
Video Explanation 	1
GitHub Submission 	1
Submission Instructions:

    Write your program in a .c file (e.g., student_grades.c).
    Include comments explaining your code.
    Record a short video:
        Introduce your program’s idea.
        Show your code and explain key sections.
        Demonstrate the program running with sample inputs.
    Upload your program to GitHub and share the repository link.
    Submit:
        The GitHub repository link.
        The video file or a link to it (e.g., YouTube, Google Drive).

Hints:

    Use while to allow processing multiple students.
    Use if-else to validate grades and determine pass/fail status.
    Use float for averages to ensure precision.
    Test your program thoroughly with different inputs (valid and invalid).
