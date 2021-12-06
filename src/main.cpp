#include <bits/stdc++.h>
#include "dlHelpler.h"
using namespace std;

int main() {
    std::string libName, funcName;
    cin >> libName >> funcName;
    std::string errStr;
    int ret = DlHelper::run(libName, funcName, errStr);
    std::cout << "----------------------" << std::endl;
    std::cout << "lib " << libName << " func " << funcName << " retrun " << ret;
    if (errStr.size()) {
        std::cout << " errStr " << errStr;
    }
    std::cout << std::endl;
    return 0;
}