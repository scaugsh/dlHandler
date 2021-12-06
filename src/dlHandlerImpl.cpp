#include "dlHandlerImpl.h"

DlHandlerImpl::DlHandlerImpl() {}

void DlHandlerImpl::setValue(int value) {
    m_value = value;
}

int DlHandlerImpl::getValue() const {
    return m_value;
}

