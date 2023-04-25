#ifndef UE4SS_SDK_Grenade_BouncyBoomerang_HPP
#define UE4SS_SDK_Grenade_BouncyBoomerang_HPP

class AGrenade_BouncyBoomerang_C : public ABouncyBoomerang
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Boomerang_Trail;
    class UUpgradableGearComponent* UpgradableGear;
    class UParticleSystemComponent* particle_Trail;
    class USceneComponent* LocalPivot;
    class UStaticMeshComponent* MeshComponent;
    class USceneComponent* BoomerangPivot;
    class UAudioComponent* BoomerangFlightSound;
    class UPointLightComponent* PointLight;
    class UDamageComponent* Damage;
    class UDialogDataAsset* Grenade warning;
    class USoundMix* ExplosionMixModifier;
    class APlayerCharacter* Character;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveTick(float DeltaSeconds);
    void OnExploded();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Grenade_BouncyBoomerang(int32 EntryPoint);
};

#endif
