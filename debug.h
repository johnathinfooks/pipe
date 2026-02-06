#ifndef PIPE_DEBUG_H
#define PIPE_DEBUG_H

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif // PIPE_DEBUG_H
