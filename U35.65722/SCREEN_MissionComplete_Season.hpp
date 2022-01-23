#ifndef UE4SS_SDK_SCREEN_MissionComplete_Season_HPP
#define UE4SS_SDK_SCREEN_MissionComplete_Season_HPP

class USCREEN_MissionComplete_Season_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* LevelUpSmoke;
    class UWidgetAnimation* RemoveLevelUpBanner;
    class UWidgetAnimation* Appear;
    class UWidgetAnimation* PerformancePointShake;
    class UWidgetAnimation* HideEvents;
    class UWidgetAnimation* NewRewardIntro;
    class UHorizontalBox* HB_PointsGained;
    class UHorizontalBox* HorizontalBox_Challenges;
    class UImage* Icon_SeasonXP;
    class UImage* Image_184;
    class UImage* Image_559;
    class UImage* Image_BG_Topline_1;
    class UImage* Image_BottomSmoke;
    class UImage* Image_Line_1;
    class UITM_SeasonProgressBar_C* ITM_SeasonProgressBar;
    class UImage* NoiseImage;
    class UImage* PlayerCharacterImage;
    class UTextBlock* Text_XP_Gained;
    class UUniformGridPanel* UniformGridPanel_Rewards;
    class UVerticalBox* VBox_Events;
    class UVerticalBox* VBox_LevelUpHolder;
    class UVerticalBox* VerticalBox_Rewards;
    class UVerticalBox* VerticalBox_XPGain;
    FSCREEN_MissionComplete_Season_CSeasonFlowFinished SeasonFlowFinished;
    void SeasonFlowFinished();
    int32 tmpIndex;
    int32 currXPCount;
    TArray<class UITM_Season_Challenge_C*> Challenges;
    bool FirstReward;
    TArray<FSeasonLevel> Rewards;
    int32 RewardIndex;
    bool IsRewardFlowActive;

    void SequenceEvent__ENTRYPOINTSCREEN_MissionComplete_Season_0();
    void AddLevelUpBanner(int32 Level, bool Temp_bool_IsClosed_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UITM_Season_LevelUp_C* CallFunc_Create_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
    void AddPoints(int32 Points, FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void AddRewardWithAnim(class UReward* Reward, class UITM_Season_RewardImageSingle_C*& RewardWidget, class UITM_Season_RewardImageSingle_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGridEx_OutSlot, class UUniformGridPanel* CallFunc_AddChildToUniformGridEx_OutGridPanel, class UITM_Season_RewardImageSingle_C* CallFunc_AddChildToUniformGridEx_ReturnValue);
    void RewardIntroFinished();
    void StartSeasonFlow();
    void StartChallenges();
    void FlowFinished();
    void Construct();
    void OnShowLevelRewards(int32 Level);
    void PreConstruct(bool IsDesignTime);
    void PIE_UpdateXPText();
    void ContinueReward1();
    void HideEventsFinished();
    void PlayIntro();
    void OnAppeared();
    void CreateChallenges();
    void OnAddPoints_Event();
    void LevelReached(int32 Level);
    void OnRewardIntroFinished();
    void RefreshShowroom();
    void Destruct();
    void ShowNextReward();
    void ExecuteUbergraph_SCREEN_MissionComplete_Season(int32 EntryPoint, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, bool CallFunc_GetMissionSuccessful_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UITM_SeasonEvent_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UITM_SeasonEvent_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, class UITM_SeasonEvent_C* CallFunc_Create_ReturnValue_2, int32 Temp_int_Variable, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Variable, const FText Temp_text_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Array_Index_Variable_3, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_1, bool CallFunc_GetMissionSuccessful_ReturnValue_1, FExecuteUbergraph_SCREEN_MissionComplete_SeasonK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_SCREEN_MissionComplete_SeasonK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue, int32 K2Node_CustomEvent_Level_1, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_IsEndMissionResultReady_ReturnValue, class UITM_Season_Challenge_C* CallFunc_Create_ReturnValue_3, FExecuteUbergraph_SCREEN_MissionComplete_SeasonK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, const FText Temp_text_Variable_1, FMargin K2Node_MakeStruct_Margin, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, FSeasonMissionResult CallFunc_GetSeasonMissionResult_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_4, FChallengeInfo CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FExecuteUbergraph_SCREEN_MissionComplete_SeasonK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FMargin K2Node_MakeStruct_Margin_1, int32 Temp_int_Variable_2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Array_Add_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, FSeasonMissionResult CallFunc_GetSeasonMissionResult_ReturnValue_1, class UITM_Season_Challenge_C* CallFunc_Array_Get_Item_1, FChallengeInfo CallFunc_GetInfo_Challenge, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FExecuteUbergraph_SCREEN_MissionComplete_SeasonK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, FSeasonMissionResult CallFunc_GetSeasonMissionResult_ReturnValue_2, FExecuteUbergraph_SCREEN_MissionComplete_SeasonK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, FSeasonEvent CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 K2Node_Select_Default, int32 CallFunc_Multiply_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, float CallFunc_MakeLiteralFloat_ReturnValue, class UITM_Season_Challenge_C* CallFunc_Create_ReturnValue_4, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, int32 K2Node_CustomEvent_Level, int32 CallFunc_Max_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, FSeasonMissionResult CallFunc_GetSeasonMissionResult_ReturnValue_3, int32 CallFunc_GetSeasonXP_ReturnValue, FSeasonEvent CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Subtract_IntInt_ReturnValue, class USeasonsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_4, class AFSDPlayerState* CallFunc_GetOwningFSDPlayerState_ReturnValue_1, FSeasonLevel CallFunc_GetLevelReward_ReturnValue, class UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_2, class UCharacterShowroomController* CallFunc_DisplayCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const FText Temp_text_Variable_2, bool Temp_bool_Variable_1, int32 K2Node_Select_Default_1, class UITM_SeasonEvent_C* CallFunc_Create_ReturnValue_5, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_8, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_3, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_9, FSeasonLevel CallFunc_Array_Get_Item_4, bool CallFunc_Array_IsValidIndex_ReturnValue, class UITM_Season_RewardImageSingle_C* CallFunc_AddRewardWithAnim_RewardWidget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor);
    void SeasonFlowFinished__DelegateSignature();
};

#endif
