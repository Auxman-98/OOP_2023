#ifndef TRIADECONTROLS_WINDOWSFORM_H
#define TRIADECONTROLS_WINDOWSFORM_H


#include "Form.h"

namespace factories {
	class WindowsForm : public Form
	{
		void setPosition() override;
		void getPosition() override;
		void addControl() override;
	};
}

#endif