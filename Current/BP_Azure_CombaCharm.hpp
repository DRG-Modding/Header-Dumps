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
    void UserConstructionScript();
    void Glowtimeline__FinishedFunc();
    void Glowtimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void DoGlow();
    void StopGlow();
    void PlayerClose(class APlayerCharacter* Player, bool enteredTrigger);
    void ExecuteUbergraph_BP_Azure_CombaCharm(int32 EntryPoint);
};

#endif
