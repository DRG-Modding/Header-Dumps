#ifndef UE4SS_SDK_BP_Azure_CombaCharm_HPP
#define UE4SS_SDK_BP_Azure_CombaCharm_HPP

class ABP_Azure_CombaCharm_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    URotatingMovementComponent* RotatingMovement;
    UTerrainDetectComponent* TerrainDetect;
    UStaticMeshComponent* SM_Biome_AzureWeald_Flower_BigEgg_01;
    UAudioComponent* CombaCharmIdle;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UPathfinderCollisionComponent* PathfinderCollision;
    UStaticMeshComponent* Biome_AzureWeald_Flower_BigEgg;
    UPointLightComponent* PointLight;
    USimpleHealthComponent* SimpleHealth;
    UTerrainPlacementComponent* terrainPlacement;
    USceneComponent* DefaultSceneRoot;
    float Glowtimeline_Glow_3F65C7DD4A6637F8B110998EAD89619E;
    TEnumAsByte<ETimelineDirection::Type> Glowtimeline__Direction_3F65C7DD4A6637F8B110998EAD89619E;
    UTimelineComponent* Glowtimeline;
    UMaterialInstanceDynamic* GlowMat;
    float BaseGlow;
    bool Glow;

    void OnRep_Glow();
    void UserConstructionScript(float CallFunc_K2_GetScalarParameterValue_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    void Glowtimeline__FinishedFunc();
    void Glowtimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void DoGlow();
    void StopGlow();
    void PlayerClose(UPlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_Azure_CombaCharm(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, PlayerProximityDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_1, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, UBP_Azure_CombaCharm_Egg_C* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
