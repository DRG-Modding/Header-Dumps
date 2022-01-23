#ifndef UE4SS_SDK_Widget_DropPod_AltitudeMeter_HPP
#define UE4SS_SDK_Widget_DropPod_AltitudeMeter_HPP

class UWidget_DropPod_AltitudeMeter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AlertBlink;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_146;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_148;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_C_149;
    class UTextBlock* HeaderText;
    class UImage* Image_41;
    class UTextBlock* TextBlockDepth;
    float Depth;

    void UpdateHeader(FText InText);
    void UpdateDepthText(FText CallFunc_MakeLiteralText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FText CallFunc_Conv_FloatToText_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    void SetProgress(float Progress);
    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_AltitudeMeter(int32 EntryPoint, FExecuteUbergraph_Widget_DropPod_AltitudeMeterK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1);
};

#endif
