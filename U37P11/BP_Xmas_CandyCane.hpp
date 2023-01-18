#ifndef UE4SS_SDK_BP_Xmas_CandyCane_HPP
#define UE4SS_SDK_BP_Xmas_CandyCane_HPP

class ABP_Xmas_CandyCane_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* ImpactSound;
    class UFSDAudioComponent* MovingSound;
    class UBoxComponent* Box;
    class UInstantUsable* InstantUsable;
    class USkeletalMeshComponent* SkeletalMesh;
    float SlapStrength;
    int32 RandomSeed;
    FRandomStream RandomStream;
    float BowChance;
    TArray<class UMaterialInstance*> BowMaterials;
    bool Wiggling;
    FVector LastVelocity;
    float LastBiggestVelocityLength;
    bool CanPlay;

    void OnRep_RandomSeed();
    void ImpulseSlapTree(FVector_NetQuantize PlayerPosition);
    void ReceiveBeginPlay();
    void BndEvt__BP_SummerEvent_PalmTree_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void All_AddForce(FVector Position, float ForceScale);
    void OnWiggle(float Strength);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_Xmas_CandyCane_SkeletalMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Xmas_CandyCane(int32 EntryPoint);
};

#endif
