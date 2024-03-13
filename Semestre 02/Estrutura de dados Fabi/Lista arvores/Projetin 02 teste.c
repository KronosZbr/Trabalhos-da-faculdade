#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Event {
    int month;
    int day;
    char description[100];
    struct Event *left;
    struct Event *right;
};

typedef struct Event Event;

Event* createEvent(int month, int day, char description[]) {
    Event* newEvent = (Event*)malloc(sizeof(Event));
    newEvent->month = month;
    newEvent->day = day;
    strcpy(newEvent->description, description);
    newEvent->left = NULL;
    newEvent->right = NULL;
    return newEvent;
}

int isDateValid(int month, int day) {
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        return 0;
    }
    return 1;
}

int hasEvent(Event* root, int month, int day) {
    if (root == NULL) {
        return 0;
    }
    if (month == root->month && day == root->day) {
        return 1;
    }
    if (month < root->month || (month == root->month && day < root->day)) {
        return hasEvent(root->left, month, day);
    }
    return hasEvent(root->right, month, day);
}

Event* insertEvent(Event* root, int month, int day, char description[]) {
    if (!isDateValid(month, day)) {
        printf("Data inserida invalida. Tente novamente.\n");
        return root;
    }

    if (hasEvent(root, month, day)) {
        printf("Ja existe um evento para esta data. Nao e possivel inserir outro evento no mesmo dia.\n");
        return root;
    }

    if (root == NULL) {
        return createEvent(month, day, description);
    }

    if (month < root->month || (month == root->month && day < root->day)) {
        root->left = insertEvent(root->left, month, day, description);
    } else {
        root->right = insertEvent(root->right, month, day, description);
    }

    return root;
}

Event* validEvent(Event* root, int month, int day, char description[]) {
    if (!isDateValid(month, day)) {
        printf("Data inserida invalida. Tente novamente.\n");
        return root;
    }

    if (hasEvent(root, month, day)) {
    
        return root;
    }

    if (root == NULL) {
        return createEvent(month, day, description);
    }

    if (month < root->month || (month == root->month && day < root->day)) {
        root->left = insertEvent(root->left, month, day, description);
    } else {
        root->right = insertEvent(root->right, month, day, description);
    }

    return root;
}

Event* searchEvent(Event* root, int month, int day) {
    if (root == NULL || (month == root->month && day == root->day)) {
        return root;
    }

    if (month < root->month || (month == root->month && day < root->day)) {
        return searchEvent(root->left, month, day);
    }

    return searchEvent(root->right, month, day);
}

void updateEvent(Event* root, int month, int day, char new_description[]) {
    Event* event = searchEvent(root, month, day);
    if (event != NULL) {
        if (strlen(new_description) > 0) {
            strcpy(event->description, new_description);
            printf("Evento editado com sucesso.\n");
        } else {
            printf("A descricao nao pode ser nula.\n");
        }
    } else {
        printf("Evento nao encontrado.\n");
    }
}

Event* deleteEvent(Event* root, int month, int day) {
    if (root == NULL) {
        return root;
    }

    if (month < root->month || (month == root->month && day < root->day)) {
        root->left = deleteEvent(root->left, month, day);
    } else if (month > root->month || (month == root->month && day > root->day)) {
        root->right = deleteEvent(root->right, month, day);
    } else {
        if (root->left == NULL) {
            Event* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Event* temp = root->left;
            free(root);
            return temp;
        }

        Event* minRight = root->right;
        while (minRight->left != NULL) {
            minRight = minRight->left;
        }
        root->month = minRight->month;
        root->day = minRight->day;
        strcpy(root->description, minRight->description);
        root->right = deleteEvent(root->right, minRight->month, minRight->day);
    }
    return root;
}

void inOrderTraversal(Event* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("Dia: %02d, Mes: %02d, Descricao: %s\n", root->day, root->month, root->description);
        inOrderTraversal(root->right);
    }
}

int countEvents(Event* root) {
    if (root == NULL) {
        return 0;
    }

    return 1 + countEvents(root->left) + countEvents(root->right);
}

Event* balanceTree(Event* root, Event** events, int start, int end) {
    if (start <= end) {
        int mid = (start + end) / 2;
        root = validEvent(root, events[mid]->month, events[mid]->day, events[mid]->description);
        root = balanceTree(root, events, start, mid - 1);
        root = balanceTree(root, events, mid + 1, end);
    }
    return root;
}

int main() {
    Event* root = NULL;
    Event* events[100];
    int choice, month, day;
    char description[100];
    int eventCount = 0;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Inserir evento\n");
        printf("2. Editar evento\n");
        printf("3. Excluir evento\n");
        printf("4. Listar eventos\n");
        printf("5. Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Informe o dia (1-31): ");
                scanf("%d", &day);
                printf("Informe o mes (1-12): ");
                scanf("%d", &month);
                if (!isDateValid(month, day)) {
                    printf("Data inserida invalida. Tente novamente.\n");
                    break;
                }
                if (hasEvent(root, month, day)) {
                    printf("Ja existe um evento para esta data. Nao e possivel inserir outro evento no mesmo dia.\n");
                    break;
                }
                printf("Informe a descricao: ");
                scanf(" %[^\n]", description);
                root = insertEvent(root, month, day, description);
                events[eventCount] = root;
                eventCount++;
                if (eventCount == 5) {
                    root = balanceTree(root, events, 0, eventCount - 1);
                    eventCount = 0;
                }
                printf("Evento inserido com sucesso.\n");
                break;
            case 2:
                printf("Informe o dia (1-31) do evento a ser editado: ");
                scanf("%d", &day);
                printf("Informe o mes (1-12) do evento a ser editado: ");
                scanf("%d", &month);
                printf("Informe a nova descricao: ");
                scanf(" %[^\n]", description);
                updateEvent(root, month, day, description);
                break;
            case 3:
                printf("Informe o dia (1-31) do evento a ser excluido: ");
                scanf("%d", &day);
                printf("Informe o mes (1-12) do evento a ser excluido: ");
                scanf("%d", &month);
                Event* eventToDelete = searchEvent(root, month, day);
                if (eventToDelete != NULL) {
                    printf("Tem certeza que deseja excluir o evento do dia %02d, mes %02d, descricao: %s (sim/nao): ", eventToDelete->day, eventToDelete->month, eventToDelete->description);
                    char confirm[10];
                    scanf(" %[^\n]", confirm);
                    if (strcmp(confirm, "sim") == 0) {
                        root = deleteEvent(root, month, day);
                        printf("Evento excluido com sucesso.\n");
                    } else {
                        printf("Exclusao cancelada.\n");
                    }
                } else {
                    printf("Evento nao encontrado.\n");
                }
                break;
            case 4:
                printf("\nEventos em ordem:\n");
                inOrderTraversal(root);
                break;
            case 5:
                // Sair do programa
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}
