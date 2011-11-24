#ifndef SEARCH_H
#define SEARCH_H

#include "base.h"
#include "position.h"
#include "genmoves.h"
#include "evaluate.h"
#include "hash.h"

#define INFINITE 20000
#define OVER_VALUE 19990

void think_depth(int depth);

#endif
