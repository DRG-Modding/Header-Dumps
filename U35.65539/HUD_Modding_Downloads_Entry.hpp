#ifndef UE4SS_SDK_HUD_Modding_Downloads_Entry_HPP
#define UE4SS_SDK_HUD_Modding_Downloads_Entry_HPP

class UHUD_Modding_Downloads_Entry_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    USizeBox* ContentSizeBox;
    UImage* Img_Completed;
    UBasic_Label_C* LabelModName;
    UUI_ModdingProgressBar_C* ModdingProgressBar;
    FString ModName;
    float Progress;
    FString PreviewName;
    bool PreviewDownloading;
    int32 PreviewDownloaded;
    int32 PreviewTotal;
    int32 Downloaded;
    int32 Total;
    bool Downloading;
    bool IsFinished;

    void GetIsFinished(bool& IsFinished);
    void Error(EUGCPackageError InErrorType);
    void Finish();
    void GetProgress(float& Progress);
    void GetModName(FString& ModName);
    void SetProgress(FString InModName, bool InDownloading, int32 InDownloaded, int32 InTotal, bool Temp_bool_Variable, uint8 Temp_byte_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, uint8 K2Node_Select_Default, FText CallFunc_Conv_StringToText_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_Modding_Downloads_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
