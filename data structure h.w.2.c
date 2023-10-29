// 4-//

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int student_number;
    char name[50];
    int age;
    struct Student* next;
};

struct Student* createStudent(int student_number, const char* name, int age) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    newStudent->student_number = student_number;
    strcpy(newStudent->name, name);
    newStudent->age = age;
    newStudent->next = NULL;
    return newStudent;
}

void addStudent(struct Student** head, int student_number, const char* name, int age) {
    struct Student* newStudent = createStudent(student_number, name, age);
    newStudent->next = *head;
    *head = newStudent;
}

void printStudents(struct Student* head) {
    struct Student* current = head;
    int student_count = 0;

    while (current != NULL) {
        student_count++;
        printf("%d- %s %d %d\n", student_count, current->name, current->age, current->student_number);
        current = current->next;
    }

    printf("Total students: %d\n", student_count);
}

int main() {
    struct Student* studentList = NULL;

    addStudent(&studentList, 201, "Saliha", 27);
    addStudent(&studentList, 203, "Ece", 19);

    printStudents(studentList);

    while (studentList != NULL) {
        struct Student* temp = studentList;
        studentList = studentList->next;
        free(temp);
    }

    return 0;
}
