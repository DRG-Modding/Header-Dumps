#ifndef UE4SS_SDK_ITM_SeasonEditor_Reward_HPP
#define UE4SS_SDK_ITM_SeasonEditor_Reward_HPP

class UITM_SeasonEditor_Reward_C : public USeasonEditorRewardWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Outer;
    class UImage* Image_Selected;
    class UTextBlock* Text_Reward;
    class UTextBlock* Text_Type;
    FITM_SeasonEditor_Reward_CRewardClicked RewardClicked;
    void RewardClicked(class UITM_SeasonEditor_Reward_C* W_Reward);
    FITM_SeasonEditor_Reward_CRightMouseClicked RightMouseClicked;
    void RightMouseClicked(class UITM_SeasonEditor_Reward_C* W_Reward);
    FLinearColor Color;

    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetData(class UReward* Reward);
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Refresh();
    void SetSelected(bool IsSelected);
    void SetTypeText(FText InText);
    void ExecuteUbergraph_ITM_SeasonEditor_Reward(int32 EntryPoint);
    void RightMouseClicked__DelegateSignature(class UITM_SeasonEditor_Reward_C* W_Reward);
    void RewardClicked__DelegateSignature(class UITM_SeasonEditor_Reward_C* W_Reward);
};

#endif
