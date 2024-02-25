#ifndef ABSTRACT_FACTORY_WINDOWSTEXTBOX_H
#define ABSTRACT_FACTORY_WINDOWSTEXTBOX_H

#include "TextBox.h"

namespace factories {
    class WindowsTextBox : public TextBox
    {
        void setPosition() override;
        void getPosition() override;
        void setText() override;
        void getText() override;
        void onValueChanged() override;
    };
}

#endif