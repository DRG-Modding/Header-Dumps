#ifndef UE4SS_SDK_ITM_DragRotateCharacter_HPP
#define UE4SS_SDK_ITM_DragRotateCharacter_HPP

class UITM_DragRotateCharacter_C : public UUserWidget
{
    class UImage* Image_0;
    bool GrabMouse;
    class ACharacterSelectionSwitcher_C* switcher;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
};

#endif
