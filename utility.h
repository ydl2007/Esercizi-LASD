
#ifndef UTILITY_H
#define UTILITY_H

/* ************************************************************************** */

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/* ************************************************************************** */

typedef unsigned int uint;

/* ************************************************************************** */

typedef void (*MapFun)(void *, void *);
typedef void (*FoldFun)(void *, void *, void *);

/* ************************************************************************** */

void mapPosZerNeg(void * elm, void * par);

void foldParity(void * elm, void * val, void * par);

/* ************************************************************************** */

int rndNum(int a, int b);

/* ************************************************************************** */

void getStr(char * str, uint len);

/* ************************************************************************** */

#endif
