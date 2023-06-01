#ifndef UE4SS_SDK_BP_RewardFrame_HPP
#define UE4SS_SDK_BP_RewardFrame_HPP

class ABP_RewardFrame_C : public AEventRewardFrame
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMeshCarverComponent* MeshCarver;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Sphere;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBoxComponent* Box;
    class UBoxComponent* useCollider;
    class UTerrainDetectComponent* TerrainDetect;
    class UDropToTerrainComponent* DropToTerrain;
    class USceneComponent* AttentionLightRoot;
    class UPointLightComponent* PointLight2;
    class USpotLightComponent* SpotLight;
    class UPointLightComponent* PointLight;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* LightCone;
    class UOutlineComponent* outline;
    class UChildActorComponent* Dispenser4;
    class UChildActorComponent* Dispenser3;
    class UChildActorComponent* Dispenser2;
    class UChildActorComponent* Dispenser1;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    float AttentionLightTimeLine_Progress01_7D9ABF3443AD60E5960D44ADCB060072;
    TEnumAsByte<ETimelineDirection::Type> AttentionLightTimeLine__Direction_7D9ABF3443AD60E5960D44ADCB060072;
    class UTimelineComponent* AttentionLightTimeLine;
    class AGameEvent* OwningEvent;
    bool EventFinished;
    TArray<class AEventRewardDispenser*> DispenserActors;
    bool AttentionLightOn;
    class APlayerCharacter* KeyOwner;
    class ABP_ReturningPromotionKey_C* Key;
    float HeightAboveGround;
    float Incrementing;
    FMusicHandle MusicHandle;

    bool AddEventProgress(float Progress);
    bool AdvanceOneObjective();
    bool SetupEvent(class AGameEvent* GameEvent);
    void GetLocalPlayerDispenser(class AEventRewardDispenser*& OutDispenser);
    void AllDispensersFinished(bool& IsFinished);
    void SetupDispenser(class AEventRewardDispenser* Dispenser);
    void GetRandomPlayer(class APlayerCharacter*& Output);
    void UpdateLights();
    void AlignDispensers();
    void StartEventUI();
    void UserConstructionScript();
    void AttentionLightTimeLine__FinishedFunc();
    void AttentionLightTimeLine__UpdateFunc();
    void OnEventOpened();
    void OnEventProgress(float Progress);
    void ReceiveBeginPlay();
    void BndEvt__EventUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnEventFinished(bool eventSuccess);
    void OnEventTriggered();
    void BndEvt__EventUsable_K2Node_ComponentBoundEvent_1_UsableChangedSignature__DelegateSignature(bool CanUse);
    void Toggle Attention Light(bool InVisible);
    void Recall Key();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EnableGravity();
    void Cheat_FinishEvent();
    void ExecuteUbergraph_BP_RewardFrame(int32 EntryPoint);
};

#endif
