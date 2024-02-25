#ifndef ABSTRACT_FACTORY_MACOSBUTTON_H
#define ABSTRACT_FACTORY_MACOSBUTTON_H

#include "Button.h"

namespace factories {
    class MacOSButton : public Button
    {
        void setPosition() override;
        void getPosition() override;
        void setText() override;
        void getText() override;
        void click() override;
    };
}

#endif