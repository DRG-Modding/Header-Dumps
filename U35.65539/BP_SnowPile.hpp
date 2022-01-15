#ifndef UE4SS_SDK_BP_SnowPile_HPP
#define UE4SS_SDK_BP_SnowPile_HPP

class ABP_SnowPile_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UInstantUsable* InstantUsable;
    USphereComponent* Sphere;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* DefaultSceneRoot;

    void BndEvt__InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_SnowPile(int32 EntryPoint, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, UBP_SnowballItem_C* CallFunc_PickupItem_ReturnValue);
}

#endif
