#include "chatGui.h"
#include <string>
using namespace std;

// evil evil monkey !

typedef struct {
	UserInterface * ui;
	Fl_Double_Window * win;
} MyUi;

void connectBtn_clicked(Fl_Widget* w, MyUi * mu) {
	mu->ui->chatlogTxt->insert("connect clicked\n");
	if (string(mu->ui->serverTxt->value()) == "") return;

	mu->ui->bodyBrowser->add(mu->ui->serverTxt->value());
	mu->win->redraw();
}

void sendBtn_clicked(Fl_Widget* w, MyUi * mu) {
	mu->ui->chatlogTxt->insert("send clicked\n");
	if (string(mu->ui->msgTxt->value()) == "") return;

	// mu->ui->bodyBrowser
	mu->ui->bodyBrowser->add(mu->ui->msgTxt->value());
	mu->win->redraw();
}

int main(int argc, char **argv) {
	MyUi * mu = new MyUi;
	mu->ui = new UserInterface;
	Fl_Text_Buffer buf;

	Fl::scheme("gtk+");
	mu->win = mu->ui->make_window();
	mu->ui->chatlogTxt->buffer(buf);

	mu->ui->connectBtn->callback((Fl_Callback *)connectBtn_clicked, mu);
	mu->ui->sendBtn->callback((Fl_Callback *)sendBtn_clicked, mu);

	mu->win->show(argc, argv);
	return Fl::run();
}
