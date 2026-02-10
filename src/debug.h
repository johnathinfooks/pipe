#ifndef PIPE_DEBUG_H
#define PIPE_DEBUG_H

#include "chunk.h"

/**
 * @breif Takes chunk apart, showing each opcode and their index.
 * @param chunk Chunk to be disassembled.
 * @param name String name of debug instance.
*/
void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif // PIPE_DEBUG_H
