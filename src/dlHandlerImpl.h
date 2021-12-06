#ifndef _DLHANDLERIMPL_H
#define _DLHANDLERIMPL_H 
#include "dlHandler.h"
class DlHandlerImpl: public DlHandler {
public:
    DlHandlerImpl();
    int getValue() const;
    void setValue(int value);
};

#endif