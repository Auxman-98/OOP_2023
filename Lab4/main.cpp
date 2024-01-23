#include <iostream>
#include <string>
#include <vector>
#include "Command.h"
#include "Keyboard.h"

int main()
{
	Command capa("A", "shift+a"); 
	Command capb("B", "shift+b"); 
	Command capc("C", "shift+c"); 
	Command capd("D", "shift+d"); 
	Command cape("E", "shift+e"); 
	Command capf("F", "shift+f"); 
	Command capg("G", "shift+g"); 
	Command caph("H", "shift+h"); 
	Command capi("I", "shift+i"); 
	Command capj("J", "shift+j"); 
	Command capk("K", "shift+k"); 
	Command capl("L", "shift+l"); 
	Command capm("M", "shift+m"); 
	Command capn("N", "shift+n"); 
	Command capo("O", "shift+o"); 
	Command capp("P", "shift+p"); 
	Command capq("Q", "shift+q"); 
	Command capr("R", "shift+r"); 
	Command cap_s("S", "shift+s"); 
	Command capt("T", "shift+t"); 
	Command capu("U", "shift+u");
	Command capv("V", "shift+v"); 
	Command capw("W", "shift+w"); 
	Command capx("X", "shift+x"); 
	Command capy("Y", "shift+y"); 
	Command capz("Z", "shift+z"); 
	Command exmark("!", "shift+1");
	Command at("@", "shift+2");
	Command hash("#", "shift+3");
	Command percent("%", "shift+5");
	Command circ("^", "shift+6");
	Command asterisk("*", "shift+8");
	Command lpar("(", "shift+9");
	Command rpar(")", "shift+0");
	Command dash("_", "shift+-");
	Command plus("+", "shift+=");
	Command colon(":", "shift+;");
	Command intmark("?", "shift+/");
	Command copy("c+c", "ctrl+c");
	Command paste("p-v", "ctrl+v");
	Command cut("c-x", "ctrl+x");

	std::cout << "List of commands: \n";
	std::cout << "Reassign keys - settings\n";
	std::cout << "Continue usage - continue\n";
	std::cout << "Undo the previous action - undo\n";
	std::cout << "Exit - exit\n\n";

	Keyboard virtualKeyboard;
	virtualKeyboard.setAction(capa.getKey(), capa.getVirtualKey());
	virtualKeyboard.setAction(capb.getKey(), capb.getVirtualKey());
	virtualKeyboard.setAction(capc.getKey(), capc.getVirtualKey());
	virtualKeyboard.setAction(capd.getKey(), capd.getVirtualKey());
	virtualKeyboard.setAction(cape.getKey(), cape.getVirtualKey());
	virtualKeyboard.setAction(capf.getKey(), capf.getVirtualKey());
	virtualKeyboard.setAction(capg.getKey(), capg.getVirtualKey());
	virtualKeyboard.setAction(caph.getKey(), caph.getVirtualKey());
	virtualKeyboard.setAction(capi.getKey(), capi.getVirtualKey());
	virtualKeyboard.setAction(capj.getKey(), capj.getVirtualKey());
	virtualKeyboard.setAction(capk.getKey(), capk.getVirtualKey());
	virtualKeyboard.setAction(capl.getKey(), capl.getVirtualKey());
	virtualKeyboard.setAction(capm.getKey(), capm.getVirtualKey());
	virtualKeyboard.setAction(capn.getKey(), capn.getVirtualKey());
	virtualKeyboard.setAction(capo.getKey(), capo.getVirtualKey());
	virtualKeyboard.setAction(capp.getKey(), capp.getVirtualKey());
	virtualKeyboard.setAction(capq.getKey(), capq.getVirtualKey());
	virtualKeyboard.setAction(capr.getKey(), capr.getVirtualKey());
	virtualKeyboard.setAction(cap_s.getKey(), cap_s.getVirtualKey());
	virtualKeyboard.setAction(capt.getKey(), capt.getVirtualKey());
	virtualKeyboard.setAction(capu.getKey(), capu.getVirtualKey());
	virtualKeyboard.setAction(capv.getKey(), capv.getVirtualKey());
	virtualKeyboard.setAction(capw.getKey(), capw.getVirtualKey());
	virtualKeyboard.setAction(capx.getKey(), capx.getVirtualKey());
	virtualKeyboard.setAction(capy.getKey(), capy.getVirtualKey());
	virtualKeyboard.setAction(capz.getKey(), capz.getVirtualKey());
	virtualKeyboard.setAction(exmark.getKey(), exmark.getVirtualKey());
	virtualKeyboard.setAction(at.getKey(), at.getVirtualKey());
	virtualKeyboard.setAction(hash.getKey(), hash.getVirtualKey());
	virtualKeyboard.setAction(percent.getKey(), percent.getVirtualKey());
	virtualKeyboard.setAction(circ.getKey(), circ.getVirtualKey());
	virtualKeyboard.setAction(asterisk.getKey(), asterisk.getVirtualKey());
	virtualKeyboard.setAction(lpar.getKey(), lpar.getVirtualKey());
	virtualKeyboard.setAction(rpar.getKey(), rpar.getVirtualKey());
	virtualKeyboard.setAction(dash.getKey(), dash.getVirtualKey());
	virtualKeyboard.setAction(plus.getKey(), plus.getVirtualKey());
	virtualKeyboard.setAction(colon.getKey(), colon.getVirtualKey());
	virtualKeyboard.setAction(intmark.getKey(), intmark.getVirtualKey());
	virtualKeyboard.setAction(copy.getKey(), copy.getVirtualKey());
	virtualKeyboard.setAction(paste.getKey(), paste.getVirtualKey());
	virtualKeyboard.setAction(cut.getKey(), cut.getVirtualKey());

	std::string key;

	const std::vector<std::string> VIRTUAL_KEYBOARD = {
		"1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "-", "=",
		"tab", "q", "w", "e", "r", "t", "y", "u", "i", "o", "p",
		"a", "s", "d", "f", "g", "h", "j", "k", "l", ";", "'", "\\", "enter",
		"shift", "z", "x", "c", "v", "b", "n", "m", ",", ".", "/",
		"ctrl", "space"
	};

	for (const std::string& key : VIRTUAL_KEYBOARD) {
		if (virtualKeyboard.getVirtualKey(key).empty()) {
			virtualKeyboard.setAction(key, key);
		}
	}

	std::string str = "";
	std::string copyString = "";
	std::vector<std::string> actions;

	std::cout << "\nPress a key: \n";
	while (true) {
		std::cout << "Enter a key or combination: ";
		std::getline(std::cin, key);

		if (key == "continue") {
			break;
		}
		if (key == "exit") {
			return 0;
		}
		if (key == "undo") {
			str = str.substr(0, str.size() - 1);
		}
		else if (key == "undo setings") {
			virtualKeyboard.setAction(actions.back(), actions.back());
			actions.pop_back();
		}
		else if (key == "settings") {
			std::cout << "Reassign keys mode enabled: \n";
			std::cout << "Enter a key or combination: ";
			std::string reassignKey;
			std::getline(std::cin, reassignKey);
			actions.push_back(reassignKey);
			std::cout << "Enter a new key or combination: ";
			std::string virtualKey;
			std::getline(std::cin, virtualKey);
			virtualKeyboard.setAction(reassignKey, virtualKey);
			std::cout << "The key reassigned!\n";
			std::getline(std::cin, key);
			if (key == "continue") {
				continue;
			}
			if (key == "exit") {
				return 0;
			}
			if (key == "undo") {
				virtualKeyboard.undoAction();
				virtualKeyboard.setAction(reassignKey, reassignKey);
			}
		}
		else {
			std::string virtualKey = virtualKeyboard.getVirtualKey(key);
			if (virtualKey.find('+') == std::string::npos) {
				if (virtualKey == "space") {
					str += " ";
				}
				else if (virtualKey == "tab") {
					str += "        ";
				}
				else if (virtualKey == "enter") {
					str += "\n";
				}
				else { str += virtualKey; }
			}
			else if (virtualKey == "ctrl+c") {
				copyString = str;
			}
			else if (virtualKey == "ctrl+x") {
				copyString = str;
				str = "";
			}
			else if (virtualKey.compare(0, 6, "shift+") == 0) {
				str += key;
			}
			else {
				str += copyString;
			}
		}
		std::cout << str << "\n";
	}

	return 0;
}