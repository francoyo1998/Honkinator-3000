// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "app.h"

Fl_Input *MIDText=(Fl_Input *)0;

static void cb_Choose(Fl_Button*, void*) {
  getfile(MIDText,(char*)".mid",0);
}

Fl_Input *WAVText=(Fl_Input *)0;

static void cb_Choose1(Fl_Button*, void*) {
  getfile(WAVText,(char*)".wav",2);
}

static void cb_Honkize(Fl_Button*, void*) {
  honk(MIDText->value(),WAVText->value());
}

Fl_Double_Window* make_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(285, 220, "Honkinator 3000");
    w = o; if (w) {/* empty */}
    { Fl_Group* o = new Fl_Group(1, 18, 282, 35);
      o->box(FL_DOWN_FRAME);
      { MIDText = new Fl_Input(97, 23, 104, 25, "MIDI input:");
      } // Fl_Input* MIDText
      { Fl_Button* o = new Fl_Button(206, 23, 75, 25, "Choose...");
        o->callback((Fl_Callback*)cb_Choose);
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(1, 60, 282, 35);
      o->box(FL_DOWN_FRAME);
      { WAVText = new Fl_Input(97, 65, 104, 25, "WAV output:");
      } // Fl_Input* WAVText
      { Fl_Button* o = new Fl_Button(206, 66, 75, 24, "Choose...");
        o->callback((Fl_Callback*)cb_Choose1);
      } // Fl_Button* o
      o->end();
    } // Fl_Group* o
    { Fl_Button* o = new Fl_Button(55, 140, 180, 55, "Honkize!");
      o->box(FL_ROUND_UP_BOX);
      o->color((Fl_Color)176);
      o->labelfont(11);
      o->labelsize(30);
      o->labelcolor(FL_RED);
      o->callback((Fl_Callback*)cb_Honkize);
    } // Fl_Button* o
    o->end();
  } // Fl_Double_Window* o
  return w;
}