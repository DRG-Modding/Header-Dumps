#ifndef UE4SS_SDK_WND_JobsEntry_HPP
#define UE4SS_SDK_WND_JobsEntry_HPP

class UWND_JobsEntry_C : UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Hover;
    UWidgetAnimation* ClickFoldIn;
    UWidgetAnimation* ClickFoldOut;
    UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    UImage* BG_M_Back;
    UImage* BG_M_Outline;
    UImage* BG_R_Back;
    UImage* BG_R_Outline;
    UImage* BigThumb_Gradient;
    UImage* BigThumb_Image;
    UBasic_ButtonScalable2_C* BTN_Abort;
    UBasic_ButtonScalable2_C* BTN_Accept;
    UButton* Button_0;
    UImage* CenterBar;
    UImage* CenterBar_Icon_Back;
    UImage* CenterBar_Icon_Border;
    UImage* CenterBar_Icon_Main;
    UTextBlock* DATA_AssignmentName;
    UTextBlock* Data_Description;
    UTextBlock* DATA_Header;
    UTextBlock* DATA_Prefix;
    UTextBlock* DATA_RewardBrief;
    UTextBlock* DATA_RewardFlavor;
    UBasic_Menu_MinimalWindow_C* Foldout;
    UImage* Image_0;
    UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets;
    UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets_Small;
    UHorizontalBox* PrereqHolder;
    UBorder* RootBorder;
    UImage* Thumbnail_Image;
    UImage* Thumbnail_Outline;
    UTextBlock* TXT_Prereqs;
    UHorizontalBox* WeeklyAssignmentCountdownHolder;
    UCampaign* Campaign;
    FWND_JobsEntry_COnBeginUnfolding OnBeginUnfolding;
    void OnBeginUnfolding(UWND_JobsEntry_C* Entry);
    bool IsFolded;

    void CreateValidSeedRequirement(UValidWeeklySeedCampaignRequirement* Requirement, UCampaign* Campaign, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UITM_ValidSeedRequirement_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRequirementMet_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void CreateCampaignCompletedRequirement(UCamapaignCompletedRequirement* Requirement, UCampaign* Campaign, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UITM_CampaignCompletedRequirement_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRequirementMet_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void CreateAnyRequirement(UAnyRetiredCampaignRequirement* Requirement, UCampaign* Campaign, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UITM_AnyRetiredRequirement_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRequirementMet_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    bool CanStartCampaign(UCampaign* InCampaignbool CallFunc_IsActiveCampaign_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanStartCampaign_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void CreateWeeklyRequirement(UWeeklyTimerCampaignRequirement* Requirement, UCampaign* Campaign, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_WeeklyRequirement_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void CreatePlayerRankBox(int32 RequiredRank, FLinearColor CallFunc_MenuColors_OutputColor, FText CallFunc_Conv_IntToText_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_JobsEntry_Resource_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    bool VisibleAndEnabled(UWidget* Widgetbool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void CreateLevelRequirementBox(int32 RequiredLevel, UPlayerCharacterID* ID, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_ClassLevelRequirement_C* CallFunc_Create_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void HandleAbortMissionButton(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsActiveCampaign_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, TSubclassOf<UCampaign> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TSubclassOf<UCampaign> CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void SetInfo(UTexture2D* CallFunc_GetPicture_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_Format_ReturnValue);
    bool IsActiveCampaign(UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsActiveCampaign_ReturnValue);
    void CreateRequirements(bool ShowText, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, UCampaignRequirement* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UValidWeeklySeedCampaignRequirement* K2Node_DynamicCast_AsValid_Weekly_Seed_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_1, UCamapaignCompletedRequirement* K2Node_DynamicCast_AsCamapaign_Completed_Requirement, bool K2Node_DynamicCast_bSuccess_2, UAnyRetiredCampaignRequirement* K2Node_DynamicCast_AsAny_Retired_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_3, UWeeklyTimerCampaignRequirement* K2Node_DynamicCast_AsWeekly_Timer_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsRequirementMet_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UPlayerRankCampaignRequirement* K2Node_DynamicCast_AsPlayer_Rank_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_5, UCaracterLevelCampaignRequirement* K2Node_DynamicCast_AsCaracter_Level_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_6, URetirementCampaignRequirement* K2Node_DynamicCast_AsRetirement_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_7);
    void SetActiveLook(FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
    void SetInactiveLook(FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BTN_Accept_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__BTN_Abort_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void Fold();
    void Answer(bool Yes);
    void SkipAnswer(bool Yes);
    void SetData(UCampaign* Campaign);
    void Refresh();
    void SetFolded(bool IsFolded);
    void Unfold();
    void ExecuteUbergraph_WND_JobsEntry(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, OnYesNoClickedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, OnYesNoClickedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_CanStartCampaign_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool K2Node_CustomEvent_Yes_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<UCampaign> CallFunc_GetObjectClass_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsActiveCampaign_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_1, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_2, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_3, bool CallFunc_IsActiveCampaign_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_4, bool CallFunc_IsActiveCampaign_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_4, FSlateColor K2Node_MakeStruct_SlateColor, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, USkipAssignmentPopup_C* CallFunc_OpenSingleUseWindow_ReturnValue_1, bool K2Node_CustomEvent_Yes, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_5, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_VisibleAndEnabled_ReturnValue, UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_6, bool CallFunc_VisibleAndEnabled_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, UCampaign* K2Node_Event_Campaign, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_Select_Default_1, FLinearColor K2Node_MakeStruct_LinearColor, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_CustomEvent_IsFolded, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_1, ESlateVisibility K2Node_Select_Default_2);
    void OnBeginUnfolding__DelegateSignature(UWND_JobsEntry_C* Entry);
}

#endif
