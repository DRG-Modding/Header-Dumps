#ifndef UE4SS_SDK_BP_GreatEggHunt_BunnyPlush_HPP
#define UE4SS_SDK_BP_GreatEggHunt_BunnyPlush_HPP

class ABP_GreatEggHunt_BunnyPlush_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* ImpulseLocation;
    class UInstantUsable* InstantUsable;
    class USphereComponent* Usable;
    class USkeletalMeshComponent* SkeletalMesh;
    FRandRange RandomRange;

    void BndEvt__BP_GreatEggHunt_BunnyPlush_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void All_PlayPet();
    void ExecuteUbergraph_BP_GreatEggHunt_BunnyPlush(int32 EntryPoint);
};

#endif
