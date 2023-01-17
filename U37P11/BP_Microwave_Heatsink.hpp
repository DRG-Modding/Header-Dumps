#ifndef UE4SS_SDK_BP_Microwave_Heatsink_HPP
#define UE4SS_SDK_BP_Microwave_Heatsink_HPP

class ABP_Microwave_Heatsink_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UExplosionComponent* Explosion;
    class UDamageComponent* Damage;
    class USimpleHealthComponent* SimpleHealth;
    class UPointLightComponent* PointLight;
    class UParticleSystemComponent* P_Steam;
    class USphereComponent* HeatRadius;
    class UStaticMeshComponent* StaticMesh;
    class USphereComponent* Collision;
    float Timeline_0_Brightness_5A2B78D649E3C1F0338A2C84B8669952;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_5A2B78D649E3C1F0338A2C84B8669952;
    class UTimelineComponent* Timeline_0;
    float TimeoutTime;
    class UMaterialInstanceDynamic* DynamicMaterial;
    FName ParamEmmisiveMultiplier;
    bool IsActive;

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__BP_Microwave_Heatsink_Sphere_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_Microwave_Heatsink_HeatRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__BP_Microwave_Heatsink_HeatRadius_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void TurnOff();
    void BndEvt__BP_ExplosiveBoil_SimpleHealth_K2Node_ComponentBoundEvent_2_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Microwave_Heatsink(int32 EntryPoint);
};

#endif
