#ifndef UE4SS_SDK_BP_Grenade_NeedleSprayer_HPP
#define UE4SS_SDK_BP_Grenade_NeedleSprayer_HPP

class ABP_Grenade_NeedleSprayer_C : public ANeedleSprayer
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USpotLightComponent* SpotLightCloseShadowCast;
    class UFSDAudioComponent* GrenadeStart;
    class UFSDAudioComponent* GrenadeStop;
    class USpotLightComponent* SpotLight;
    class UStaticMeshComponent* SM_LightProjection;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UHitscanComponent* HitScan;
    class UDamageComponent* Damage;

    void OnSpinningChanged(bool isSpinning);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Grenade_NeedleSprayer(int32 EntryPoint);
};

#endif
