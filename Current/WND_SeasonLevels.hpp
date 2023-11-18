#ifndef UE4SS_SDK_WND_SeasonLevels_HPP
#define UE4SS_SDK_WND_SeasonLevels_HPP

class UWND_SeasonLevels_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewRow;
    class UButton* Button_Back;
    class UButton* Button_Next;
    class UHorizontalBox* HBox_Levels1;
    class UHorizontalBox* HBox_Levels2;
    class UHorizontalBox* HBox_SelectImages;
    class UImage* Image_BackArrow;
    class UImage* Image_NextArrow;
    int32 NumberOfLevel;
    class UITM_TreeOfVanity_Node_C* Temp;
    int32 CurrStart;
    int32 LastIndex;
    bool FirstColumn;
    FGeometry HBox_Size;
    float AnimDirection;
    class UHorizontalBox* ActiveHBox;
    class UHorizontalBox* InactiveHBox;
    FWND_SeasonLevels_CRewardClaimed RewardClaimed;
    void RewardClaimed(class UReward* Reward);
    TArray<class UItm_LevelSelectIcon_C*> SelectionWidgets;
    float AdjustedSize;

    void SequenceEvent__ENTRYPOINTWND_SeasonLevels_0();
    void OnSectionClicked(int32 startLevel);
    void MakeSelectionString();
    void UpdatePrevNextButtons(int32 RowStartLevel);
    void TickMoveAnim();
    void AddInfinityReward();
    void AddGradientLevel(int32 Level, bool IsStartGradient);
    void SetData(int32 FirstLevel, bool WithAnim, float Direction);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_Next_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Next_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Back_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Back_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Next_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Next_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_Back_K2Node_ComponentBoundEvent_7_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_Next_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_Back_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void OldLevelsHidden();
    void ScrollWheelUp();
    void ScrollWheelDown();
    void OnRewardClaimed(class UReward* Reward);
    void OnShown();
    void OnRewardWindowClosed();
    void ExecuteUbergraph_WND_SeasonLevels(int32 EntryPoint);
    void RewardClaimed__DelegateSignature(class UReward* Reward);
};

#endif
