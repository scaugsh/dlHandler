#include "dlHandlerExample.h"
#include <bits/stdc++.h>
using namespace std;
int test1(const DlHandler *handler) {
    if (handler) {
        std::cout << handler->getValue() << std::endl;
    }
    return 0;
}