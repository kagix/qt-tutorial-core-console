#include "konsole.hpp"

Konsole::Konsole() {
	textConsole = new QTextStream(stdout);
}

Konsole::~Konsole() {
	delete textConsole;
}

Konsole::operator QTextStream&() {
	return *textConsole;
}
