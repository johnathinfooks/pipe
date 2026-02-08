#include "common.h"
#include "chunk.h"
#include "debug.h"

int main(int argc, const char* argv[])
{
    Chunk chunk;

    initChunk(&chunk);

    writeChunk(&chunk, OP_CONSTANT, 25);
    writeChunk(&chunk, addConstantPool(&chunk, 23), 25);
        writeChunk(&chunk, OP_RETURN, 25);
    disassembleChunk(&chunk, "test");
    freeChunk(&chunk);

    return 0;
}
