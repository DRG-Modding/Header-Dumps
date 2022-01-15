#ifndef UE4SS_SDK_ITM_PendingMod_HPP
#define UE4SS_SDK_ITM_PendingMod_HPP

class UITM_PendingMod_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Background;
    UImage* Image_Separator;
    UBorder* MainBorder;
    UUI_ModdingProgressBar_C* ModdingProgressBar;
    UTextBlock* ModNameTextBox;
    UTextBlock* PendingLongText;
    UTextBlock* PendingShortText;
    UWidgetSwitcher* StateSwitcher;
    FString ModName;
    FITM_PendingMod_COnActivationChanged OnActivationChanged;
    void OnActivationChanged();
    bool PendingInstall;

    void OnDownloadExtractProgress(FString Name, const TArray<FString>& ModsPendingDownload, bool Downloading, int32 Progress, int32 Total, bool Temp_bool_Variable, FText Temp_text_Variable, FText Temp_text_Variable_1, FText K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void SetColors(FLinearColor CallFunc_MenuColors_OutputColor);
    void SetData(FString InModName, bool InPendingInstall, bool Temp_bool_Variable, FText CallFunc_Conv_StringToText_ReturnValue, FText Temp_text_Variable, FText Temp_text_Variable_1, bool Temp_bool_Variable_1, FText Temp_text_Variable_2, FText Temp_text_Variable_3, FText K2Node_Select_Default, FText K2Node_Select_Default_1);
    void PreConstruct(bool IsDesignTime);
    void Destruct();
    void ExecuteUbergraph_ITM_PendingMod(int32 EntryPoint, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, UGCModProgress__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUGCSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, UGCModProgress__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
    void OnActivationChanged__DelegateSignature();
}

#endif
