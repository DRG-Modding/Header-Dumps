#ifndef UE4SS_SDK_PRJ_ChargedBlasterShot_HPP
#define UE4SS_SDK_PRJ_ChargedBlasterShot_HPP

class APRJ_ChargedBlasterShot_C : public AChargedProjectile
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UDamageComponent* TCFDamage;
    class UAudioComponent* audio;
    class USphereComponent* AoEDamageSphere;
    class UParticleSystemComponent* P_Charged_Shot_Warmup;
    class UParticleSystemComponent* P_Charged_Shot;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* AnimNode;
    class UDamageComponent* Damage;
    class USimpleHealthComponent* SimpleHealth;
    class UProjectileExplosion* ProjectileExplosion;
    float Grow_Time_Line_Scale_70B952944B635ADB4B7086A2A6BEB7D9;
    TEnumAsByte<ETimelineDirection::Type> Grow_Time_Line__Direction_70B952944B635ADB4B7086A2A6BEB7D9;
    class UTimelineComponent* Grow Time Line;
    float DamageRadiusAtOverCharge;
    float Acceleration;
    class UParticleSystemComponent* AoEParticle;
    bool FlyingNightmareEnabled;
    class UParticleSystem* FN_Particles;

    void OnRep_AoEEnabled();
    void UserConstructionScript();
    void Grow Time Line__FinishedFunc();
    void Grow Time Line__UpdateFunc();
    void OnImpacted(bool PredictedImpact, const FHitResult& HitResult);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__AoEDamageSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnAoEDamageEnabled();
    void UpdateFNRadius(float New Radius);
    void OnInitialized();
    void ExecuteUbergraph_PRJ_ChargedBlasterShot(int32 EntryPoint);
};

#endif
