/*
 * The contents of this file are subject to the Mozilla Public
 * License Version 1.1 (the "License"); you may not use this file
 * except in compliance with the License. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 * 
 * Software distributed under the License is distributed on an "AS
 * IS" basis, WITHOUT WARRANTY OF ANY KIND, either express or
 * implied. See the License for the specific language governing
 * rights and limitations under the License.
 * 
 * The Original Code is Web Sniffer.
 * 
 * The Initial Developer of the Original Code is Erik van der Poel.
 * Portions created by Erik van der Poel are
 * Copyright (C) 1998,1999,2000 Erik van der Poel.
 * All Rights Reserved.
 * 
 * Contributor(s): 
 */

#ifndef _VIEW_H_
#define _VIEW_H_

#include <stdio.h>

typedef struct View
{
	int	backslash;
	FILE	*out;
} View;

View *viewAlloc(void);
void viewHTML(View *view, Input *input);
void viewHTMLAttributeName(View *view, Input *input);
void viewHTMLAttributeValue(View *view, Input *input);
void viewHTMLTag(View *view, Input *input);
void viewHTMLText(View *view, Input *input);
void viewHTTP(View *view, Input *input);
void viewHTTPHeaderName(View *view, Input *input);
void viewHTTPHeaderValue(View *view, Input *input);
void viewReport(View *view, char *str);
void viewVerbose(void);

#endif /* _VIEW_H_ */
