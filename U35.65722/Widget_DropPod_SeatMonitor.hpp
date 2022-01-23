#ifndef UE4SS_SDK_Widget_DropPod_SeatMonitor_HPP
#define UE4SS_SDK_Widget_DropPod_SeatMonitor_HPP

class UWidget_DropPod_SeatMonitor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* NewAnimation;
    class UImage* Image_41;
    class UImage* Image_155;
    class UTextBlock* TextBlock_39;

    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_SeatMonitor(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, FExecuteUbergraph_Widget_DropPod_SeatMonitorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FSlateColor K2Node_MakeStruct_SlateColor_1);
};

#endif
