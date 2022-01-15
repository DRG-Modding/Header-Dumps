#ifndef UE4SS_SDK_HUD_BoscoRevivesLable_HPP
#define UE4SS_SDK_HUD_BoscoRevivesLable_HPP

class UHUD_BoscoRevivesLable_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* ReviveCountText;
    FSlateFontInfo Font;
    FSlateColor Color;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnReviveCountChangedEvent(const int32 ReviveCount);
    void ExecuteUbergraph_HUD_BoscoRevivesLable(int32 EntryPoint, ReviveUsedSig__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, const int32 K2Node_CustomEvent_ReviveCount, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetReviveCharges_ReturnValue);
}

#endif
