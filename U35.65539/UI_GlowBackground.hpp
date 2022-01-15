#ifndef UE4SS_SDK_UI_GlowBackground_HPP
#define UE4SS_SDK_UI_GlowBackground_HPP

class UUI_GlowBackground_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimGlow;
    UImage* Glow1;
    UImage* Glow2;
    UOverlay* GlowOverlay;
    FSlateColor Tint1;
    FSlateColor Tint2;

    void SetTints(FSlateColor InTint1, FSlateColor InTint2);
    void SetGlowTint(FLinearColor InTint, FSlateColor K2Node_MakeStruct_SlateColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_GlowBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
