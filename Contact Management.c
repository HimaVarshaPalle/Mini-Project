#include <stdio.h>
#define MAX_CONTACTS 200
struct Contact {
    char name[100], mobile[20];
}
contacts[MAX_CONTACTS];
int contactCount = 0;
int main() {
    int choice;
    do {
        printf("\n1. Add Contact\n2. Display Contacts\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            if (contactCount < MAX_CONTACTS) {
                printf("Enter Name: ");
                scanf(" %[^\n]", contacts[contactCount].name);
                printf("Enter mobile: ");
                scanf(" %s", contacts[contactCount++].mobile);
                printf("Contact added.\n");
            }
                else {
                  printf("Contact list is full.\n");
            }
        } 
          else if (choice == 2) {
            for (int i = 0; i < contactCount; i++)
                printf("%d. %s, %s\n", i + 1, contacts[i].name, contacts[i].mobile);
            if (contactCount == 0) printf("No contacts to display.\n");
        }
    } 
      while (choice != 3);
      return 0;
}
