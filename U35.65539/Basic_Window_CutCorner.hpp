#ifndef UE4SS_SDK_Basic_Window_CutCorner_HPP
#define UE4SS_SDK_Basic_Window_CutCorner_HPP

class UBasic_Window_CutCorner_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_BG_CutCorner_C* Basic_BG_Window;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UNamedSlot* Content;
    FMargin ContentPadding;
    float BackgroundOpacity;
    TEnumAsByte<ENUM_MenuColors::Type> ColorbarTint;

    void PreConstruct(bool IsDesignTime);
    void SetBackgroundTint(FLinearColor InColorAndOpacity);
    void SetColorbarColor(uint8 Colorbar_Tint);
    void ExecuteUbergraph_Basic_Window_CutCorner(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MakeColor_ReturnValue, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FLinearColor K2Node_CustomEvent_InColorAndOpacity, uint8 K2Node_CustomEvent_Colorbar_Tint);
}

#endif
