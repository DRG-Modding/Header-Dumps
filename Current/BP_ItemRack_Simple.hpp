#ifndef UE4SS_SDK_BP_ItemRack_Simple_HPP
#define UE4SS_SDK_BP_ItemRack_Simple_HPP

class ABP_ItemRack_Simple_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* StaticMesh;
    class UInstantUsable* InstantUsable;
    class UBoxComponent* BoxCollider;
    class UCapsuleComponent* Capsule;
    class USceneComponent* DefaultSceneRoot;
    TSoftClassPtr<UObject> itemClass;

    void BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveBeginPlay();
    void BndEvt__BP_ItemRack_Simple_InstantUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void ExecuteUbergraph_BP_ItemRack_Simple(int32 EntryPoint);
};

#endif
