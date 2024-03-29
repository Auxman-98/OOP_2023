#ifndef ABSTRACT_FACTORY_LABEL_H
#define ABSTRACT_FACTORY_LABEL_H

#include "Control.h"

namespace factories {
	class Label : public Control
	{
	public:
		virtual void setText() = 0;

		virtual void getText() = 0;

		virtual ~Label() = default;
	};
}

#endif