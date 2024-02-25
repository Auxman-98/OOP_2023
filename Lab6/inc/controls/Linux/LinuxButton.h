#ifndef ABSTRACT_FACTORY_LINUXBUTTON_H
#define ABSTRACT_FACTORY_LINUXBUTTON_H

#include "Button.h"

namespace factories {
    class LinuxButton : public Button
    {
        void setPosition() override;
        void getPosition() override;
        void setText() override;
        void getText() override;
        void click() override;
    };
}

#endif