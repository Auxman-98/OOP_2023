#include "CopyCommand.h"
#include "PasteCommand.h"
#include "CutCommand.h"
#include "Keyboard.h"

using namespace awhalen;

int main()
{
	setlocale(LC_ALL, "Rus");
    Keyboard keyboard;

	keyboard.press("a");
	keyboard.press("b");
	keyboard.press("c");
	keyboard.undo();
	keyboard.undo();
	keyboard.undo();
	keyboard.press("d");
	keyboard.press("Ctrl+X");
	keyboard.press("e");
	keyboard.press("Ctrl+V");
	keyboard.press("-");
	keyboard.press("-");
	keyboard.reassignKey("k", new CopyCommand());
	keyboard.press("k");
	keyboard.press("Ctrl+V");

	return 0;
}