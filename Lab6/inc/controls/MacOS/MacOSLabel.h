#ifndef ABSTRACT_FACTORY_MACOSLABEL_H
#define ABSTRACT_FACTORY_MACOSLABEL_H

#include "Label.h"

namespace factories {
    class MacOSLabel : public Label
    {
        void setPosition() override;
        void getPosition() override;
        void setText() override;
        void getText() override;
    };
}

#endif