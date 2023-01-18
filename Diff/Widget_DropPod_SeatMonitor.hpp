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
    void ExecuteUbergraph_Widget_DropPod_SeatMonitor(int32 EntryPoint);
};

#endif
