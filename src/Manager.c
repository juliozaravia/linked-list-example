#include <stdlib.h>

#include "Builder.h"
#include "Codes.h"
#include "Communicator.h"
#include "Global.h"
#include "Helper.h"
#include "Manager.h"

void create_manager() {
    // Ask the user for the number of nodes in the linked list
    // Capture the number of nodes entered by the user
    int number_of_nodes = 0;
    node_ptr* head_node = NULL;
    standard_communicator(NODES_QUANTITY);
    simple_data_catcher(&number_of_nodes);
    // For this example, the linked list will store numeric values (specifically integers)
    // Capture the integers entered by the user
    int values[number_of_nodes];
    standard_communicator(LIST_OF_NUMBERS);
    multiple_data_catcher(values, number_of_nodes);
    // Create the linked list using the data entered by the user
    // Show linked list on screen
    // Communicate to the user the successful completion of operations
    head_node = linked_list_builder(values, number_of_nodes);
    standard_communicator(DISPLAY_LINKED_LIST);
    linked_list_printer(head_node);
    event_communicator(SUCCESSFUL_OPERATION);
}