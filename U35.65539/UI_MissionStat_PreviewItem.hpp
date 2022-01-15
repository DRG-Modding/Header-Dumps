#ifndef UE4SS_SDK_UI_MissionStat_PreviewItem_HPP
#define UE4SS_SDK_UI_MissionStat_PreviewItem_HPP

class UUI_MissionStat_PreviewItem_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UUI_MaskedImage_C* ClassIcon;
    UUI_MaskedImage_C* ClassIcon_BG;
    UProgressBar* StatProgressBar;
    UTextBlock* TitleText;
    UTextBlock* ValueText;
    UMissionStat* MissionStat;
    UPlayerCharacterID* characterID;
    float TargetPct;
    float AnimTime;

    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetMissionStat(UMissionStat* MissionStat);
    void ExecuteUbergraph_UI_MissionStat_PreviewItem(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Ease_ReturnValue, UMissionStat* K2Node_CustomEvent_MissionStat, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMin_ReturnValue_1, FLinearColor K2Node_MakeStruct_LinearColor, const FText CallFunc_GetName_ReturnValue, FLinearColor CallFunc_GetColor_ReturnValue, UTexture2D* CallFunc_GetIcon_ReturnValue, float CallFunc_GetStatCount_ReturnValue, float CallFunc_GetStatMaxCount_ReturnValue, FText CallFunc_GetStatCountAsText_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
}

#endif
