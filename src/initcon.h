/*
  Copyright (c) 2014 StarBrilliant <m13253@hotmail.com>
  All rights reserved.

  Redistribution and use in source and binary forms are permitted
  provided that the above copyright notice and this paragraph are
  duplicated in all such forms and that any documentation,
  advertising materials, and other materials related to such
  distribution and use acknowledge that the software was developed by
  StarBrilliant.
  The name of StarBrilliant may not be used to endorse or promote
  products derived from this software without specific prior written
  permission.

  THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
  IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
*/
#pragma once
#ifndef WTF8_INITCON_H_INCLUDED_
#define WTF8_INITCON_H_INCLUDED_

#ifdef __cplusplus
namespace WTF8 {

/* Set console font to Lucida Console, which is the only console font supporting Unicode characters. */
bool set_console_font();

class SetConsolefont {
public:
#ifdef _WIN32
    SetConsolefont() {
        set_console_font();
    }
#endif
};

}
#endif

#ifdef __cplusplus
extern "C" {
#endif
int WTF8_set_console_font(void);
#ifdef __cplusplus
}
#endif

#endif