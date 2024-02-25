#include "MacOSFactory.h"
#include "MacOSForm.h"
#include "MacOSLabel.h"
#include "MacOSTextBox.h"
#include "MacOSComboBox.h"
#include "MacOSButton.h"

using namespace factories;

Form* MacOSFactory::createForm() {
	return new MacOSForm;
}

Label* MacOSFactory::createLabel() {
	return new MacOSLabel;
}

TextBox* MacOSFactory::createTextBox() {
	return new MacOSTextBox;
}

ComboBox* MacOSFactory::createComboBox() {
	return new MacOSComboBox;
}

Button* MacOSFactory::createButton() {
	return new MacOSButton;
}