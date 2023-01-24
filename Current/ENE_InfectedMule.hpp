#ifndef UE4SS_SDK_ENE_InfectedMule_HPP
#define UE4SS_SDK_ENE_InfectedMule_HPP

class AENE_InfectedMule_C : public AConvertedRobot
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UBoxComponent* OverlapsPlayerTrigger;
    class UPointLightComponent* WakeUp_PointLight;
    class UParticleSystemComponent* ActivationParticle;
    class UTerrainPlacementComponent* terrainPlacement;
    class USpotLightComponent* SpotLight1;
    class UPointLightComponent* Light_TurretGlow;
    class UPointLightComponent* Light_Leg4;
    class UPointLightComponent* Light_Leg3;
    class UPointLightComponent* Light_Leg2;
    class UPointLightComponent* Light_Leg1;
    class USphereComponent* UseSphere;
    class UBoxComponent* Box;
    class USceneComponent* ParasitePoint3;
    class USceneComponent* ParasitePoint2;
    class USceneComponent* ParasitePoint1;
    class UPawnSensingComponent* PawnSensing;
    class UMaterialInstanceDynamic* LegLightsMat;
    class UAudioComponent* InfectedMuleWaitingForRepair;
    class UMaterialInstanceDynamic* FloodLightMat;
    class UMaterialInstanceDynamic* LaserLampMat;
    class UMaterialInstance* PulsatingLegLightMat;
    TArray<class AActor*> ActorsInShield;
    int32 playersInside;
    class UFSDAchievement* BetCAchievement;
    bool ShowBossHealth;
    bool ishealthbarshown;

    void OnRep_ShowBossHealth();
    void ReceiveBeginPlay();
    void OnMessageAI(FName TriggerName);
    void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__OverlapsPlayerTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BP_OnInstroduce();
    void BP_OnShieldChanged(bool isGrowing);
    void BP_OnStateChanged(ERobotState TeamState);
    void ExecuteUbergraph_ENE_InfectedMule(int32 EntryPoint);
};

#endif
