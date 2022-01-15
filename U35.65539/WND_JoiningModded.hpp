#ifndef UE4SS_SDK_WND_JoiningModded_HPP
#define UE4SS_SDK_WND_JoiningModded_HPP

class UWND_JoiningModded_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    URichTextSizable* AboutToJoinModdedText;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_PasswordField_C* Basic_PasswordField;
    UBlurBackground_C* BlurBackground;
    UBorder* Border_0;
    UBasic_ButtonScalable2_C* BTN_Cancel;
    UBasic_ButtonScalable2_C* BTN_Join;
    URichTextSizable* DisclaimerModded;
    UWidgetSwitcher* HasMods_Switcher;
    UTextBlock* Header;
    UImage* Image_122;
    UVerticalBox* ModsInstalledBox;
    UVerticalBox* ModsPendingBox;
    UCircularThrobber* SubscribtionLoading;
    FBlueprintSessionResult Session;
    FWND_JoiningModded_CJoinModdedServer JoinModdedServer;
    void JoinModdedServer(FBlueprintSessionResult Session, FString Password);
    FWND_JoiningModded_COnCancel OnCancel;
    void OnCancel();
    bool EmptyMods;
    TArray<FString> ModsToInstall;
    TArray<FString> HostMods;
    TArray<FString> ModsToEnable;
    bool DependencyRecusivenessDone;
    TArray<FString> DependencyMods;
    FString DependencyRequestedMod;

    void UpdateHasModsInstalled(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 K2Node_Select_Default);
    void OnGottonModDependencies(const TArray<FString>& ModIds, FString ParentMod, bool ModInstalled, FString ModId, bool Temp_bool_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FString CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_Mod_Joining_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, bool CallFunc_IsModInstalled_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_3, UPanelWidget* K2Node_Select_Default, UPanelSlot* CallFunc_AddChild_ReturnValue);
    void UnbindEvents(UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, UGInstallError__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, UGCAuthenticatedModioUser__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UGModProgressDone__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2);
    void HiddenModsBlock(bool Hidden, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1);
    void OnFetchedTermsOfUse(UModioTermsWrapper* Terms, FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, OnAnswer__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UDialog_Modding_TermsAndConditions_C* CallFunc_OpenSingleUseWindow_ReturnValue);
    void StartJoinSession(UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_FSDIsPasswordRequired_ReturnValue, FText CallFunc_GetPassword_Password, FString CallFunc_Conv_TextToString_ReturnValue);
    void OnDownloadFinished(FString ModName, FString ModId, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
    void SubscribeToMods(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, UGModProgressDone__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_K2_RequestSubscribe_ReturnValue);
    void SetDefaultModDescription(FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1);
    void SetColors(FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2);
    void SetModNames(UITM_Mod_Joining_C* Widget, FString ModId, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UITM_Mod_Joining_C* CallFunc_Create_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, bool CallFunc_IsModInstalled_ReturnValue, OnMetaDataLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText CallFunc_MakeLiteralText_ReturnValue, FText CallFunc_MakeLiteralText_ReturnValue_1, bool Temp_bool_Variable, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, UPanelWidget* K2Node_Select_Default, UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<FString>& CallFunc_FSDGetModsInstalled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue);
    void SetSession(FBlueprintSessionResult Session, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_FSDIsModdedSandboxServer_ReturnValue, bool CallFunc_FSDHasHiddenModsNotInstalledOnClient_ReturnValue, bool CallFunc_FSDIsPasswordRequired_ReturnValue, UGInstallError__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, OnModdedSaveCancelled__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ESlateVisibility K2Node_Select_Default, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UPopup_ModdedSave_C* CallFunc_OpenSingleUseWindow_ReturnValue, bool CallFunc_GetIsModded_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void BndEvt__Button_Close_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Join_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ReceiveCloseCommand();
    void ReceiveOkCommand();
    void AnsweredTerms(bool Agree);
    void ReloadWorldAndJoin();
    void OnModioUserAuthenticated(bool Authenticated);
    void Construct();
    void HasHiddenMods();
    void OnModMetaDataLoaded(FString ModId, EUGCApprovalStatus ModStatus);
    void Cancel();
    void RequestDependenciesOfDependencies();
    void OnErrorInstallingMod(FString ModName, EUGCPackageError ErrorType);
    void ExecuteUbergraph_WND_JoiningModded(int32 EntryPoint, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool K2Node_Event_IsDesignTime, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_CustomEvent_Agree, int32 CallFunc_Array_Length_ReturnValue_1, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool K2Node_CustomEvent_Authenticated, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGCAuthenticatedModioUser__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, UModioTermsWrapper* CallFunc_K2_RequestTermsOfUse_outTerms, bool CallFunc_IsValid_ReturnValue, FString K2Node_CustomEvent_ModId, EUGCApprovalStatus K2Node_CustomEvent_ModStatus, bool CallFunc_NotEqual_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, bool CallFunc_K2_RequestHasHostHiddenMods_outHidden, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FString CallFunc_Array_Get_Item, int32 CallFunc_Array_AddUnique_ReturnValue, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_3, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_IsModInstalled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_6, FString CallFunc_Array_Get_Item_1, UUGCPackage* CallFunc_TryGetPackageFromId_ReturnValue, bool CallFunc_MountUGCPackage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_GetIsEnabled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_Array_GetRandom_Item, FString CallFunc_K2_RequestModDependencyList_outParentId, TArray<FString>& CallFunc_K2_RequestModDependencyList_outModIds, bool CallFunc_Array_RemoveItem_ReturnValue, FString K2Node_CustomEvent_ModName, EUGCPackageError K2Node_CustomEvent_ErrorType, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, UWND_JoinFailed_C* CallFunc_Create_ReturnValue, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_8, FString CallFunc_K2_RequestModDependencyList_outParentId_1, TArray<FString>& CallFunc_K2_RequestModDependencyList_outModIds_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_4, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_6, UUGCRegistry* CallFunc_GetUGCRegistry_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasOutstadingRequestOfType_ReturnValue);
    void OnCancel__DelegateSignature();
    void JoinModdedServer__DelegateSignature(FBlueprintSessionResult Session, FString Password);
}

#endif
