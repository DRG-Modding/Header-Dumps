#ifndef UE4SS_SDK_BP_Xmas_CandyCane_HPP
#define UE4SS_SDK_BP_Xmas_CandyCane_HPP

class ABP_Xmas_CandyCane_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USkeletalMeshComponent* SkeletalMesh;
    float SlapStrength;
    int32 RandomSeed;
    FRandomStream RandomStream;
    float BowChance;
    TArray<class UMaterialInstance*> BowMaterials;

    void OnRep_RandomSeed();
    void BndEvt__BP_SummerEvent_PalmTree_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ImpulseSlapTree(FVector_NetQuantize PlayerPosition);
    void ReceiveBeginPlay();
    void All_AddForce(FVector Position, float ForceScale);
    void ExecuteUbergraph_BP_Xmas_CandyCane(int32 EntryPoint);
};

#endif
