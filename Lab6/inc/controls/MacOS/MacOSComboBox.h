#ifndef ABSTRACT_FACTORY_MACOSCOMBOBOX_H
#define ABSTRACT_FACTORY_MACOSCOMBOBOX_H

#include "ComboBox.h"

namespace factories {
    class MacOSComboBox : public ComboBox
    {
        void setPosition() override;
        void getPosition() override;
        void getSelectedIndex() override;
        void setSelectedIndex() override;
        void setItems() override;
        void getItems() override;
    };
}

#endif