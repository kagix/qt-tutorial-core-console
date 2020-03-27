// This is based on the qt wiki 
// https://wiki.qt.io/Getting_Started_on_the_Commandline

#include <QTextStream>

int main(int argc, char**agv) {
	QTextStream tabula(stdout);
	tabula << "Salve Caesar. Ut vales. Ego valeo." << endl;
	return 0;
}