#ifndef UE4SS_SDK_BP_Halloween_Ghost_HPP
#define UE4SS_SDK_BP_Halloween_Ghost_HPP

class ABP_Halloween_Ghost_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* GhostLaugh_Cue;
    class UInstantUsable* InstantUsable;
    class UBoxComponent* SlapBox;
    class USkeletalMeshComponent* SK_Halloween_Ghost_01;
    class USceneComponent* DefaultSceneRoot;
    float SlapStrength;

    void BndEvt__BP_SummerEvent_PalmTree_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ImpulseSlapGhost(FVector_NetQuantize PlayerPosition);
    void ExecuteUbergraph_BP_Halloween_Ghost(int32 EntryPoint);
};

#endif
