#ifndef UE4SS_SDK_UI_GlowBackground_HPP
#define UE4SS_SDK_UI_GlowBackground_HPP

class UUI_GlowBackground_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimGlow;
    class UImage* Glow1;
    class UImage* Glow2;
    class UOverlay* GlowOverlay;
    FSlateColor Tint1;
    FSlateColor Tint2;

    void SetTints(FSlateColor InTint1, FSlateColor InTint2);
    void SetGlowTint(FLinearColor InTint, FSlateColor K2Node_MakeStruct_SlateColor);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_GlowBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
