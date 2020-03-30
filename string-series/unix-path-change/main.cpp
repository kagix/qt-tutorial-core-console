#include <QString>
#include <QStringList>
#include <QTextStream>

QString PATH_SEPARATOR = ":";

int main() {
	QTextStream console(stdout);
	QString oldPath = "/bin:/sbin:/usr/bin:/usr/sbin";
	QString myAppPath = "home/bill/app/bin";

	// Buld the string 
	console << endl << "Method #1" << endl;
	QString updatedPath = oldPath + PATH_SEPARATOR + myAppPath;
	console << "old path was '" << oldPath << "'" <<endl;
	console << "new path is now '" << updatedPath << "'" << endl;

	// Strcat like (append)
	console << endl << "Method #2" << endl;
	updatedPath = "";
	updatedPath.append(oldPath).append(PATH_SEPARATOR).append(myAppPath);
	console << "old path was '" << oldPath << "'" <<endl;
	console << "new path is now '" << updatedPath << "'" << endl;

	// From string array
	console << endl << "Method #3" << endl;
	QStringList pathElements;
	pathElements.append(oldPath);
	pathElements.append(myAppPath);
	updatedPath = pathElements.join(PATH_SEPARATOR);
	console << "old path was '" << oldPath << "'" <<endl;
	console << "new path is now '" << updatedPath << "'" << endl;

	return 0;
}