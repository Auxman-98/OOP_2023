#ifndef ABSTRACT_FACTORY_WINDOWSLABEL_H
#define ABSTRACT_FACTORY_WINDOWSLABEL_H

#include "Label.h"

namespace factories {
    class WindowsLabel : public Label
    {
        void setPosition() override;
        void getPosition() override;
        void setText() override;
        void getText() override;
    };
}

#endif