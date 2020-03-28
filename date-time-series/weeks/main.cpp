#include <QTextStream>
#include <QDate>

int main() {
	QTextStream konsole(stdout);
	QDate today = QDate::currentDate();
	konsole << "This is week no. " << today.weekNumber() << " of year " << today.year() << endl;
	konsole << "It is the " << today.dayOfWeek() << " day of the week" << endl;
	konsole << "This year is" 
			<< (QDate::isLeapYear(today.year())  ? "" : " not")
			<< " a leap year " << endl;
	return 0;
}