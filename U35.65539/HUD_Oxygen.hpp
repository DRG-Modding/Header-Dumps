#ifndef UE4SS_SDK_HUD_Oxygen_HPP
#define UE4SS_SDK_HUD_Oxygen_HPP

class UHUD_Oxygen_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* DangerAnim;
    UWidgetAnimation* Fueling;
    UImage* ARROW_Fueling;
    UBorder* Border_1;
    UTextBlock* DangerText;
    UImage* Image_1;
    UProgressBar* Oxygenbar;
    bool HoldBarColor;

    void OnOxygenChanged_Event_0(int32 oxygenLevel);
    void OnOxygenReplenishingEvent_Event_0(bool IsActive);
    void 40PercentOxygenLeft();
    void SetProgress(float CurrentProgress);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Oxygen(int32 EntryPoint, OxygenDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_oxygenLevel, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_CustomEvent_isActive, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, UAudioComponent* CallFunc_PlayPitched_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, OxygenTriggerDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, FLinearColor CallFunc_MenuColors_OutputColor_2, float K2Node_CustomEvent_CurrentProgress, OxygenActiveDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UOxygenComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
