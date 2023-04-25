#ifndef UE4SS_SDK_BP_GreatEggHunt_HiddenEgg_HPP
#define UE4SS_SDK_BP_GreatEggHunt_HiddenEgg_HPP

class ABP_GreatEggHunt_HiddenEgg_C : public AStaticMeshActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInstantUsable* InstantUsable;
    class USphereComponent* Sphere;
    class UFXSystemAsset* ExplosionParticles;
    float ImpulseStrength;

    void BndEvt__BP_GreatEggHunt_HiddenEgg_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_GreatEggHunt_HiddenEgg(int32 EntryPoint);
};

#endif
