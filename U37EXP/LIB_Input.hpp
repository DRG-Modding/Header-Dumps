#ifndef UE4SS_SDK_LIB_Input_HPP
#define UE4SS_SDK_LIB_Input_HPP

class ULIB_Input_C : public UBlueprintFunctionLibrary
{

    bool IsSelectNext(const FKeyEvent& KeyEvent, class UObject* __WorldContext);
    bool IsSelectPrevious(const FKeyEvent& KeyEvent, class UObject* __WorldContext);
    bool IsBackMenuMouse(FPointerEvent Pointer Event, class UObject* __WorldContext);
    bool IsUseButton(const FKeyEvent& Input, class UObject* __WorldContext);
    bool IsOkMenu(const FKeyEvent& Input, class UObject* __WorldContext);
    bool IsCloseOrBackMenu(FKeyEvent& Input, class UObject* __WorldContext);
};

#endif
