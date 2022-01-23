#ifndef UE4SS_SDK_HUD_Modding_Downloads_HPP
#define UE4SS_SDK_HUD_Modding_Downloads_HPP

class UHUD_Modding_Downloads_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimOpenClose;
    class UVerticalBox* EntryBox;
    class UTextBlock* TextHeadline;
    FString PreviewName;
    TArray<FString> PreviewPendingNames;
    bool PreviewDownloading;
    int32 PreviewProgress;
    int32 PreviewTotal;
    FTimerHandle HideHandle;
    bool IsOpen;
    bool Downloading;
    class UHUD_Modding_Downloads_Entry_C* CurrentEntry;
    TMap<class FString, class EUGCPackageError> PreviewFailed;
    bool IsDesignTime;

    void ShowFailedToInstall(TMap<class FString, class EUGCPackageError> InFailed, FString Name, TMap<class FString, class EUGCPackageError> Failed, TArray<FString>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, FString CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, TMap<class FString, class EUGCPackageError> K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, EUGCPackageError CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void SetOpen(bool InIsOpen, bool CallFunc_Not_PreBool_ReturnValue, FSetOpenK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue);
    void GetEntry(FString InModName, class UHUD_Modding_Downloads_Entry_C*& OutEntry, FString& OutName, class UHUD_Modding_Downloads_Entry_C* Entry, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Variable, class UHUD_Modding_Downloads_Entry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBoxEx_OutSlot, class UVerticalBox* CallFunc_AddChildToVerticalBoxEx_OutVerticalBox, class UHUD_Modding_Downloads_Entry_C* CallFunc_AddChildToVerticalBoxEx_ReturnValue, FString CallFunc_GetModName_ModName, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UHUD_Modding_Downloads_Entry_C* K2Node_DynamicCast_AsHUD_Modding_Downloads_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
    void SetDownloadProgress(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total, class UHUD_Modding_Downloads_Entry_C* Entry, FString Pending, class UHUD_Modding_Downloads_Entry_C* CallFunc_GetEntry_OutEntry, FString CallFunc_GetEntry_OutName);
    void Construct();
    void OnErrorInstalling(FString ModName, EUGCPackageError ErrorType);
    void PreConstruct(bool IsDesignTime);
    void OnDownloadProgress(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total);
    void OnAnimFinished();
    void HideFromHUD();
    void Destruct();
    void Simulate();
    void OnDownloadFinished(FString ModName, FString ModId);
    void ExecuteUbergraph_HUD_Modding_Downloads(int32 EntryPoint, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, FString K2Node_CustomEvent_ModName_1, EUGCPackageError K2Node_CustomEvent_ErrorType, class UHUD_Modding_Downloads_Entry_C* CallFunc_GetEntry_OutEntry, FString CallFunc_GetEntry_OutName, bool K2Node_Event_IsDesignTime, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FString K2Node_CustomEvent_Name, const TArray<FString>& K2Node_CustomEvent_ModsPendingDownload, bool K2Node_CustomEvent_Downloading, int32 K2Node_CustomEvent_progress, int32 K2Node_CustomEvent_Total, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, FExecuteUbergraph_HUD_Modding_DownloadsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_6, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_8, FExecuteUbergraph_HUD_Modding_DownloadsK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, class UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_9, FExecuteUbergraph_HUD_Modding_DownloadsK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_HUD_Modding_DownloadsK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FString K2Node_CustomEvent_ModName, FString K2Node_CustomEvent_ModId, class UHUD_Modding_Downloads_Entry_C* CallFunc_GetEntry_OutEntry_1, FString CallFunc_GetEntry_OutName_1);
};

#endif
