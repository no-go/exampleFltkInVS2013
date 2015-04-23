// generated by Fast Light User Interface Designer (fluid) version 1.0303

#include "./src/chatGui.h"

Fl_Double_Window* UserInterface::make_window() {
  Fl_Double_Window* w;
  { Fl_Double_Window* o = new Fl_Double_Window(625, 410, "VSY Chat GUI");
    w = o;
    o->user_data((void*)(this));
    { bodyBrowser = new Fl_Check_Browser(475, 65, 140, 330, "Buddies");
      bodyBrowser->align(Fl_Align(FL_ALIGN_TOP_LEFT));
    } // Fl_Check_Browser* bodyBrowser
    { chatlogTxt = new Fl_Text_Display(25, 65, 435, 290);
    } // Fl_Text_Display* chatlogTxt
    { serverTxt = new Fl_Input(115, 15, 175, 25, "Default Server");
    } // Fl_Input* serverTxt
    { portTxt = new Fl_Input(300, 15, 70, 25, ":");
    } // Fl_Input* portTxt
    { connectBtn = new Fl_Button(380, 15, 80, 25, "connect");
    } // Fl_Button* connectBtn
    { msgTxt = new Fl_Input(85, 365, 285, 30, "Message");
    } // Fl_Input* msgTxt
    { sendBtn = new Fl_Button(385, 365, 75, 30, "send");
    } // Fl_Button* sendBtn
    o->size_range(635, 410, 635, 410);
    o->end();
  } // Fl_Double_Window* o
  return w;
}
