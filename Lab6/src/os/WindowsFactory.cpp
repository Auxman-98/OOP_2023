#include "WindowsFactory.h"
#include "WindowsButton.h"
#include "WindowsComboBox.h"
#include "WindowsForm.h"
#include "WindowsLabel.h"
#include "WindowsTextBox.h"

using namespace factories;

Form* WindowsFactory::createForm() {
	return new WindowsForm;
}

Label* WindowsFactory::createLabel() {
	return new WindowsLabel;
}

TextBox* WindowsFactory::createTextBox() {
	return new WindowsTextBox;
}

ComboBox* WindowsFactory::createComboBox() {
	return new WindowsComboBox;
}

Button* WindowsFactory::createButton() {
	return new WindowsButton;
}