#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    char branch[30];
    int semester;
    float marks;
};

void addStudent();
void viewStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            viewStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            printf("Thank You!\n");
            exit(0);
        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}

void addStudent()
{
    FILE *fp;
    struct Student s;

    fp = fopen("student.dat", "ab");

    printf("\nEnter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Branch: ");
    scanf(" %[^\n]", s.branch);

    printf("Enter Semester: ");
    scanf("%d", &s.semester);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(s), 1, fp);
    fclose(fp);

    printf("Student Added Successfully.\n");
}

void viewStudents()
{
    FILE *fp;
    struct Student s;

    fp = fopen("student.dat", "rb");

    if (fp == NULL)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("\n----- Student Records -----\n");

    while (fread(&s, sizeof(s), 1, fp))
    {
        printf("\nRoll Number : %d", s.roll);
        printf("\nName        : %s", s.name);
        printf("\nBranch      : %s", s.branch);
        printf("\nSemester    : %d", s.semester);
        printf("\nMarks       : %.2f\n", s.marks);
    }

    fclose(fp);
}

void searchStudent()
{
    FILE *fp;
    struct Student s;
    int roll, found = 0;

    fp = fopen("student.dat", "rb");

    if (fp == NULL)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp))
    {
        if (s.roll == roll)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", s.roll);
            printf("Name        : %s\n", s.name);
            printf("Branch      : %s\n", s.branch);
            printf("Semester    : %d\n", s.semester);
            printf("Marks       : %.2f\n", s.marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found.\n");

    fclose(fp);
}

void updateStudent()
{
    FILE *fp;
    struct Student s;
    int roll, found = 0;

    fp = fopen("student.dat", "rb+");

    if (fp == NULL)
    {
        printf("No Records Found.\n");
        return;
    }

    printf("Enter Roll Number to Update: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp))
    {
        if (s.roll == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", s.name);

            printf("Enter New Branch: ");
            scanf(" %[^\n]", s.branch);

            printf("Enter New Semester: ");
            scanf("%d", &s.semester);

            printf("Enter New Marks: ");
            scanf("%f", &s.marks);

            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);

            printf("Record Updated Successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student Not Found.\n");

    fclose(fp);
}

void deleteStudent()
{
    FILE *fp, *temp;
    struct Student s;
    int roll, found = 0;

    fp = fopen("student.dat", "rb");

    if (fp == NULL)
    {
        printf("No Records Found.\n");
        return;
    }

    temp = fopen("temp.dat", "wb");

    printf("Enter Roll Number to Delete: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(s), 1, fp))
    {
        if (s.roll == roll)
        {
            found = 1;
        }
        else
        {
            fwrite(&s, sizeof(s), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    remove("student.dat");
    rename("temp.dat", "student.dat");

    if (found)
        printf("Student Deleted Successfully.\n");
    else
        printf("Student Not Found.\n");
}