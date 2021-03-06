#include "curves/gui_fast_shale_fitter.hh"
/*<license>
 -------------------------------------------------------------------------------
  Copyright (c) 2007 ConocoPhillips Company
 
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
 
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
 
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
 -------------------------------------------------------------------------------
 </license>*/
#include "curves/gui_power_law_fitter.hh"
#include "sl/sl_scale_text_arrow.hh"
#include "sl/psuedo_widget.hh"
#include <Xm/Label.h>
#include <math.h>
#include <float.h>

GuiFastShaleFitter::GuiFastShaleFitter (Widget parent, char *name,
  HelpCtx hctx, const char *title) :
  GuiPowerLawFitter (parent, name, hctx, title, CV::FAST_SHALE)
{
}

GuiFastShaleFitter::GuiFastShaleFitter (SLDelay *container, char *name,
  HelpCtx hctx, const char *title) :
  GuiPowerLawFitter (container, name, hctx, title, CV::FAST_SHALE)
{
}

Widget GuiFastShaleFitter::coordinateDefinitionLine ()
{
  Widget curveName, Yequals, Yminus, semiColon, Xequals, Xminus;

  char *str = new char[strlen(CV::getCurveName(_type))+3];
  strcpy (str, CV::getCurveName(_type));
  strcat (str, ": ");

  XmString label_string = XmStringCreateSimple (str);
  curveName = XtVaCreateManagedWidget ("curveName",
                         xmLabelWidgetClass,  topWidget(),
                         XmNborderWidth,      0,
			 XmNlabelString,      label_string,
                         NULL);
  XmStringFree (label_string);
  delete [] str;

  Yequals = XtVaCreateManagedWidget ("Yequals",
                         xmLabelWidgetClass,  topWidget(),
                         XmNborderWidth,      0,
                         NULL);

  Yminus = XtVaCreateManagedWidget ("Yminus",
                         xmLabelWidgetClass,  topWidget(),
                         XmNborderWidth,      0,
                         NULL);

  semiColon = XtVaCreateManagedWidget ("semiColon",
                         xmLabelWidgetClass,  topWidget(),
                         XmNborderWidth,      0,
                         NULL);

  Xequals = XtVaCreateManagedWidget ("Xequals",
                         xmLabelWidgetClass,  topWidget(),
                         XmNborderWidth,      0,
                         NULL);

  Xminus = XtVaCreateManagedWidget ("Xminus",
                         xmLabelWidgetClass,  topWidget(),
                         XmNborderWidth,      0,
                         NULL);

// attach managed widgets as desired
  XtVaSetValues (curveName,
                         XmNtopAttachment,    XmATTACH_WIDGET,
                         XmNtopWidget,        _titleW,
                         XmNtopOffset,        5,
                         XmNleftAttachment,   XmATTACH_FORM,
                         NULL);

  XtVaSetValues (_dependtxt[1],
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        curveName,
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       curveName,
                         NULL);

  XtVaSetValues (Yequals,
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       _dependtxt[1],
                         NULL);

  XtVaSetValues (_y0_arrow->W(),
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       Yequals,
                         NULL);

  XtVaSetValues (Yminus,
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       _y0_arrow->W(),
                         NULL);

  XtVaSetValues (_dependtxt[0],
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       Yminus,
                         NULL);

  XtVaSetValues (semiColon,
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       _dependtxt[0],
                         NULL);

  XtVaSetValues (_indeptxt[1],
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       semiColon,
                         NULL);

  XtVaSetValues (Xequals,
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       _indeptxt[1],
                         NULL);

  XtVaSetValues (_indeptxt[0],
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       Xequals,
                         NULL);

  XtVaSetValues (Xminus,
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       _indeptxt[0],
                         NULL);

  XtVaSetValues (_x0_arrow->W(),
                         XmNtopAttachment,    XmATTACH_OPPOSITE_WIDGET,
                         XmNtopWidget,        _dependtxt[1],
                         XmNleftAttachment,   XmATTACH_WIDGET,
                         XmNleftWidget,       Xminus,
                         NULL);

  return _y0_arrow->W();
}
