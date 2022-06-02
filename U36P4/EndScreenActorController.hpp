#ifndef UE4SS_SDK_EndScreenActorController_HPP
#define UE4SS_SDK_EndScreenActorController_HPP

class UEndScreenActorController_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPlayerTPAnimInstance* AnimInstance;
    float WalkPlayRate;
    class ABP_MisComp_FXspawner_C* FX;
    FRandomStream RandomStream;
    TSubclassOf<class AActor> AttachmentClass;
    class AActor* AttachmentActor;
    float PosePlayRate;
    FTransform SpawnTransfrom;
    bool IsLooping;
    FEndScreenMove ActiveMoveSet;

    void Reset();
    void SpawnAttachmentIfNeeded();
    void Cleanup();
    void InitFXLights(FTransform SpawnTransform, bool Survived);
    void RandomAnimElement(TArray<class UAnimSequence*>& Array, class UAnimSequence*& Output);
    void ReceiveBeginPlay();
    void Play(class APlayerCharacter* PlayerCharacter, bool SurvivedInPod, FTransform SpawnTransform, const FEndScreenMove ESMoveSet, int32 Seed);
    void PoseFinished(class UAnimMontage* Montage, bool bInterrupted);
    void BreakFinished(class UAnimMontage* Montage, bool bInterrupted);
    void WalkFinished(class UAnimMontage* Montage, bool bInterrupted);
    void PropPoseDone(class UAnimMontage* Montage, bool bInterrupted);
    void CustomEvent_0(class UAnimMontage* Montage, bool bInterrupted);
    void ExecuteUbergraph_EndScreenActorController(int32 EntryPoint);
};

#endif
