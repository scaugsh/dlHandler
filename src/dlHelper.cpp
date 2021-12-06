#include "dlHelpler.h"
#include "dlHandlerImpl.h"
int DlHelper::run(const std::string &libName, const std::string &funcName, std::string &errStr) {
    std::ostringstream oss;
    void *libHandler = dlopen(libName.c_str(), RTLD_LAZY | RTLD_GLOBAL);

    const char *dlError = dlerror();

    if (dlError) {
        oss << "dlopen error!" << dlError << std::endl;
        errStr = oss.str();
        return -1;
    }

    auto callBack = (CallBackFunType)dlsym(libHandler, funcName.c_str());
    dlError = dlerror();
    if (dlError) {
        oss << "dlsym error!" << dlError << std::endl;
        errStr = oss.str();
        return -1;
    }
    DlHandlerImpl *handler = new DlHandlerImpl();
    handler->setValue(1);
    // event.setValue(1);
    int ret = callBack(handler);

    dlclose(libHandler);
    return ret;
}