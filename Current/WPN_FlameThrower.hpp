#ifndef UE4SS_SDK_WPN_FlameThrower_HPP
#define UE4SS_SDK_WPN_FlameThrower_HPP

class AWPN_FlameThrower_C : public AFlameThrowerItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* TP_Mag;
    class UFirstPersonStaticMeshComponent* FP_Mag;
    class UWeaponImpactComponent* WeaponImpact;
    class UParticleSystemComponent* ParticleSystemR;
    class UParticleSystemComponent* ParticleSystemL;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UFirstPersonPointLightComponent* FirstPersonPointLight;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystemR;
    class UFirstPersonParticleSystemComponent* FirstPersonParticleSystemL;
    class UFirstPersonStaticMeshComponent* FirstPerson_Gauge;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UPointLightComponent* MuzzleLight;
    class UCrosshairAggregator* CrosshairAggregator;

    void SetTorchTimeoutHack();
    class UStaticMeshComponent* Receive_GetTPAnimationEventMesh();
    class UFirstPersonStaticMeshComponent* Receive_GetFPAnimationEventMesh();
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void RecieveEquipped();
    void RecieveUnequipped();
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void Recieve_UpdateMeshses(bool IsFirstPerson);
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void BndEvt__WeaponImpact_K2Node_ComponentBoundEvent_1_HightAccelerationSignature__DelegateSignature();
    void OnSkinChanged(class USkinEffect* Skin);
    void ExecuteUbergraph_WPN_FlameThrower(int32 EntryPoint);
};

#endif
