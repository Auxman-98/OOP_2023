#include "LinuxFactory.h"
#include "LinuxForm.h"
#include "LinuxLabel.h"
#include "LinuxTextBox.h"
#include "LinuxComboBox.h"
#include "LinuxButton.h"

using namespace factories;

Form* LinuxFactory::createForm() {
	return new LinuxForm;
}

Label* LinuxFactory::createLabel() {
	return new LinuxLabel;
}

TextBox* LinuxFactory::createTextBox() {
	return new LinuxTextBox;
}

ComboBox* LinuxFactory::createComboBox() {
	return new LinuxComboBox;
}

Button* LinuxFactory::createButton() {
	return new LinuxButton;
}