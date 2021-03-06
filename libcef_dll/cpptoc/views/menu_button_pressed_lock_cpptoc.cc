// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=eb1b836516db87b3ebf64c95b44f53ea89f1b5aa$
//

#include "libcef_dll/cpptoc/views/menu_button_pressed_lock_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

// CONSTRUCTOR - Do not edit by hand.

CefMenuButtonPressedLockCppToC::CefMenuButtonPressedLockCppToC() {}

// DESTRUCTOR - Do not edit by hand.

CefMenuButtonPressedLockCppToC::~CefMenuButtonPressedLockCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefMenuButtonPressedLock>
CefCppToCRefCounted<CefMenuButtonPressedLockCppToC,
                    CefMenuButtonPressedLock,
                    cef_menu_button_pressed_lock_t>::
    UnwrapDerived(CefWrapperType type, cef_menu_button_pressed_lock_t* s) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
CefWrapperType
    CefCppToCRefCounted<CefMenuButtonPressedLockCppToC,
                        CefMenuButtonPressedLock,
                        cef_menu_button_pressed_lock_t>::kWrapperType =
        WT_MENU_BUTTON_PRESSED_LOCK;
