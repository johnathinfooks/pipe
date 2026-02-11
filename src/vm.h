#ifndef PIPE_VM_H
#define PIPE_VM_H

#include "chunk.h"
#include "common.h"
#include "value.h"

#define STACK_MAX 256

typedef struct {
    Chunk* chunk;
    uint8_t* ip;
    Value stack[STACK_MAX];
    Value* stackTop;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

/**
 * @breif Initiate virtual machine.
 */
void initVM();
/**
 * @breif Close virtual machine.
 */
void freeVM();

/**
 * @breif Interprets chunk through virutal machine.
 * @param chunk Chunk to be interpreted.
*/
InterpretResult interpret(Chunk* chunk);

void push(Value value);
Value pop();

#endif // PIPE_VM_H
