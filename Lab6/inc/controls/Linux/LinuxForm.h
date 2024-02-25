#ifndef ABSTRACT_FACTORY_LINUXFORM_H
#define ABSTRACT_FACTORY_LINUXFORM_H

#include "Form.h"

namespace factories {
    class LinuxForm : public Form
    {
        void setPosition() override;
        void getPosition() override;
        void addControl() override;
    };
}

#endif