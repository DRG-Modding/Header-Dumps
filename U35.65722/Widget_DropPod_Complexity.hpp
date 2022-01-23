#ifndef UE4SS_SDK_Widget_DropPod_Complexity_HPP
#define UE4SS_SDK_Widget_DropPod_Complexity_HPP

class UWidget_DropPod_Complexity_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_0;
    class UVerticalBox* DeepDive_MissionData;
    class UImage* Image_41;
    class UITM_MisSel_DotMarker_CaveDifficulty_C* ITM_MisSel_DotMarker_CaveDifficulty;
    class UITM_MisSel_DotMarker_MissionLength_C* ITM_MisSel_DotMarker_MissionLength;
    class UVerticalBox* NoDeepDive_MissionData;
    class UProgressBar* ProgressBar_0;
    class UProgressBar* ProgressBar_1;
    class UProgressBar* ProgressBar_2;
    class UProgressBar* ProgressBar_3;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_1;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_3;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_5;
    class UTextBlock* TextBlock_6;
    class UWarningBox_C* WarningBox;
    class UWarningBox_C* WarningBox_C_1;
    class UWarningBox_C* WarningBox_C_2;
    class UWarningBox_C* WarningBox_C_3;
    class UWarningBox_C* WarningBox_C_4;
    class UWarningBox_C* WarningBox_C_5;
    class UWidgetSwitcher* WidgetSwitcher_0;
    float TimePassed;
    int32 missionLength;
    int32 MissionComplexity;

    void AdjustBar(float InputPin, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_7, float CallFunc_Divide_FloatFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
    void SetGeneratedMission(class UGeneratedMission* In Mission, bool CallFunc_IsValid_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, bool CallFunc_IsDeepDive_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue, class UMissionDNA* CallFunc_GetMissionDNA_ReturnValue_1);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_Complexity(int32 EntryPoint, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, FExecuteUbergraph_Widget_DropPod_ComplexityK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1);
};

#endif
