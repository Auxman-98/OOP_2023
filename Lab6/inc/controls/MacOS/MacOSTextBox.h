#ifndef ABSTRACT_FACTORY_MACOSTEXTBOX_H
#define ABSTRACT_FACTORY_MACOSTEXTBOX_H

#include "TextBox.h"

namespace factories {
    class MacOSTextBox : public TextBox
    {
        void setPosition() override;
        void getPosition() override;
        void setText() override;
        void getText() override;
        void onValueChanged() override;
    };
}

#endif