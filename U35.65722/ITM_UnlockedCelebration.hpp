#ifndef UE4SS_SDK_ITM_UnlockedCelebration_HPP
#define UE4SS_SDK_ITM_UnlockedCelebration_HPP

class UITM_UnlockedCelebration_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimIntro;
    class UITM_BigButton_C* ContinueButton;
    class UTextBlock* ForgeItemName;
    class UImage* Image_0;
    class UImage* NoiseImage;
    class UVerticalBox* RewardHolder;
    class UUI_MasteryReward_C* UI_MasteryReward;
    class UImage* UpperBarCorner;
    FITM_UnlockedCelebration_COnFinished OnFinished;
    void OnFinished(TArray<class UUnlockReward*>& Rewards);
    TArray<class UUnlockReward*> Unlocks;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEventFEventReply CallFunc_Unhandled_ReturnValue, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsOkMenu_ReturnValue, bool CallFunc_IsCloseOrBackMenu_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void Construct();
    void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void ClickContinue();
    void ShowRewards(FMasteryItem Rewards, TSubclassOf<class AActor> Item);
    void ExecuteUbergraph_ITM_UnlockedCelebration(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FMasteryItem K2Node_CustomEvent_Rewards, TSubclassOf<class AActor> K2Node_CustomEvent_Item, class UUpgradableGearComponent* CallFunc_GetComponentFromClass_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUI_MasteryReward_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UUnlockReward* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void OnFinished__DelegateSignature(TArray<class UUnlockReward*>& Rewards);
};

#endif
