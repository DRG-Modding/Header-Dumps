#ifndef UE4SS_SDK_HUD_BoscoAmmoRefillsLable_HPP
#define UE4SS_SDK_HUD_BoscoAmmoRefillsLable_HPP

class UHUD_BoscoAmmoRefillsLable_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* AmmorRefillCounterText;
    FSlateFontInfo Font;
    FSlateColor Color;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_HUD_BoscoAmmoRefillsLable(int32 EntryPoint);
};

#endif
