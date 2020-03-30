#ifndef KONSOLE_HPP
#define KONSOLE_HPP

#include <QTextStream>


class Konsole {
public:
	Konsole();
	~Konsole();
	operator QTextStream&();
private:
	QTextStream* textConsole;
};

#endif 
