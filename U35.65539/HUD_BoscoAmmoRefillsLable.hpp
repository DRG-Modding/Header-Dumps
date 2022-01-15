#ifndef UE4SS_SDK_HUD_BoscoAmmoRefillsLable_HPP
#define UE4SS_SDK_HUD_BoscoAmmoRefillsLable_HPP

class UHUD_BoscoAmmoRefillsLable_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* AmmorRefillCounterText;
    FSlateFontInfo Font;
    FSlateColor Color;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_HUD_BoscoAmmoRefillsLable(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
