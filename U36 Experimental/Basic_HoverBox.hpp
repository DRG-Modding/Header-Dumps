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
    void ExecuteUbergraph_Basic_HoverBox(int32 EntryPoint);
    void EndHover__DelegateSignature();
    void BeginHover__DelegateSignature();
};

#endif
