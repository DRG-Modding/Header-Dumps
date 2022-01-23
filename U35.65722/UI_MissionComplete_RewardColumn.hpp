#ifndef UE4SS_SDK_UI_MissionComplete_RewardColumn_HPP
#define UE4SS_SDK_UI_MissionComplete_RewardColumn_HPP

class UUI_MissionComplete_RewardColumn_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UVerticalBox* EntryBox;
    class UImage* TotalIcon;
    class UTextBlock* TotalText;
    FUI_MissionComplete_RewardColumn_COnCountingFinished OnCountingFinished;
    void OnCountingFinished();
    class UTexture2D* Icon;
    FLinearColor IconTint;
    TArray<class UUI_MissionComplete_CombinedRewardLine_C*> Entries;
    float TotalAmount;
    int32 Index;
    class UUI_MissionComplete_CombinedRewardLine_C* CurrentEntry;
    int32 Entry Size;
    int32 Header Size;
    int32 HeadIconSize;

    int32 GetGoldCollected(class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, class UCappedResource* CallFunc_GetResource_ReturnValue, int32 CallFunc_Round_ReturnValue);
    void IncTotal(float Delta, float CallFunc_Add_FloatFloat_ReturnValue);
    void SetTotal(float Value, int32 CallFunc_FFloor_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void ClearEntries();
    void AddEntry(FText Description, int32 Amount, class UUI_MissionComplete_CombinedRewardLine_C*& OutEntry, class UUI_MissionComplete_CombinedRewardLine_C* Entry, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_MissionComplete_CombinedRewardLine_C* CallFunc_Create_ReturnValue);
    void SetIcon(class UTexture2D* Texture, FLinearColor Tint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FSlateColor K2Node_MakeStruct_SlateColor);
    void PreConstruct(bool IsDesignTime);
    void Begin Counting();
    void Construct();
    void FillCreditRewards();
    void FillXPRewards();
    void ExecuteUbergraph_UI_MissionComplete_RewardColumn(int32 EntryPoint, int32 CallFunc_GetGoldCollected_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool K2Node_Event_IsDesignTime, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, const TArray<FCreditsReward>& CallFunc_GetMissionRewardCredits_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, TArray<FXPReward>& CallFunc_GetXPRewards_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FXPReward CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UUI_MissionComplete_CombinedRewardLine_C* CallFunc_AddEntry_OutEntry, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, FCreditsReward CallFunc_Array_Get_Item_1, class UUI_MissionComplete_CombinedRewardLine_C* CallFunc_AddEntry_OutEntry_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UUI_MissionComplete_CombinedRewardLine_C* CallFunc_AddEntry_OutEntry_2, FLinearColor CallFunc_MenuColors_OutputColor, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UUI_MissionComplete_CombinedRewardLine_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Add_IntInt_ReturnValue_5, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue, class UGeneratedMission* CallFunc_GetGeneratedMission_ReturnValue_1, TArray<FXPReward>& CallFunc_GetXPRewardDeepDive_ReturnValue, bool CallFunc_IsSingleMission_ReturnValue_1, FXPReward CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, class UUI_MissionComplete_CombinedRewardLine_C* CallFunc_AddEntry_OutEntry_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UDeepDiveManager* CallFunc_GetDeepDiveManager_ReturnValue_1, int32 CallFunc_GetCurrentDeepDiveStage_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, TArray<FCreditsReward>& CallFunc_GetDeepDiveCreditsReward_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_4, FCreditsReward CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_4, class UUI_MissionComplete_CombinedRewardLine_C* CallFunc_AddEntry_OutEntry_4);
    void OnCountingFinished__DelegateSignature();
};

#endif
