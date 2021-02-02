#ifndef _CODES_H_
#define _CODES_H_

enum argument_position {
	BINARY = 0,
	COMMAND
};

enum standard_codes {
	NODES_QUANTITY = 100,
	LIST_OF_NUMBERS,
	DISPLAY_LINKED_LIST
};

enum warning_codes {
	WRONG_NUMBER_OF_ARGS = 200,
	UNKNOWN_COMMAND
};

enum success_codes {
	SUCCESSFUL_OPERATION = 300
};

#endif //_CODES_H_