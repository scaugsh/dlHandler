#ifndef _DLHELPER_H
#define _DLHELPER_H
#include <dlfcn.h>
#include <string>
#include <sstream>
class DlHelper {
public:
    static int run(const std::string &libName, const std::string &funcName, std::string &errStr);
};
#endif 