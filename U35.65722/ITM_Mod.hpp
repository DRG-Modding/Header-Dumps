#ifndef UE4SS_SDK_ITM_Mod_HPP
#define UE4SS_SDK_ITM_Mod_HPP

class UITM_Mod_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Background;
    class UImage* backgroundOutline;
    class UButton* ButtonAuthorURL;
    class UButton* ButtonImage;
    class UButton* ButtonTitle;
    class UBasic_CheckBox_C* CheckBox_Enabled;
    class UHorizontalBox* ContentBox;
    class UTextBlock* DeprecatedLabel;
    class USizeBox* EntrySizeBox;
    class UImage* Image_Separator;
    class UBasic_Image_C* ImgCrashed;
    class UBasic_Image_C* ImgVersion;
    class UHorizontalBox* LeftBox;
    class UTextBlock* ModDescriptionTextbox;
    class UImage* ModifiedImg;
    class UTextBlock* ModMadeByTextBox;
    class UTextBlock* ModNameTextBox;
    class UTextBlock* ModStatusText;
    class UImage* ModThumbnail;
    class UTextBlock* ModVersionText;
    class USizeBox* ThumbnailSizeBox;
    FString ModName;
    FString ModVersion;
    FString ModURL;
    FString ModCategory;
    EUGCApprovalStatus ModStatus;
    FString ModDescription;
    FString ModAuthor;
    FString ModAuthorURL;
    bool IsModMounted;
    bool PendingModMounting;
    FITM_Mod_COnActivationChanged OnActivationChanged;
    void OnActivationChanged(class UITM_Mod_C* ManipulatedModItem);
    bool IsModDeprecated;
    class UUGCPackage* UGCPackage;
    bool CompactMode;
    bool Crashed;
    bool DependencyRemoved;
    class UBasic_ToolTip_C* VersionTooltip;
    TArray<class UITM_Mod_C*> ParentModItems;
    TArray<class UITM_Mod_C*> DependentModItems;
    bool ShowStatus;
    bool WrongVersion;
    TArray<FString> NamesOfDependencies;

    void SetFromPackage(class UUGCPackage* InPackage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasCrashed_OutHasCrashed, bool CallFunc_Not_PreBool_ReturnValue);
    class UWidget* GetDependencyCheckboxTooltip(class UBasic_ToolTip_C* ToolTip, FText DependencyDisabled, bool CallFunc_IsValid_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, FString CallFunc_JoinStringArray_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_GetOrCreateSingletonWidget_WidgetCreated, class UBasic_ToolTip_C* CallFunc_GetOrCreateSingletonWidget_ReturnValue);
    void FindParentsInArray(TArray<class UWidget*>& PotentialParents, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UITM_Mod_C* K2Node_DynamicCast_AsITM_Mod, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int64 CallFunc_GetIdAsInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_OnModStateDependencyChanged_HasChanged, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int64 CallFunc_GetIdAsInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_1);
    class UWidget* CreateversionTooltip(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FText CallFunc_AsTimeZoneDate_DateTime_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, class UUserWidget* CallFunc_CreateToolTip_OutToolTip, FText CallFunc_Format_ReturnValue, class UBasic_ToolTip_C* K2Node_DynamicCast_AsBasic_Tool_Tip, bool K2Node_DynamicCast_bSuccess);
    void CheckGameVersionBeforeEnable(bool InEnabled, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UBasic_Popup_YesNoPrompt_C* CallFunc_OpenSingleUseWindow_ReturnValue, FCheckGameVersionBeforeEnableK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
    void OnModStateDependencyChanged(bool IsChecked, bool ShouldDisableCheckmark, bool& HasChanged, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2);
    void ResetModEnabled(bool CallFunc_IsValid_ReturnValue);
    void SetModEnabled(bool InEnabled, bool CallFunc_IsValid_ReturnValue);
    void OnOverlayClosed(FString LastURL, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void HasCrashed(bool& OutHasCrashed, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, FString CallFunc_GetIdAsString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue);
    void SetCompactMode(bool SimpleMode, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1);
    void GetStatusToolTip(bool InShowStatus, EUGCApprovalStatus InStatus, FText& OutStatus, EUGCApprovalStatus Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText K2Node_Select_Default);
    void OnThumbnailFetched(class UTexture2DDynamic* ModioModThumbnail);
    void GetStringOrDefault(FString inString, FText InDefault, FString& OutValue, FString Trimmed, bool Temp_bool_Variable, FString CallFunc_TrimTrailing_ReturnValue, FString CallFunc_Trim_ReturnValue, FString CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, FString K2Node_Select_Default);
    void GetTruncatedString(FString inString, int32 InMaxLength, FString& OutResult, bool Temp_bool_Variable, FString CallFunc_Mid_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString K2Node_Select_Default);
    void GetStatusText(bool InShowStatus, EUGCApprovalStatus InStatus, FText& OutStatus, EUGCApprovalStatus Temp_byte_Variable, bool CallFunc_Not_PreBool_ReturnValue, FText Temp_text_Variable, FText Temp_text_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText K2Node_Select_Default);
    void SetColors(FLinearColor CallFunc_MenuColors_OutputColor);
    void SetData(FString InModName, FString InModVersion, FString InModURL, FString InModCategory, EUGCApprovalStatus InModStatus, FString InModDescription, FString InModAuthor, FString InModAuthorURL, bool InModIsMounted, bool InModPendingMounted, bool InModIsDeprecated, bool InDependencyRemoved, bool InShowStatus, bool InCrashed, bool InWrongVersion, float Temp_float_Variable, float Temp_float_Variable_1, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FText CallFunc_GetStatusToolTip_OutStatus, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, FText CallFunc_GetStatusText_OutStatus, FText CallFunc_Conv_StringToText_ReturnValue, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget_1, FString CallFunc_GetStringOrDefault_OutValue, FString CallFunc_GetTruncatedString_OutResult, FText CallFunc_Conv_StringToText_ReturnValue_1, FString CallFunc_GetStringOrDefault_OutValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_StringToText_ReturnValue_2, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, FText CallFunc_Format_ReturnValue, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, FText CallFunc_Format_ReturnValue_1, FString CallFunc_GetTruncatedString_OutResult_1, FText CallFunc_Conv_StringToText_ReturnValue_3, FString CallFunc_GetTruncatedString_OutResult_2, bool Temp_bool_Variable, FText CallFunc_Conv_StringToText_ReturnValue_4, float K2Node_Select_Default, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_GetStringOrDefault_OutValue_2, FText CallFunc_Conv_StringToText_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_3, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget_2);
    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateModifed();
    void BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonAuthorURL_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ButtonModURL_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ButtonImage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ButtonImage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ButtonImage_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void Refresh();
    void SetModActivationChanged(bool IsChecked);
    void SetModActivationChangedForceParents(const bool IsChecked);
    void RequestDependencyNames();
    void ExecuteUbergraph_ITM_Mod(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool K2Node_Event_IsDesignTime, class AFSDGameModeSpaceRig* K2Node_DynamicCast_AsFSDGame_Mode_Space_Rig, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool K2Node_ComponentBoundEvent_IsChecked, bool CallFunc_IsHovered_ReturnValue, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, FExecuteUbergraph_ITM_ModK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_ModK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_CustomEvent_IsChecked_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const bool K2Node_CustomEvent_IsChecked, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, class UITM_Mod_C* CallFunc_Array_Get_Item, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class UTexture2DDynamic* CallFunc_K2_RequestModThumbnail_outThumbnail, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_1, int64 CallFunc_Array_Get_Item_1, FString CallFunc_Conv_Int64ToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UModioModInfoWrapper* CallFunc_K2_RequestModMetaData_outModInfo, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_Array_AddUnique_ReturnValue);
    void OnActivationChanged__DelegateSignature(class UITM_Mod_C* ManipulatedModItem);
};

#endif
