#ifndef ABSTRACT_FACTORY_OS_H
#define ABSTRACT_FACTORY_OS_H

#include "Form.h"
#include "Label.h"
#include "TextBox.h"
#include "ComboBox.h"
#include "Button.h"

#include <vector>

namespace factories {
	class OS
	{
	public:
		~OS();

		std::vector<Form*> vf;
		std::vector<Label*> vl;
		std::vector<TextBox*> vtb;
		std::vector<ComboBox*> vcb;
		std::vector<Button*> vb;
	};
}

#endif