#ifndef UE4SS_SDK_ITM_Mod_Joining_HPP
#define UE4SS_SDK_ITM_Mod_Joining_HPP

class UITM_Mod_Joining_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetSwitcher* HasMetaData_Switcher;
    class UWidgetSwitcher* Installed_Switcher;
    class UButton* LinkButton;
    class UBasic_Label_C* Mod_Approval;
    class UBasic_Label_C* Mod_Name;
    class UUI_ModdingProgressBar_C* ModdingProgressBar;
    class UCircularThrobber* ModName_Loading;
    FString ModId;
    bool DownloadFinished;
    FITM_Mod_Joining_COnMetaDataLoaded OnMetaDataLoaded;
    void OnMetaDataLoaded(FString ModId, EUGCApprovalStatus ModStatus);
    FString ModName;
    FString ModURL;
    EUGCApprovalStatus ApprovalStatus;
    bool ModInstalled;
    class UModioModInfoWrapper* MetaData;
    TEnumAsByte<ENUM_MenuColors::Type> NameColor;

    void Update(bool Temp_bool_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, EUGCApprovalStatus Temp_byte_Variable_2, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_GetTotal_Total, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FText K2Node_Select_Default_1, FText CallFunc_Conv_StringToText_ReturnValue, int32 K2Node_Select_Default_2);
    void SetMetaData(class UModioModInfoWrapper* InModMetaData, FString Temp_string_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsModInstalledImprecise_ReturnValue, class UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsModInstalled_ReturnValue, FString K2Node_Select_Default);
    class UWidget* Get_LinkButton_ToolTip(class UTOOLTIP_Mod_Joining_C* ToolTip, bool CallFunc_IsValid_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UTOOLTIP_Mod_Joining_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void OnDownloadExtractModFinished(FString ModName, FString ModId, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void OnDownloadExtractMod(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total, FText Action, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Construct();
    void BndEvt__LinkButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void OnOverlayClosed(FString LastURL);
    void Destruct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__LinkButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__LinkButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ITM_Mod_Joining(int32 EntryPoint, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, FExecuteUbergraph_ITM_Mod_JoiningK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FString K2Node_CustomEvent_LastURL, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, FExecuteUbergraph_ITM_Mod_JoiningK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, FExecuteUbergraph_ITM_Mod_JoiningK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_IsDesignTime, FExecuteUbergraph_ITM_Mod_JoiningK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsHovered_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, class UModioModInfoWrapper* CallFunc_K2_RequestModMetaData_outModInfo, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_6, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_3, FExecuteUbergraph_ITM_Mod_JoiningK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4);
    void OnMetaDataLoaded__DelegateSignature(FString ModId, EUGCApprovalStatus ModStatus);
};

#endif
