#ifndef _GLOBAL_H_
#define _GLOBAL_H_

typedef unsigned int loop_t;

struct node {
    int data;
    struct node* next;
};

typedef struct node node_ptr;

const char CREATE_COMMAND[15];

#endif  //_GLOBAL_H_