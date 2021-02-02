#include <stdio.h>

#include "Global.h"
#include "Helper.h"

// It allows to capture the number of nodes entered by the user
void simple_data_catcher(int* number_of_nodes) {
	scanf("%d", &(*number_of_nodes));
}

// It Allows to capture the values that will be stored in the linked list
void multiple_data_catcher(int* values, int number_of_nodes) {
    for (loop_t i = 0; i < number_of_nodes; i++) {
        scanf("%d", &values[i]);
    }
}