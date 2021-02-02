#include <stdio.h>

#include "Communicator.h"
#include "Codes.h"
#include "Global.h"

// Allows the user to communicate the result of an event according to the code received
void event_communicator(int code) {
    switch (code) {
        case WRONG_NUMBER_OF_ARGS:
            printf("[Warning Code #WC%d] The number of commands entered is incorrect.\n", WRONG_NUMBER_OF_ARGS);
            break;

        case UNKNOWN_COMMAND:
            printf("[Warning Code #WC%d] The command entered does not exist or is misspelled.\n", UNKNOWN_COMMAND);
            break;

        case SUCCESSFUL_OPERATION:
            printf("[Success Code #WC%d] The operation carried out was successfully completed.\n", SUCCESSFUL_OPERATION);
            break;
    }
}

// Allows printing of data requests for the user
void standard_communicator(int code) {
    switch (code) {
        case NODES_QUANTITY:
            printf("<Creating your linked list>\n");
            printf("---------------------------\n");
            printf("Please enter the number of nodes your linked list will contain:\n");
            break;

        case LIST_OF_NUMBERS:
            printf("\n<Filling your linked list>\n");
            printf("--------------------------\n");
            printf("Please enter the list of values that will be stored in each node of your linked list.\n");
            printf("Note: Remember that each value must be separated by a space. Ex: 12 16 4000 15 18:\n");
            break;

        case DISPLAY_LINKED_LIST:
            printf("\n<Displaying your linked list>\n");
            printf("--------------------------\n");
            printf("According to the data entered, your linked list is:\n");
            break;
    }
}

// Allows the linked list to be printed on the screen based on the data entered by the user
void linked_list_printer(node_ptr* head_node) {
    node_ptr* current_node = head_node;
    printf("\n");
    int node_counter = 1;
    // Step through the linked list and print the information for each node
    while (current_node != NULL) {
        if (current_node->next != NULL) {
            printf("-------\n");
            printf("Node #%d\n", node_counter);
            printf("-------\n");
            printf("Node Address:\t %p\n", current_node);
            printf("Node Value:\t %d\n", current_node->data);
            printf("Link to #%d:\t %p\n", (node_counter + 1), current_node->next);
            printf("-------------------------------\n");
            printf("|\n");
        } else {
            printf("-------\n");
            printf("Node #%d\n", node_counter);
            printf("-------\n");
            printf("Node Address:\t %p\n", current_node);
            printf("Node Value:\t %d\n", current_node->data);
            printf("Linked to #%d:\t %p\n", (node_counter + 1), current_node->next);
            printf("-------------------------------\n");
        }
        node_counter += 1;
        current_node = current_node->next;
    }
    printf("\n");
}