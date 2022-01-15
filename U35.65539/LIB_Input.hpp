#ifndef UE4SS_SDK_LIB_Input_HPP
#define UE4SS_SDK_LIB_Input_HPP

class ULIB_Input_C : UBlueprintFunctionLibrary
{

    bool IsSelectNext(const FKeyEvent& KeyEvent, UObject* __WorldContextFName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    bool IsSelectPrevious(const FKeyEvent& KeyEvent, UObject* __WorldContextFName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsKeyEventAction_ReturnValue);
    bool IsBackMenuMouse(FPointerEvent Pointer Event, UObject* __WorldContextFKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue);
    bool IsUseButton(const FKeyEvent& Input, UObject* __WorldContextFKey CallFunc_GetKey_ReturnValue, FKey CallFunc_GetKey_ReturnValue_1, bool CallFunc_IsActionMappedTo_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    bool IsOkMenu(const FKeyEvent& Input, UObject* __WorldContextFKey CallFunc_GetKey_ReturnValue, FKey CallFunc_GetKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsActionMappedTo_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    bool IsCloseOrBackMenu(FKeyEvent& Input, UObject* __WorldContextFKey CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
}

#endif
