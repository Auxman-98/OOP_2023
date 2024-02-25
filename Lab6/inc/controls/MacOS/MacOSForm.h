#ifndef ABSTRACT_FACTORY_MACOSFORM_H
#define ABSTRACT_FACTORY_MACOSFORM_H

#include "Form.h"

namespace factories {
    class MacOSForm : public Form
    {
        void setPosition() override;
        void getPosition() override;
        void addControl() override;
    };
}

#endif