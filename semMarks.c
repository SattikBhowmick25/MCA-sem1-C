#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 10
#define SEMESTERS 3
#define SUBJECTS 6

// Function to perform bubble sort in descending order
void bubble_sort_desc(int arr[], int n) {
    int i,j;
	for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// (a) Top 4 Subject Marks for Each Student
void top_4_subject_marks(int marks[STUDENTS][SEMESTERS][SUBJECTS]) {
    int student,sem,sub,i;
	for (student = 0; student < STUDENTS; student++) {
        printf("Student %d:\n", student + 1);
        for (sem = 0; sem < SEMESTERS; sem++) {
            int temp[SUBJECTS];
            for (sub = 0; sub < SUBJECTS; sub++) {
                temp[sub] = marks[student][sem][sub];
            }
            bubble_sort_desc(temp, SUBJECTS);
            printf("  Semester %d: Top 4 Marks = ", sem + 1);
            for (i = 0; i < 4; i++) {
                printf("%d ", temp[i]);
            }
            printf("\n");
        }
    }
}

// (b) Top 5 Scorers in Each Subject
void top_5_scorers(int marks[STUDENTS][SEMESTERS][SUBJECTS]) {
    for (int sem = 0; sem < SEMESTERS; sem++) {
        for (int sub = 0; sub < SUBJECTS; sub++) {
            int scores[STUDENTS];
            for (int student = 0; student < STUDENTS; student++) {
                scores[student] = marks[student][sem][sub];
            }
            bubble_sort_desc(scores, STUDENTS);
            printf("Semester %d, Subject %d: Top 5 Scores = ", sem + 1, sub + 1);
            for (int i = 0; i < 5; i++) {
                printf("%d ", scores[i]);
            }
            printf("\n");
        }
    }
}

// (c) Semester-wise Top Scorer List
void semester_wise_top_scorer(int marks[STUDENTS][SEMESTERS][SUBJECTS]) {
    for (int sem = 0; sem < SEMESTERS; sem++) {
        int max_total = 0, top_student = -1;
        for (int student = 0; student < STUDENTS; student++) {
            int total = 0;
            for (int sub = 0; sub < SUBJECTS; sub++) {
                total += marks[student][sem][sub];
            }
            if (total > max_total) {
                max_total = total;
                top_student = student;
            }
        }
        printf("Semester %d: Top Scorer = Student %d with Total Marks = %d\n", sem + 1, top_student + 1, max_total);
    }
}

// Main function
int main() {
    int marks[STUDENTS][SEMESTERS][SUBJECTS];
    // Randomly generate marks (40 to 100)
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < SEMESTERS; j++) {
            for (int k = 0; k < SUBJECTS; k++) {
                marks[i][j][k] = rand() % 61 + 40; // Random marks between 40 and 100
            }
        }
    }

    printf("Top 4 Subject Marks for Each Student:\n");
    top_4_subject_marks(marks);
    printf("\nTop 5 Scorers in Each Subject:\n");
    top_5_scorers(marks);
    printf("\nSemester-wise Top Scorers:\n");
    semester_wise_top_scorer(marks);

    return 0;
}

