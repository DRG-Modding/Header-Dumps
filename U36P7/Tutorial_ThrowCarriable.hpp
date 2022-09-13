#ifndef UE4SS_SDK_Tutorial_ThrowCarriable_HPP
#define UE4SS_SDK_Tutorial_ThrowCarriable_HPP

class UTutorial_ThrowCarriable_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 PickupCount;

    void ReceiveOnInitialized();
    void OnCarriableChangedEvent(class AActor* carriedActor);
    void OnThrowCarriableProgress(float Progress, float timeToCancel, bool isDone);
    void ExecuteUbergraph_Tutorial_ThrowCarriable(int32 EntryPoint);
};

#endif
