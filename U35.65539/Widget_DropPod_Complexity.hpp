#ifndef UE4SS_SDK_Widget_DropPod_Complexity_HPP
#define UE4SS_SDK_Widget_DropPod_Complexity_HPP

class UWidget_DropPod_Complexity_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    UVerticalBox* DeepDive_MissionData;
    UImage* Image_41;
    UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    UVerticalBox* NoDeepDive_MissionData;
    UProgressBar* ProgressBar_0;
    UProgressBar* ProgressBar_1;
    UProgressBar* ProgressBar_2;
    UProgressBar* ProgressBar_3;
    UTextBlock* TextBlock_0;
    UTextBlock* TextBlock_1;
    UTextBlock* TextBlock_2;
    UTextBlock* TextBlock_3;
    UTextBlock* TextBlock_4;
    UTextBlock* TextBlock_5;
    UTextBlock* TextBlock_6;
    UWarningBox_C* WarningBox;
    UWarningBox_C* WarningBox_C_1;
    UWarningBox_C* WarningBox_C_2;
    UWarningBox_C* WarningBox_C_3;
    UWarningBox_C* WarningBox_C_4;
    UWarningBox_C* WarningBox_C_5;
    UWidgetSwitcher* WidgetSwitcher_0;
    float TimePassed;
    int32 missionLength;
    int32 MissionComplexity;

    void AdjustBar(float InputPin, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_7, float CallFunc_Divide_FloatFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void SetGeneratedMission(UGeneratedMission* In Mission, bool CallFunc_IsValid_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsDeepDive_ReturnValue, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, UMissionDNA* CallFunc_GetMissionDNA_ReturnValue_1);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_Complexity(int32 EntryPoint, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
}

#endif
