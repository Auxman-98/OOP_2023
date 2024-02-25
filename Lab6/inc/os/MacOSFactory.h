#ifndef ABSTRACT_FACTORY_MACOSFACTORY_H
#define ABSTRACT_FACTORY_MACODFACTORY_H

#include "OSFactory.h"
#include "Form.h"
#include "Label.h"
#include "TextBox.h"
#include "ComboBox.h"
#include "Button.h"

namespace factories {
    class MacOSFactory : public OSFactory
    {
        Form* createForm() override;
        Label* createLabel() override;
        TextBox* createTextBox() override;
        ComboBox* createComboBox() override;
        Button* createButton() override;
    };
}

#endif