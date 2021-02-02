#include <stdlib.h>

#include "Global.h"

// It allows to build the linked list based on the information provided by the user
node_ptr* linked_list_builder(int* values, int number_of_nodes) {
	// Create the nodes required to form the linked list
    node_ptr* head_node = NULL;
    node_ptr* temp_node = NULL;
    node_ptr* current_node = NULL;

    for (loop_t i = 0; i < number_of_nodes; i++) {
		// Create the memory space to store the temporary node
        temp_node = (node_ptr*)malloc(sizeof(node_ptr));
		// Fill the initial data of the new node
        temp_node->data = values[i];
        temp_node->next = NULL;

		// Determine if the node is the first and only node:
		// If it's the first node created, we assign it the status of "head"
		// If it's not the first node created, we go through the nodes created to insert the new node at the end 
        if (head_node == NULL) {
            head_node = temp_node;
        } else {
            current_node = head_node;
            while (current_node->next != NULL) {
                current_node = current_node->next;
            }
            current_node->next = temp_node;
        }
    }
    return head_node;
}