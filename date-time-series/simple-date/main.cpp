#include <QTextStream>
#include <QDate>

int main() {
	QTextStream konsole(stdout);
	QDate today = QDate::currentDate();
	konsole << today.toString() << endl;
	konsole << today.toString(Qt::TextDate) << endl;
	konsole << today.toString(Qt::ISODate) << endl;
	konsole << today.toString(Qt::ISODateWithMs) << endl;
	konsole << today.toString(Qt::SystemLocaleShortDate) << endl;
	konsole << today.toString(Qt::SystemLocaleLongDate) << endl;
	konsole << today.toString(Qt::DefaultLocaleShortDate) << endl;
	konsole << today.toString(Qt::DefaultLocaleLongDate) << endl;
	konsole << today.toString(Qt::RFC2822Date) << endl;

	return 0;
}