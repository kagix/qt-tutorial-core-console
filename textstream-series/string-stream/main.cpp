#include <QTextStream>

int main() {

	QString buffer;

	QTextStream memoryStream(&buffer); // will it work ?
	memoryStream << "The sum of " << 5.2f << " and " << 7 << " is " << (5.2f + 7);
	
	QTextStream konsole(stdout);
	konsole << buffer << endl; // yup, the buffer has been altered

	return 0;
}