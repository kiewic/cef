// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/menu_model_cpptoc.h"
#include "libcef_dll/ctocpp/menu_model_delegate_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

void CefMenuModelDelegateCToCpp::ExecuteCommand(
    CefRefPtr<CefMenuModel> menu_model, int command_id,
    cef_event_flags_t event_flags) {
  cef_menu_model_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, execute_command))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: menu_model; type: refptr_diff
  DCHECK(menu_model.get());
  if (!menu_model.get())
    return;

  // Execute
  _struct->execute_command(_struct,
      CefMenuModelCppToC::Wrap(menu_model),
      command_id,
      event_flags);
}

void CefMenuModelDelegateCToCpp::MenuWillShow(
    CefRefPtr<CefMenuModel> menu_model) {
  cef_menu_model_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, menu_will_show))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: menu_model; type: refptr_diff
  DCHECK(menu_model.get());
  if (!menu_model.get())
    return;

  // Execute
  _struct->menu_will_show(_struct,
      CefMenuModelCppToC::Wrap(menu_model));
}

void CefMenuModelDelegateCToCpp::MenuClosed(
    CefRefPtr<CefMenuModel> menu_model) {
  cef_menu_model_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, menu_closed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: menu_model; type: refptr_diff
  DCHECK(menu_model.get());
  if (!menu_model.get())
    return;

  // Execute
  _struct->menu_closed(_struct,
      CefMenuModelCppToC::Wrap(menu_model));
}

bool CefMenuModelDelegateCToCpp::FormatLabel(CefRefPtr<CefMenuModel> menu_model,
    CefString& label) {
  cef_menu_model_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, format_label))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: menu_model; type: refptr_diff
  DCHECK(menu_model.get());
  if (!menu_model.get())
    return false;

  // Execute
  int _retval = _struct->format_label(_struct,
      CefMenuModelCppToC::Wrap(menu_model),
      label.GetWritableStruct());

  // Return type: bool
  return _retval?true:false;
}


// CONSTRUCTOR - Do not edit by hand.

CefMenuModelDelegateCToCpp::CefMenuModelDelegateCToCpp() {
}

template<> cef_menu_model_delegate_t* CefCToCpp<CefMenuModelDelegateCToCpp,
    CefMenuModelDelegate, cef_menu_model_delegate_t>::UnwrapDerived(
    CefWrapperType type, CefMenuModelDelegate* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCpp<CefMenuModelDelegateCToCpp,
    CefMenuModelDelegate, cef_menu_model_delegate_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefMenuModelDelegateCToCpp,
    CefMenuModelDelegate, cef_menu_model_delegate_t>::kWrapperType =
    WT_MENU_MODEL_DELEGATE;
