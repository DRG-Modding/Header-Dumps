#ifndef UE4SS_SDK_WND_JobsEntry_HPP
#define UE4SS_SDK_WND_JobsEntry_HPP

class UWND_JobsEntry_C : public UWND_Jobs_Entry_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Hover;
    class UWidgetAnimation* ClickFoldIn;
    class UWidgetAnimation* ClickFoldOut;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UImage* BG_M_Back;
    class UImage* BG_M_Outline;
    class UImage* BG_R_Back;
    class UImage* BG_R_Outline;
    class UImage* BigThumb_Gradient;
    class UImage* BigThumb_Image;
    class UBasic_ButtonScalable2_C* BTN_Abort;
    class UBasic_ButtonScalable2_C* BTN_Accept;
    class UButton* Button_0;
    class UImage* CenterBar;
    class UImage* CenterBar_Icon_Back;
    class UImage* CenterBar_Icon_Border;
    class UImage* CenterBar_Icon_Main;
    class UTextBlock* DATA_AssignmentName;
    class UTextBlock* Data_Description;
    class UTextBlock* DATA_Header;
    class UTextBlock* DATA_Prefix;
    class UTextBlock* DATA_RewardBrief;
    class UTextBlock* DATA_RewardFlavor;
    class UBasic_Menu_MinimalWindow_C* Foldout;
    class UImage* Image_0;
    class UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets;
    class UITM_CampaignProgress_NoBrackets_C* ITM_CampaignProgress_NoBrackets_Small;
    class UHorizontalBox* PrereqHolder;
    class UBorder* RootBorder;
    class UImage* Thumbnail_Image;
    class UImage* Thumbnail_Outline;
    class UTextBlock* TXT_Prereqs;
    class UHorizontalBox* WeeklyAssignmentCountdownHolder;
    class UCampaign* Campaign;
    FWND_JobsEntry_COnBeginUnfolding OnBeginUnfolding;
    void OnBeginUnfolding(class UWND_JobsEntry_C* Entry);
    bool IsFolded;

    void CreateValidSeedRequirement(class UValidWeeklySeedCampaignRequirement* Requirement, class UCampaign* Campaign, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UITM_ValidSeedRequirement_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRequirementMet_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void CreateCampaignCompletedRequirement(class UCamapaignCompletedRequirement* Requirement, class UCampaign* Campaign, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UITM_CampaignCompletedRequirement_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRequirementMet_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void CreateAnyRequirement(class UAnyRetiredCampaignRequirement* Requirement, class UCampaign* Campaign, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UITM_AnyRetiredRequirement_C* CallFunc_Create_ReturnValue, bool CallFunc_IsRequirementMet_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    bool CanStartCampaign(class UCampaign* InCampaignbool CallFunc_IsActiveCampaign_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanStartCampaign_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void CreateWeeklyRequirement(class UWeeklyTimerCampaignRequirement* Requirement, class UCampaign* Campaign, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_WeeklyRequirement_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void CreatePlayerRankBox(int32 RequiredRank, FLinearColor CallFunc_MenuColors_OutputColor, FText CallFunc_Conv_IntToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_JobsEntry_Resource_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    bool VisibleAndEnabled(class UWidget* Widgetbool CallFunc_IsVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void CreateLevelRequirementBox(int32 RequiredLevel, class UPlayerCharacterID* ID, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UITM_ClassLevelRequirement_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
    void HandleAbortMissionButton(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, bool CallFunc_IsActiveCampaign_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, TSubclassOf<class UCampaign> CallFunc_GetObjectClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TSubclassOf<class UCampaign> CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, ESlateVisibility K2Node_Select_Default);
    void SetInfo(class UTexture2D* CallFunc_GetPicture_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_Format_ReturnValue);
    bool IsActiveCampaign(class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsActiveCampaign_ReturnValue);
    void CreateRequirements(bool ShowText, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, ESlateVisibility K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, class UCampaignRequirement* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UValidWeeklySeedCampaignRequirement* K2Node_DynamicCast_AsValid_Weekly_Seed_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_1, class UCamapaignCompletedRequirement* K2Node_DynamicCast_AsCamapaign_Completed_Requirement, bool K2Node_DynamicCast_bSuccess_2, class UAnyRetiredCampaignRequirement* K2Node_DynamicCast_AsAny_Retired_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_3, class UWeeklyTimerCampaignRequirement* K2Node_DynamicCast_AsWeekly_Timer_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsRequirementMet_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerRankCampaignRequirement* K2Node_DynamicCast_AsPlayer_Rank_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_5, class UCaracterLevelCampaignRequirement* K2Node_DynamicCast_AsCaracter_Level_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_6, class URetirementCampaignRequirement* K2Node_DynamicCast_AsRetirement_Campaign_Requirement, bool K2Node_DynamicCast_bSuccess_7);
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
    void SetData(class UCampaign* Campaign);
    void Refresh();
    void SetFolded(bool IsFolded);
    void Unfold();
    void ExecuteUbergraph_WND_JobsEntry(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, FExecuteUbergraph_WND_JobsEntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, FExecuteUbergraph_WND_JobsEntryK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColors_OutputColor_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_CanStartCampaign_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, ESlateVisibility CallFunc_GetVisibility_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool K2Node_CustomEvent_Yes_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, TSubclassOf<class UCampaign> CallFunc_GetObjectClass_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsActiveCampaign_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_1, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_2, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_3, bool CallFunc_IsActiveCampaign_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, ESlateVisibility K2Node_Select_Default, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_4, bool CallFunc_IsActiveCampaign_ReturnValue_2, FLinearColor CallFunc_MenuColors_OutputColor_4, FSlateColor K2Node_MakeStruct_SlateColor, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class USkipAssignmentPopup_C* CallFunc_OpenSingleUseWindow_ReturnValue_1, bool K2Node_CustomEvent_Yes, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_5, ESlateVisibility Temp_byte_Variable_3, bool CallFunc_VisibleAndEnabled_ReturnValue, class UCampaignManager* CallFunc_GetCampaingManager_ReturnValue_6, bool CallFunc_VisibleAndEnabled_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UCampaign* K2Node_Event_Campaign, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_Select_Default_1, FLinearColor K2Node_MakeStruct_LinearColor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_CustomEvent_IsFolded, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_1, ESlateVisibility K2Node_Select_Default_2);
    void OnBeginUnfolding__DelegateSignature(class UWND_JobsEntry_C* Entry);
};

#endif
