#ifndef UE4SS_SDK_WPN_Extractor_HPP
#define UE4SS_SDK_WPN_Extractor_HPP

class AWPN_Extractor_C : public AExtractorItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* TerrainScannerMesh;
    class UCapsuleComponent* UsableCapsule;
    class UInstantUsable* PickupUsable;
    bool Attaching;
    FVector ThrowVelocity;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void BndEvt__PickupUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void OnThrown(FVector Direction);
    void RecieveEquipped();
    void RecieveUnequipped();
    void Drop(FVector Impulse, FVector Location);
    void Cheat_Fill();
    void ExecuteUbergraph_WPN_Extractor(int32 EntryPoint);
};

#endif
