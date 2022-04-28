#ifndef UE4SS_SDK_BP_SnowPile_HPP
#define UE4SS_SDK_BP_SnowPile_HPP

class ABP_SnowPile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UInstantUsable* InstantUsable;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_SnowPile(int32 EntryPoint);
};

#endif
