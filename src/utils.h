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
#ifndef WTF8_UTILS_H_INCLUDED_
#define WTF8_UTILS_H_INCLUDED_

#include <cstddef>
#include <string>
#include <cstring>

namespace WinTF8 {

template <typename T> 
static inline T min(T a, T b) {
    return a < b ? a : b;
}

template <typename T> 
static inline T max(T a, T b) {
    return b < a ? a : b;
}

template <typename T> 
static inline T clamp(T value, T a, T b) {
    return a < b ?
        value < a ? a : b < value ? b : value :
        value < b ? b : a < value ? a : value;
}

template <typename charT>
static charT* new_c_str(const std::basic_string<charT>& s) {
    charT* result = new charT[s.length()+1];
    std::memcpy(result, s.c_str(), s.length()+1);
    return result;
}

template <typename charT>
static charT* new_c_str(const charT* s) {
    if(s) {
        size_t length = std::strlen(s);
        charT* result = new charT[length+1];
        std::memcpy(result, s, length+1);
        return result;
    } else
        return nullptr;
}

template <typename charT>
static inline charT* delete_c_str(charT* s) {
    if(s)
        delete[] s;
    return nullptr;
}

}

#endif
