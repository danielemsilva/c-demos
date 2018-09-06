#include <stdio.h>
#include <string.h>
#define maxSize 50

void addTask(char &titles[maxSize], char &todos[maxSize], int &count) {
    printf("\nOk, type the task title: ");
    scanf("%s", &titles[count]);
    printf("\nType a description for her: ");
    scanf("%s", &todos[count]);
    count++;
}

void listTasks(char titles[maxSize], char todos[maxSize], int count) {
    for (int i = 0; i < maxSize; i++) {
        printf(titles[i]);
        printf(todos[i]);
    }
}

void removeTask(char titles[maxSize], char todos[maxSize], int count) {
    int toRemove = -1;
    printf("\nEnter the task number: ");
    scanf("%d", &toRemove);

    if (toRemove >= 0 && toRemove < maxSize) {
        printf("\nTask to be removed: %s", titles[toRemove]);
        char response[2];
        printf("\nDo you want remove it? [Y/N]");
        scanf("%s", response);

        if (strcmp(response, "Y")) {
            titles[toRemove];
        }
    } else {
        printf("\nOps, this task does not exist");
    }

    printf("\nType a description for her: ");
    
    count++;
}

int main() {
    char username[20], titles[maxSize], todos[maxSize], option['K'];
    int count = 0;

    printf("What's your name? ");
    scanf("%s", username);
    printf("Hello, %s!", username);

    while (strcmp(option, "E") != 0) {
        printf("\nChoose an option:\n");
        printf("[A] Add a task\n");
        printf("[L] List tasks\n");
        printf("[R] Remove a task\n");
        scanf("%s", option);

        if (strcmp(option, "A")) {
            addTask(titles, todos, count);
        }
        
    }

    return 0;
}