/*
 Sami Badra
 Assignment 4, CS570
 FILE: pageFunctions.h
 */

#ifndef _pageFunctions_h
#define _pageFunctions_h

#include "structures.h"
#define ADDRESS_LENGTH 32

int initializePageTable(PAGETABLE *pageTable, char *argv[], int firstLevelArg);

void printTableInfo(PAGETABLE *pageTable);

unsigned int calcBitmask(int start, int length);

unsigned int logicalToPage(unsigned int logicalAddress, unsigned int bitmask, unsigned int shift);

void pageInsert(PAGETABLE *pageTable, unsigned int logicalAddress, unsigned int frame);

void pageInsertHelper(LEVEL *level, unsigned int logicalAddress, unsigned int frame);

MAP * pageLookup(PAGETABLE *pageTable, unsigned int logicalAddress);

MAP * pageLookupHelper(LEVEL *level, unsigned int logicalAddress);

LEVEL * createLevel(PAGETABLE *pageTable, LEVEL *level, int depth);

void dumpPageTable(PAGETABLE *pageTable, FILE *fp);

void dumpPageTableHelper(LEVEL *level, FILE *fp);

#endif
