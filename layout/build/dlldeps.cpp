/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 *
 * The contents of this file are subject to the Netscape Public License
 * Version 1.0 (the "NPL"); you may not use this file except in
 * compliance with the NPL.  You may obtain a copy of the NPL at
 * http://www.mozilla.org/NPL/
 *
 * Software distributed under the NPL is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the NPL
 * for the specific language governing rights and limitations under the
 * NPL.
 *
 * The Initial Developer of this code under the NPL is Netscape
 * Communications Corporation.  Portions created by Netscape are
 * Copyright (C) 1998 Netscape Communications Corporation.  All Rights
 * Reserved.
 */

// Force references to all of the symbols that we want exported from
// the dll that are located in the .lib files we link with

#include "nsString.h"
#include "nsIPresContext.h"
#include "nsIStyleSet.h"
#include "nsIDocument.h"
#include "nsHTMLParts.h"
#include "nsINameSpaceManager.h"

void XXXNeverCalled()
{
  nsIPresContext* cx;
  NS_NewGalleyContext(&cx);
  NS_NewPrintPreviewContext(&cx);
  NS_NewPrintContext(&cx);
  nsIStyleSet* ss;
  NS_NewStyleSet(&ss);
  nsIDocument* doc;
  NS_NewHTMLDocument(&doc);
  NS_NewImageDocument(&doc);
  nsIFrame* f;
  NS_NewTextFrame(f);
  NS_NewInlineFrame(f);
  NS_NewBRFrame(f);
  NS_NewWBRFrame(f);
  NS_NewHRFrame(f);
  NS_NewObjectFrame(f);
  NS_NewSpacerFrame(f);
  NS_NewHTMLFramesetFrame(f);
  NS_NewRootFrame(f);
  NS_NewScrollFrame(f);
  NS_NewSimplePageSequenceFrame(f);
  nsINameSpaceManager* nsm;
  NS_NewNameSpaceManager(&nsm);
  NS_CreateHTMLElement(nsnull, "");
}
