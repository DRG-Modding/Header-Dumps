#ifndef UE4SS_SDK_BP_Azure_CombaCharm_HPP
#define UE4SS_SDK_BP_Azure_CombaCharm_HPP

class ABP_Azure_CombaCharm_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovement;
    class UTerrainDetectComponent* TerrainDetect;
    class UStaticMeshComponent* SM_Biome_AzureWeald_Flower_BigEgg_01;
    class UAudioComponent* CombaCharmIdle;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* Biome_AzureWeald_Flower_BigEgg;
    class UPointLightComponent* PointLight;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    float Glowtimeline_Glow_3F65C7DD4A6637F8B110998EAD89619E;
    TEnumAsByte<ETimelineDirection::Type> Glowtimeline__Direction_3F65C7DD4A6637F8B110998EAD89619E;
    class UTimelineComponent* Glowtimeline;
    class UMaterialInstanceDynamic* GlowMat;
    float BaseGlow;
    bool Glow;

    void OnRep_Glow();
    void UserConstructionScript(float CallFunc_K2_GetScalarParameterValue_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Glowtimeline__FinishedFunc();
    void Glowtimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void DoGlow();
    void StopGlow();
    void PlayerClose(class APlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_Azure_CombaCharm(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_BP_Azure_CombaCharmK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_1, class UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, class ABP_Azure_CombaCharm_Egg_C* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
