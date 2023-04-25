#ifndef UE4SS_SDK_BP_GreatEggHunt_ThrowableEggItem_HPP
#define UE4SS_SDK_BP_GreatEggHunt_ThrowableEggItem_HPP

class ABP_GreatEggHunt_ThrowableEggItem_C : public AHolidayThrowableItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UMaterialInstance*> Materials;
    class UMaterialInstance* UsedMaterial;
    class UMaterialInstance* OnSpawnMaterial;
    class UFXSystemAsset* OnExplosionParticles;
    float ImpulseStrength;

    void OnRep_UsedMaterial();
    FVector GetThrowLocation();
    void ReceiveItemThrown(class AThrowableActor* thrownActor);
    void RemovedFromInventory(class ACharacter* oldCharacter);
    void OnReceiveEquippedFinished();
    void RecieveEquipped();
    void ReceiveItemSpawned(class AThrowableActor* thrownActor);
    void ExecuteUbergraph_BP_GreatEggHunt_ThrowableEggItem(int32 EntryPoint);
};

#endif
