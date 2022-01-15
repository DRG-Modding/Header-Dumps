#ifndef UE4SS_SDK_UI_CoreInfuser_Reward_Icon_HPP
#define UE4SS_SDK_UI_CoreInfuser_Reward_Icon_HPP

class UUI_CoreInfuser_Reward_Icon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimFade;
    UWidgetAnimation* AnimHover;
    UButton* IconButton;
    USizeBox* IconSizer;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UImage* RewardIcon_Back;
    UImage* RewardIcon_Front;
    UProgressBar* SelectProgressBar;
    UVerticalBox* UseBox;
    UUI_AdvancedLabel_C* UseInstructionsLabel;
    FUI_CoreInfuser_Reward_Icon_COnHovered OnHovered;
    void OnHovered(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    FUI_CoreInfuser_Reward_Icon_COnUnhovered OnUnhovered;
    void OnUnhovered(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    FUI_CoreInfuser_Reward_Icon_COnRewardSelected OnRewardSelected;
    void OnRewardSelected(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    bool IsIconFaded;
    bool IsIconHovered;
    int32 IconIndex;
    FTimerHandle ProgressTimer;
    bool IsRewardSelected;
    USchematic* SchematicReward;
    AEventRewardDispenser* RewardDispenser;
    UAudioComponent* ActivateAudio;

    void ToggleActivateAudio(bool AudioActive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void GetReward(USchematic*& SchematicReward);
    void SetSchematicReward(USchematic* InSchematic, UEventRewardType* RewardType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void GetIsRewardSelected(bool& IsSelected);
    void TrySelectReward(bool& Reward Given, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void GetUseProgress(float& Progress);
    void SetUseProgress(float InProgress, bool& Finished, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    bool IsInteractable();
    void SetFaded(bool InFade, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, uint8 K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetHover(bool InHovering, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, uint8 K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, int32 K2Node_Select_Default_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void OnProgressTick();
    void Construct();
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void SetDispenser(AEventRewardDispenser* InDispenser);
    void ExecuteUbergraph_UI_CoreInfuser_Reward_Icon(int32 EntryPoint, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_SetUseProgress_Finished, bool CallFunc_SetUseProgress_Finished_1, float CallFunc_GetUseProgress_Progress, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetUseProgress_Finished_2, bool CallFunc_TrySelectReward_Reward_Given, AEventRewardDispenser* K2Node_CustomEvent_InDispenser, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
    void OnRewardSelected__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void OnUnhovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void OnHovered__DelegateSignature(UUI_CoreInfuser_Reward_Icon_C* IconWidget);
}

#endif
