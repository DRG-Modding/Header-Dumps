#ifndef UE4SS_SDK_BP_GreatEggHunt_EggWithBow_HPP
#define UE4SS_SDK_BP_GreatEggHunt_EggWithBow_HPP

class ABP_GreatEggHunt_EggWithBow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* Sphere;
    class UInstantUsable* InstantUsable;
    class URotatingMovementComponent* RotatingMovement;
    class USkeletalMeshComponent* SK_GreatEggHunt_EggBow;
    TArray<FColor> Colors_Bows;
    TArray<class UTexture*> Textures_Eggs;
    FLinearColor UsedColor;
    float RotationSpeed;
    float SlapStrength;
    int32 RandomSeed;
    FRandomStream RandomStream;

    void OnRep_RandomSeed();
    void ReceiveBeginPlay();
    void BndEvt__BP_SummerEvent_PalmTree_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void AddImpulseFromLocation(FVector_NetQuantize playerPos);
    void ExecuteUbergraph_BP_GreatEggHunt_EggWithBow(int32 EntryPoint);
};

#endif
