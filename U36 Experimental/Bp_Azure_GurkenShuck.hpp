#ifndef UE4SS_SDK_Bp_Azure_GurkenShuck_HPP
#define UE4SS_SDK_Bp_Azure_GurkenShuck_HPP

class ABp_Azure_GurkenShuck_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UParticleSystemComponent* P_Flower_Gurken_Pollen;
    class USphereComponent* WalkinTrigger;
    class UCapsuleComponent* HitBox;
    class USkeletalMeshComponent* SK_Biome_AzureWeald_Flower_Gurken;
    class UAudioComponent* AzureGurkenIdleSound;
    class UParticleSystemComponent* P_Flower_HollowBall_lightdust;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* PointLight;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USceneComponent* Scene;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USimpleHealthComponent* SimpleHealth;
    float Fade_up_NewTrack_0_1973A28E419F187C363458893321988E;
    TEnumAsByte<ETimelineDirection::Type> Fade_up__Direction_1973A28E419F187C363458893321988E;
    class UTimelineComponent* Fade up;
    int32 LightIntensity;
    int32 LightAttenuation;

    void Fade up__FinishedFunc();
    void Fade up__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__WalkinTrigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Close Flower();
    void OpenFlower();
    void ExecuteUbergraph_Bp_Azure_GurkenShuck(int32 EntryPoint);
};

#endif
