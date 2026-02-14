#include "common.h"
#include "chunk.h"
#include "debug.h"
#include "value.h"
#include "vm.h"

int main(int argc, const char* argv[])
{
    Chunk chunk;
    initChunk(&chunk);


    initVM();

    int lineNum = 12;
    int x = addConstantPool(&chunk, 256.25);
    int y = addConstantPool(&chunk, 34.2);
    writeChunk(&chunk, OP_CONSTANT, lineNum);
    writeChunk(&chunk, x, lineNum);
    writeChunk(&chunk, OP_CONSTANT, lineNum);
    writeChunk(&chunk, y, lineNum);
    writeChunk(&chunk, OP_NEGATE, lineNum);
    writeChunk(&chunk, OP_RETURN, lineNum);



    interpret(&chunk);



    freeVM();


    freeChunk(&chunk);


    return 0;
}
