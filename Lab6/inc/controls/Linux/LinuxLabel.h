#ifndef ABSTRACT_FACTORY_LINUXLABEL_H
#define ABSTRACT_FACTORY_LINUXLABEL_H

#include "Label.h"

namespace factories {
    class LinuxLabel : public Label
    {
        void setPosition() override;
        void getPosition() override;
        void setText() override;
        void getText() override;
    };
}

#endif