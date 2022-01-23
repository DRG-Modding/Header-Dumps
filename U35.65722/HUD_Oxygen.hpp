#ifndef UE4SS_SDK_HUD_Oxygen_HPP
#define UE4SS_SDK_HUD_Oxygen_HPP

class UHUD_Oxygen_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* DangerAnim;
    class UWidgetAnimation* Fueling;
    class UImage* ARROW_Fueling;
    class UBorder* Border_1;
    class UTextBlock* DangerText;
    class UImage* Image_1;
    class UProgressBar* Oxygenbar;
    bool HoldBarColor;

    void OnOxygenChanged_Event_0(int32 oxygenLevel);
    void OnOxygenReplenishingEvent_Event_0(bool IsActive);
    void 40PercentOxygenLeft();
    void SetProgress(float CurrentProgress);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Oxygen(int32 EntryPoint, FExecuteUbergraph_HUD_OxygenK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_oxygenLevel, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_CustomEvent_isActive, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UAudioComponent* CallFunc_PlayPitched_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, FExecuteUbergraph_HUD_OxygenK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FLinearColor CallFunc_MenuColors_OutputColor_2, float K2Node_CustomEvent_CurrentProgress, FExecuteUbergraph_HUD_OxygenK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, class UOxygenComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime);
};

#endif
