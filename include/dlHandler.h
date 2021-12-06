#ifndef _DLHANDLER_H
#define _DLHANDLER_H

class DlHandler {
protected:
    int m_value;
public:
    DlHandler() {};
    virtual int getValue() const = 0;
    virtual void setValue(int value) = 0;
};

typedef int(* CallBackFunType)(const DlHandler *event);

#endif 