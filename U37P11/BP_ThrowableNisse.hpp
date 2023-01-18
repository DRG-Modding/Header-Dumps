#ifndef UE4SS_SDK_BP_ThrowableNisse_HPP
#define UE4SS_SDK_BP_ThrowableNisse_HPP

class ABP_ThrowableNisse_C : public ABasicDepositableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class USkeletalMeshComponent* SK_Sideburns_Rig_A_Braided;
    class USkeletalMeshComponent* SK_Vanity_Beard006_Prospector;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* TerrainScannerMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    bool CanTriggerSound;

    void AddImpulse(FVector Impulse);
    void Throw(FVector force);
    void ReceiveBeginPlay();
    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void ExecuteUbergraph_BP_ThrowableNisse(int32 EntryPoint);
};

#endif
