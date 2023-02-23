#ifndef UE4SS_SDK_BP_GreatEggHunt_KnockEgg_HPP
#define UE4SS_SDK_BP_GreatEggHunt_KnockEgg_HPP

class ABP_GreatEggHunt_KnockEgg_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* MeshPivot;
    class USceneComponent* Scene;
    class UInstantUsable* InstantUsable;
    bool PlayReact;
    float PlayingReactTimer;
    float ReactSpeed;
    float LastLerp;
    bool LerpingOut;
    FRotator LerpOutStartRot;
    class UMaterialInstance* MaterialUsed;
    TArray<class UMaterialInstance*> Materials;
    int32 AnimationIndex;
    TArray<class UAnimSequence*> Animations;
    bool CanPlay;

    void OnRep_MaterialUsed();
    void OnKnock(class APlayerCharacter* Player);
    void BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveTick(float DeltaSeconds);
    void All_BindGenericDelegate(class APlayerCharacter* Player, bool ShouldReact, int32 AnimationIndex);
    void ReceiveBeginPlay();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_GreatEggHunt_KnockEgg(int32 EntryPoint);
};

#endif
