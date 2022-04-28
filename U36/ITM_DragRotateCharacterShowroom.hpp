#ifndef UE4SS_SDK_ITM_DragRotateCharacterShowroom_HPP
#define UE4SS_SDK_ITM_DragRotateCharacterShowroom_HPP

class UITM_DragRotateCharacterShowroom_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    bool GrabMouse;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void OnShowCharacterSelectorRotate(float Pitch, float Yaw);
    void ExecuteUbergraph_ITM_DragRotateCharacterShowroom(int32 EntryPoint);
};

#endif
