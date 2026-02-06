#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[])
{
    Chunk chunk;

    initChunk(&chunk);

    int constant = addConstant(&chunk, 2.3);
    writeChunk(&chunk, OP_CONSTANT);
    writeChunk(&chunk, constant);

    writeChunk(&chunk, OP_RETURN);
    disassembleChunk(&chunk, "test");
    freeChunk(&chunk);




    Chunk chunk2;

    initChunk(&chunk);

    int constant2 = addConstant(&chunk, 1.4 + 2.1);
    writeChunk(&chunk, OP_CONSTANT);
    writeChunk(&chunk, constant);

    writeChunk(&chunk, OP_RETURN);
    disassembleChunk(&chunk, "test2");
    freeChunk(&chunk);


    return 0;
}
