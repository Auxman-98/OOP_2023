#ifndef ABSTRACT_FACTORY_WINDOWSFACTORY_H
#define ABSTRACT_FACTORY_WINDOWSFACTORY_H

#include "OSFactory.h"
#include "Form.h"
#include "Label.h"
#include "TextBox.h"
#include "ComboBox.h"
#include "Button.h"

namespace factories {
    class WindowsFactory : public OSFactory
    {
        Form* createForm() override;
        Label* createLabel() override;
        TextBox* createTextBox() override;
        ComboBox* createComboBox() override;
        Button* createButton() override;
    };
}

#endif