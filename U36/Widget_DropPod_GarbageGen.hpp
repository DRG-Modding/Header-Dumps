#ifndef UE4SS_SDK_Widget_DropPod_GarbageGen_HPP
#define UE4SS_SDK_Widget_DropPod_GarbageGen_HPP

class UWidget_DropPod_GarbageGen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_41;
    class UScrollBox* ScrollBox_0;
    class UTextBlock* TextBlock_0;
    float TimePassed;
    TArray<FString> Operations;
    bool NewOperation;
    int32 CurrentOperation;
    int32 Steps;
    int32 CurrentStep;
    float OperationDelay;

    void GetNewOperation();
    void DoOperation();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_GarbageGen(int32 EntryPoint);
};

#endif
