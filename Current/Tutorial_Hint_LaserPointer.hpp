#ifndef UE4SS_SDK_Tutorial_Hint_LaserPointer_HPP
#define UE4SS_SDK_Tutorial_Hint_LaserPointer_HPP

class UTutorial_Hint_LaserPointer_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    float AfterUseDelay;
    FTutorialHint ReminderHint;

    void ReceiveOnInitialized();
    void OnMarkerPlaced_Event(FVector Location, const FText& Name, FLinearColor Color, class AActor* Target, ELaserPointerTargetType TypeOfTarget);
    void ExecuteUbergraph_Tutorial_Hint_LaserPointer(int32 EntryPoint);
};

#endif
