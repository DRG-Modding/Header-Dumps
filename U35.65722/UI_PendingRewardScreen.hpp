#ifndef UE4SS_SDK_UI_PendingRewardScreen_HPP
#define UE4SS_SDK_UI_PendingRewardScreen_HPP

class UUI_PendingRewardScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UVerticalBox* CreditsBox;
    class UTextBlock* CreditsLabel;
    class UImage* Icon_XP;
    class UImage* Image_1;
    class UITM_MissionComplete_ResourceBox_C* UI_MissionCompleted_Minerals;
    class UVerticalBox* XPBox;
    class UTextBlock* XPLabel;
    FPendingRewardsStats Stats;
    FPendingRewards Rewards;

    void Construct();
    void ExecuteUbergraph_UI_PendingRewardScreen(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FPendingRewardsStats CallFunc_GetPendingRewards_OutStats, FPendingRewards CallFunc_GetPendingRewards_OutRewards, bool CallFunc_GetPendingRewards_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UUI_PendingReward_RewardLine_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, FCreditsReward CallFunc_Array_Get_Item, FText CallFunc_Conv_IntToText_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUI_PendingReward_RewardLine_C* CallFunc_Create_ReturnValue_1, FXPReward CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, bool CallFunc_ShouldPendingRewardsBeShown_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
};

#endif
