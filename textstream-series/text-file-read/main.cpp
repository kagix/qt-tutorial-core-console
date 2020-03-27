#include <QTextStream>
#include <QFile>



int main(int argc, char** argv) {
	QTextStream konsole(stdout);
	if ( argc < 2){
		konsole << "Usage:" 
				<< endl
				<< "\t" << argv[0] << "\t" << " <input-file-name>"
				<< endl;
		return 1;
 	}

 	QFile inputFile(argv[1]);
 	if ( !inputFile.open(QFile::ReadOnly | QFile::Text)) {
 		konsole << "Cannot open file " << argv[1] << endl;
 		return 2; 
 	}

 	QTextStream reader(&inputFile);
 	QString textLine;
 	int rows = 0;
 	int characters = 0;

 	while(reader.readLineInto(&textLine)) {
 		rows ++;
 		characters += textLine.length();
 		konsole << rows << ": " << textLine << endl;
 	}

 	inputFile.close();

 	konsole << endl << "File statistics: " << endl;
 	konsole << rows << " rows" << endl;
 	konsole << characters << " characters" << endl;
	return 0;
}