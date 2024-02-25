#ifndef ABSTRACT_FACTORY_LINUXTEXTBOX_H
#define ABSTRACT_FACTORY_LINUXTEXTBOX_H

#include "TextBox.h"

namespace factories {
    class LinuxTextBox : public TextBox
    {
        void setPosition() override;
        void getPosition() override;
        void setText() override;
        void getText() override;
        void onValueChanged() override;
    };
}

#endif