#include "mtg_draft.h"
#include <QtWidgets/QApplication>

#include <iostream>

int main(int argc, char *argv[]) {
	QApplication a(argc, argv);
	MTG_Draft w;
	w.show();
	return a.exec();
}
