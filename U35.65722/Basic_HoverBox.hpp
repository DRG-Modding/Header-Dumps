#ifndef UE4SS_SDK_Basic_HoverBox_HPP
#define UE4SS_SDK_Basic_HoverBox_HPP

class UBasic_HoverBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    FBasic_HoverBox_CBeginHover BeginHover;
    void BeginHover();
    FBasic_HoverBox_CEndHover EndHover;
    void EndHover();

    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_Basic_HoverBox(int32 EntryPoint, FGeometry K2Node_Event_MyGeometry, const FPointerEvent K2Node_Event_MouseEvent_1, const FPointerEvent K2Node_Event_MouseEvent);
    void EndHover__DelegateSignature();
    void BeginHover__DelegateSignature();
};

#endif
