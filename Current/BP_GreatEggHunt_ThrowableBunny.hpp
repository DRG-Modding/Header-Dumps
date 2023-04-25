#ifndef UE4SS_SDK_BP_GreatEggHunt_ThrowableBunny_HPP
#define UE4SS_SDK_BP_GreatEggHunt_ThrowableBunny_HPP

class ABP_GreatEggHunt_ThrowableBunny_C : public ABasicDepositableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* TerrainScannerMesh;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    bool CanTriggerSound;

    void AddImpulse(FVector Impulse);
    void Throw(FVector force);
    void ReceiveBeginPlay();
    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void ExecuteUbergraph_BP_GreatEggHunt_ThrowableBunny(int32 EntryPoint);
};

#endif
