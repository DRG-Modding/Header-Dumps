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

    void SequenceEvent__ENTRYPOINTWND_SeasonLevels_0();
    void OnSectionClicked(int32 startLevel, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
    void MakeSelectionString(FString Result, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, class UItm_LevelSelectIcon_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FMakeSelectionStringK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UItm_LevelSelectIcon_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetNumberOfSeasonLevels_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
    void UpdatePrevNextButtons(int32 RowStartLevel, bool CallFunc_EqualEqual_IntInt_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetNumberOfSeasonLevels_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void TickMoveAnim(float alpha, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector2D CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_GetLocalSize_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, FVector2D CallFunc_MakeVector2D_ReturnValue_1);
    void AddInfinityReward(FAddInfinityRewardK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UITM_Season_LevelInfinity_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetNumberOfSeasonLevels_ReturnValue);
    void AddGradientLevel(int32 Level, bool IsStartGradient, class UITM_Season_LevelEndGradient_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
    void SetData(int32 FirstLevel, bool WithAnim, float Direction, FSetDataK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const FGeometry CallFunc_GetCachedGeometry_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetNumberOfSeasonLevels_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UITM_Season_Level_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 Temp_int_Variable_2, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FSeasonLevel CallFunc_GetLevelReward_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_GetNumberOfSeasonLevels_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Min_ReturnValue);
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
    void ExecuteUbergraph_WND_SeasonLevels(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UReward* Temp_object_Variable, class UITM_Season_LevelEndGradient_C* CallFunc_Create_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, int32 CallFunc_Subtract_IntInt_ReturnValue, class UITM_Season_LevelEndGradient_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, int32 CallFunc_Max_ReturnValue, FExecuteUbergraph_WND_SeasonLevelsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_GetNumberOfSeasonLevels_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue_2, FVector2D CallFunc_MakeVector2D_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, class UReward* K2Node_CustomEvent_Reward, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UWND_Season_RewardClaimed_C* CallFunc_OpenSingleUseWindow_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UITM_TreeOfVanity_Node_C* CallFunc_SpawnObject_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, class UITM_Season_Level_C* CallFunc_Create_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class UReward* K2Node_Select_Default, FSeasonLevel K2Node_MakeStruct_SeasonLevel, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2);
    void RewardClaimed__DelegateSignature(class UReward* Reward);
};

#endif
