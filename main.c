#include <stdlib.h>
#include <string.h>

#include "Codes.h"
#include "Communicator.h"
#include "Global.h"
#include "Manager.h"

int main(int argc, char const* argv[]) {
    // Verify that the user has entered the correct number of commands
	if (argc == 2) {
		// Compare the command entered by the user and the allowed command
        if (!strcmp(argv[COMMAND], CREATE_COMMAND)) {
			// Call the function in charge of executing the actions for the creation of the linked list
            create_manager();
        } else {
            event_communicator(UNKNOWN_COMMAND);
        }
    } else {
        event_communicator(WRONG_NUMBER_OF_ARGS);
    }
}