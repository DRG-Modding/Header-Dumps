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
    int32 iconIndex;
    FTimerHandle ProgressTimer;
    bool IsRewardSelected;
    class USchematic* SchematicReward;
    class AEventRewardDispenser* RewardDispenser;
    class UAudioComponent* ActivateAudio;

    void ToggleActivateAudio(bool AudioActive);
    void GetReward(class USchematic*& SchematicReward);
    void SetSchematicReward(class USchematic* InSchematic);
    void GetIsRewardSelected(bool& IsSelected);
    void TrySelectReward(bool& Reward Given);
    void GetUseProgress(float& Progress);
    void SetUseProgress(float InProgress, bool& Finished);
    bool IsInteractable();
    void SetFaded(bool InFade);
    void SetHover(bool InHovering);
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void OnProgressTick();
    void Construct();
    void BndEvt__IconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void SetDispenser(class AEventRewardDispenser* InDispenser);
    void ExecuteUbergraph_UI_CoreInfuser_Reward_Icon(int32 EntryPoint);
    void OnRewardSelected__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void OnUnhovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
    void OnHovered__DelegateSignature(class UUI_CoreInfuser_Reward_Icon_C* IconWidget);
};

#endif
