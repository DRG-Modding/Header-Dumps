#ifndef UE4SS_SDK_PRJ_FlareGun_Projectile01_HPP
#define UE4SS_SDK_PRJ_FlareGun_Projectile01_HPP

class APRJ_FlareGun_Projectile01_C : public AFlareGunProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* Lit_Fuse_Cue;
    class UDamageComponent* Damage1;
    class UStaticMeshComponent* Arrow;
    class USpotLightComponent* SpotLight_Shadow_3;
    class USpotLightComponent* SpotLight_Shadow_2;
    class USpotLightComponent* SpotLight_Shadow_1;
    class UTerrainDetectComponent* TerrainDetect;
    class UParticleSystemComponent* ParticleSystem;
    class UStaticMeshComponent* StaticMesh;
    class UPointLightComponent* PointLight_Dead;
    class UPointLightComponent* PointLight_NoShadow;
    class UBoxComponent* Box;
    float Light_Anim_ShadowMultiplier_7569FDBD44600A7270E9429A8EC6FB81;
    float Light_Anim_NewTrack_0_7569FDBD44600A7270E9429A8EC6FB81;
    TEnumAsByte<ETimelineDirection::Type> Light_Anim__Direction_7569FDBD44600A7270E9429A8EC6FB81;
    class UTimelineComponent* Light_Anim;
    float LightIntensity_Point;
    float Damage;
    FScaledEffect DamageEffect;
    float LightIntensity_Spot;
    bool bFallToGround;
    FHitResult ImpactHit;
    class UAudioComponent* FlareBurnAudio;

    void OnRep_bFallToGround();
    void SpawnImpact();
    void UpdateShadowRadius();
    void StartFadeOut(float& Time);
    void GetHealthBaseComponentFromActor(class AActor* Actor, class UHealthComponentBase*& Health);
    void FallToGround();
    void Light_Anim__FinishedFunc();
    void Light_Anim__UpdateFunc();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void OnDroppodImpact(class ATeamTransport* DropPod);
    void HideAll();
    void OnFlareExtinguish();
    void OnUpdateShadowRadius();
    void ActivateFlare();
    void ExecuteUbergraph_PRJ_FlareGun_Projectile01(int32 EntryPoint);
};

#endif
