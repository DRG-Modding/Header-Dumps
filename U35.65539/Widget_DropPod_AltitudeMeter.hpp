#ifndef UE4SS_SDK_Widget_DropPod_AltitudeMeter_HPP
#define UE4SS_SDK_Widget_DropPod_AltitudeMeter_HPP

class UWidget_DropPod_AltitudeMeter_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AlertBlink;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_146;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_148;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_149;
    UTextBlock* HeaderText;
    UImage* Image_41;
    UTextBlock* TextBlockDepth;
    float Depth;

    void UpdateHeader(FText InText);
    void UpdateDepthText(FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void SetProgress(float Progress);
    void Construct();
    void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_AltitudeMeter(int32 EntryPoint, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1);
}

#endif
