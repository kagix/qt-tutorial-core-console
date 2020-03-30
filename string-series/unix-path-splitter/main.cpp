#include <QTextStream>
#include <QString>
#include <QStringList>

QString PATH_SEPARATOR = ":";

int main() {
	QTextStream console(stdout);
	QString unixPath = "/bin:/sbin:/usr/bin:/usr/sbin:/usr/local/bin";
	console << "Original path value: " << unixPath << endl;
	QStringList pathElements = unixPath.split(PATH_SEPARATOR);
	for (QString token : pathElements) {
		console << token << endl;
	}
	return 0;
}