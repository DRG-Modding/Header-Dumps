#ifndef UE4SS_SDK_Basic_Window_CutCorner_Gradient_HPP
#define UE4SS_SDK_Basic_Window_CutCorner_Gradient_HPP

class UBasic_Window_CutCorner_Gradient_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_BG_CutCorner_Gradient_C* Basic_BG_Window;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UNamedSlot* Content;
    FMargin ContentPadding;
    float BackgroundOpacity;
    TEnumAsByte<ENUM_MenuColors::Type> ColorbarTint;

    void PreConstruct(bool IsDesignTime);
    void SetBackgroundTint(FLinearColor InColorAndOpacity);
    void SetColorbarColor(TEnumAsByte<ENUM_MenuColors::Type> Colorbar_Tint);
    void ExecuteUbergraph_Basic_Window_CutCorner_Gradient(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MakeColor_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, FLinearColor K2Node_CustomEvent_InColorAndOpacity, TEnumAsByte<ENUM_MenuColors::Type> K2Node_CustomEvent_Colorbar_Tint);
};

#endif
