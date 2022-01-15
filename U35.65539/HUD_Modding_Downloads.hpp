#ifndef UE4SS_SDK_HUD_Modding_Downloads_HPP
#define UE4SS_SDK_HUD_Modding_Downloads_HPP

class UHUD_Modding_Downloads_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimOpenClose;
    UVerticalBox* EntryBox;
    UTextBlock* TextHeadline;
    FString PreviewName;
    TArray<FString> PreviewPendingNames;
    bool PreviewDownloading;
    int32 PreviewProgress;
    int32 PreviewTotal;
    FTimerHandle HideHandle;
    bool IsOpen;
    bool Downloading;
    UHUD_Modding_Downloads_Entry_C* CurrentEntry;
    TMap<FString, EUGCPackageError> PreviewFailed;
    bool IsDesignTime;

    void ShowFailedToInstall(TMap<FString, EUGCPackageError> InFailed, FString Name, TMap<FString, EUGCPackageError> Failed, TArray<FString>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, TMap<FString, EUGCPackageError> K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, EUGCPackageError CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void SetOpen(bool InIsOpen, bool CallFunc_Not_PreBool_ReturnValue, TimerDynamicDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue);
    void GetEntry(FString InModName, UHUD_Modding_Downloads_Entry_C*& OutEntry, FString& OutName, UHUD_Modding_Downloads_Entry_C* Entry, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, UHUD_Modding_Downloads_Entry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, UHUD_Modding_Downloads_Entry_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue, FString CallFunc_GetModName_ModName, bool CallFunc_EqualEqual_StrStr_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, UHUD_Modding_Downloads_Entry_C* K2Node_DynamicCast_AsHUD_Modding_Downloads_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void SetDownloadProgress(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total, UHUD_Modding_Downloads_Entry_C* Entry, FString Pending, UHUD_Modding_Downloads_Entry_C* CallFunc_GetEntry_OutEntry, FString CallFunc_GetEntry_OutName);
    void Construct();
    void OnErrorInstalling(FString ModName, EUGCPackageError ErrorType);
    void PreConstruct(bool IsDesignTime);
    void OnDownloadProgress(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total);
    void OnAnimFinished();
    void HideFromHUD();
    void Destruct();
    void Simulate();
    void OnDownloadFinished(FString ModName, FString ModId);
    void ExecuteUbergraph_HUD_Modding_Downloads(int32 EntryPoint, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FString K2Node_CustomEvent_ModName_1, EUGCPackageError K2Node_CustomEvent_ErrorType, UHUD_Modding_Downloads_Entry_C* CallFunc_GetEntry_OutEntry, FString CallFunc_GetEntry_OutName, bool K2Node_Event_IsDesignTime, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FString K2Node_CustomEvent_Name, const TArray<FString>& K2Node_CustomEvent_ModsPendingDownload, bool K2Node_CustomEvent_Downloading, int32 K2Node_CustomEvent_progress, int32 K2Node_CustomEvent_Total, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, UGModProgressDone__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_6, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_8, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_9, UGCModProgress__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, UGInstallError__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, FString K2Node_CustomEvent_ModName, FString K2Node_CustomEvent_ModId, UHUD_Modding_Downloads_Entry_C* CallFunc_GetEntry_OutEntry_1, FString CallFunc_GetEntry_OutName_1);
}

#endif
