#ifndef UE4SS_SDK_BP_Minehead_Sentry_HPP
#define UE4SS_SDK_BP_Minehead_Sentry_HPP

class ABP_Minehead_Sentry_C : public ASentryGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UCapsuleComponent* Capsule;
    class UParticleSystemComponent* P_SentryGun_MineHead_Casing;
    class USceneComponent* SpotLightBase;
    class UStaticMeshComponent* LightCone;
    class UPointLightComponent* PointLight;
    class USpotLightComponent* SpotLight;
    class UWidgetComponent* AmmoCountWidget;
    class UDamageComponent* Damage1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UHitscanComponent* HitScan;
    float Undeploy_Progress_02B4B0BE41996CA1C5785D8CDFE1AD49;
    TEnumAsByte<ETimelineDirection::Type> Undeploy__Direction_02B4B0BE41996CA1C5785D8CDFE1AD49;
    class UTimelineComponent* Undeploy;
    float DeployTimeline_DeployProgress_4362678842D8358C48C38287DF4595DA;
    TEnumAsByte<ETimelineDirection::Type> DeployTimeline__Direction_4362678842D8358C48C38287DF4595DA;
    class UTimelineComponent* DeployTimeline;
    float FoldoutAnimDuration;
    float Old Z Angle;
    float Old Z Direction;
    bool IsDeployed;
    float DeployProgress;

    float GetDeployProgress();
    void ConditionallyEnableShadows();
    void OnRep_IsDeployed();
    void SignOrZero(float Value, float& Sign);
    void DeployTimeline__FinishedFunc();
    void DeployTimeline__UpdateFunc();
    void Undeploy__FinishedFunc();
    void Undeploy__UpdateFunc();
    void AmmoSpent();
    void ReceiveBeginPlay();
    void Sentry Gun Ready();
    void Deploy();
    void UpdateShadows();
    void BndEvt__Hitscan_K2Node_ComponentBoundEvent_0_WeaponFiredDelegate__DelegateSignature(const FVector& Location);
    void ExecuteUbergraph_BP_Minehead_Sentry(int32 EntryPoint);
};

#endif
