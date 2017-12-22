#include "Stack.h"
#include <iostream>
#include "../require.h"

using namespace std;

void Stack::Link::initialize(void* dat, Link* nxt){
    data = dat;
    next = nxt;
}