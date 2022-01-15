#ifndef UE4SS_SDK_HUD_PlayerPerks_Icon_HPP
#define UE4SS_SDK_HUD_PlayerPerks_Icon_HPP

class UHUD_PlayerPerks_Icon_C : UPerkHUDIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimCoolingDown;
    UWidgetAnimation* AnimCoolDownFinished;
    UImage* BackgroundImage;
    UBorder* CounterBorder;
    UBasic_Label_C* CounterLabel;
    UImage* FlashOverlay;
    UOverlay* OverlayTexture;
    UOverlay* OverlayWidget;
    UImage* PerkIcon;
    UImage* PerkShadow;
    UProgressBar* ProgressBarCoolDown;
    UImage* Ring_1;
    UImage* Ring_2;
    UImage* Ring_3;
    UUI_RoundedCanvas_C* UI_RoundedCanvas;
    FTimerHandle RefreshHandle;

    float GetCooldownDuration(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_GetUseCoolDownDuration_ReturnValue);
    float GetCoolDownProgress(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_GetUseCoolDownProgress_ReturnValue);
    int32 GetMaxUseCharges(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetMaxUseCharges_ReturnValue);
    int32 GetRemainingUseCharges(UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 CallFunc_GetRemainingUseCharges_ReturnValue);
    void RefreshCounterAndProgress(bool& CoolDownActive, int32 MaxCharges, float CooldownDuration, float Progress, int32 remainingCharges, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, float Temp_float_Variable, float CallFunc_GetCoolDownDuration_ReturnValue, float CallFunc_GetCoolDownProgress_ReturnValue, int32 CallFunc_GetMaxUseCharges_ReturnValue, int32 CallFunc_GetRemainingUseCharges_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, float K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_SetProgress_OutProgress, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetCounter(int32 InCount, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void SetProgress(float InProgress, float& OutProgress, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, bool Temp_bool_Variable_2, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, float K2Node_Select_Default, float K2Node_Select_Default_1, uint8 K2Node_Select_Default_2, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, float CallFunc_Lerp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1);
    void OnTick_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime);
    void Completed_64B6D09E4CB7705CDF68E9949787003B(float DeltaTime, float NormalizedTime);
    void ReceivePerkAssetChanged();
    void Construct();
    void OnAnimCoolDownFinished();
    void Begin Cool Down(float Duration);
    void PreConstruct(bool IsDesignTime);
    void RefreshUseCharges(UPerkAsset* Perk, int32 Value);
    void CoolDownTick();
    void ExecuteUbergraph_HUD_PlayerPerks_Icon(int32 EntryPoint, UPerkDelegateItem* CallFunc_GetDelegates_ReturnValue, TickDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_DeltaTime_1, float K2Node_CustomEvent_NormalizedTime_1, float K2Node_CustomEvent_DeltaTime, float K2Node_CustomEvent_NormalizedTime, TickDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_SetProgress_OutProgress, bool Temp_bool_Has_Been_Initd_Variable, PerkIntDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, float K2Node_CustomEvent_Duration, UMiniTimerAction* CallFunc_MiniTimer_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, bool CallFunc_RefreshCounterAndProgress_CoolDownActive, bool CallFunc_RefreshCounterAndProgress_CoolDownActive_1, UPerkAsset* K2Node_CustomEvent_Perk, int32 K2Node_CustomEvent_Value, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RefreshCounterAndProgress_CoolDownActive_2, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor_1);
}

#endif
