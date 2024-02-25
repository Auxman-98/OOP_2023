#ifndef ABSTRACT_FACTORY_OSFACTORY_H
#define ABSTRACT_FACTORY_OSFACTORY_H

#include "Form.h"
#include "Label.h"
#include "TextBox.h"
#include "ComboBox.h"
#include "Button.h"

namespace factories {
	class OSFactory
	{
	public:
		virtual Form* createForm() = 0;

		virtual Label* createLabel() = 0;

		virtual TextBox* createTextBox() = 0;

		virtual ComboBox* createComboBox() = 0;

		virtual Button* createButton() = 0;

		virtual ~OSFactory() = default;
	};
}

#endif