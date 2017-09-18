#include "app.cxx"
int main()
{
	Fl_Window *wn = make_window();
	wn->show(0,NULL);
	return Fl::run();
}
