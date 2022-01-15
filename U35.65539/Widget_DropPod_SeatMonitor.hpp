#ifndef UE4SS_SDK_Widget_DropPod_SeatMonitor_HPP
#define UE4SS_SDK_Widget_DropPod_SeatMonitor_HPP

class UWidget_DropPod_SeatMonitor_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* NewAnimation;
    UImage* Image_41;
    UImage* Image_155;
    UTextBlock* TextBlock_39;

    void Construct();
    void OnGeneratedMissionChanged(UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_SeatMonitor(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UGeneratedMission* K2Node_CustomEvent_OutGeneratedMission, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDeepDive_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, GeneratedMissionSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FSlateColor K2Node_MakeStruct_SlateColor_1);
}

#endif
