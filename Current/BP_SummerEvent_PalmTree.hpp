#ifndef UE4SS_SDK_BP_SummerEvent_PalmTree_HPP
#define UE4SS_SDK_BP_SummerEvent_PalmTree_HPP

class ABP_SummerEvent_PalmTree_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USkeletalMeshComponent* SkeletalMesh;
    float SlapStrength;

    void BndEvt__BP_SummerEvent_PalmTree_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ImpulseSlapTree(FVector_NetQuantize PlayerPosition);
    void ExecuteUbergraph_BP_SummerEvent_PalmTree(int32 EntryPoint);
};

#endif
