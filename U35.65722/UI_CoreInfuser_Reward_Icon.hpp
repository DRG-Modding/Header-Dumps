#ifndef UE4SS_SDK_UI_CoreInfuser_Reward_Icon_HPP
#define UE4SS_SDK_UI_CoreInfuser_Reward_Icon_HPP

class UUI_CoreInfuser_Reward_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimFade;
    class UWidgetAnimation* AnimHover;
    class UButton* IconButton;
    class USizeBox* IconSizer;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UImage* RewardIcon_Back;
    class UImage* RewardIcon_Front;
    class UProgressBar* SelectProgressBar;
    class UVerticalBox* UseBox;
    class UUI_AdvancedLabel_C* UseInstructionsLabel;
    FUI_CoreInfuser_Reward_Icon_COnHovered OnHovered;
    void OnHovered(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    FUI_CoreInfuser_Reward_Icon_COnUnhovered OnUnhovered;
    void OnUnhovered(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    FUI_CoreInfuser_Reward_Icon_COnRewardSelected OnRewardSelected;
    void OnRewardSelected(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    bool IsIconFaded;
    bool IsIconHovered;
    int32 IconIndex;
    FTimerHandle ProgressTimer;
    bool IsRewardSelected;
    class USchematic* SchematicReward;
    class AEventRewardDispenser* RewardDispenser;
    class UAudioComponent* ActivateAudio;

    void ToggleActivateAudio(bool AudioActive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void GetReward(class USchematic*& SchematicReward);
    void SetSchematicReward(class USchematic* InSchematic, class UEventRewardType* RewardType, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1);
    void GetIsRewardSelected(bool& IsSelected);
    void TrySelectReward(bool& Reward Given, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void GetUseProgress(float& Progress);
    void SetUseProgress(float InProgress, bool& Finished, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    bool IsInteractable();
    void SetFaded(bool InFade, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetHover(bool InHovering, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable_1, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, float CallFunc_GetAnimationCurrentTime_ReturnValue, int32 K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void OnProgressTick();
    void Construct();
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void SetDispenser(class AEventRewardDispenser* InDispenser);
    void ExecuteUbergraph_UI_CoreInfuser_Reward_Icon(int32 EntryPoint, FExecuteUbergraph_UI_CoreInfuser_Reward_IconK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_SetUseProgress_Finished, bool CallFunc_SetUseProgress_Finished_1, float CallFunc_GetUseProgress_Progress, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetUseProgress_Finished_2, bool CallFunc_TrySelectReward_Reward_Given, class AEventRewardDispenser* K2Node_CustomEvent_InDispenser, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1);
    void OnRewardSelected__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void OnUnhovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void OnHovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
};

#endif
