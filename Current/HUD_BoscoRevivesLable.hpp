#ifndef UE4SS_SDK_HUD_BoscoRevivesLable_HPP
#define UE4SS_SDK_HUD_BoscoRevivesLable_HPP

class UHUD_BoscoRevivesLable_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* ReviveCountText;
    FSlateFontInfo Font;
    FSlateColor Color;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnReviveCountChangedEvent(const int32 ReviveCount);
    void ExecuteUbergraph_HUD_BoscoRevivesLable(int32 EntryPoint);
};

#endif
