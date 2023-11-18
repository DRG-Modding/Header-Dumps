#ifndef UE4SS_SDK_BP_WalkingPlagueheart_SlimeTrailPuddle_HPP
#define UE4SS_SDK_BP_WalkingPlagueheart_SlimeTrailPuddle_HPP

class ABP_WalkingPlagueheart_SlimeTrailPuddle_C : public APlaguePuddle
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USphereComponent* SphereTrigger2;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UTerrainDetectComponent* TerrainDetect;
    class UFSDAudioComponent* PuddleIdleAudio;
    class UPointLightComponent* PointLight;
    class UNiagaraComponent* Niagara;
    class UMeshCarverComponent* MeshCarver;
    class UBoxComponent* LithoLatherDamageCollider;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class USphereComponent* Sphere3;
    class USphereComponent* Sphere2;
    class USphereComponent* Sphere1;
    class USphereComponent* Sphere;
    class UTerrainPlacementComponent* terrainPlacement;
    bool isFoamed;
    class ABP_PlagueWormPod_C* SpawnedWormpod;
    class AENE_WalkingPlagueheart_C* walkingPlagueheartRef;
    int32 numberOfTerrainDetectorsClear;

    void BP_WalkingPlagueheart_SlimeTrailPuddle_AutoGenFunc(class AActor* DestroyedActor);
    void OnRep_isFoamed();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Receive_OnVacuumed();
    void BndEvt__BP_WalkingPlagueheart_SlimeTrailPuddle_TerrainDetect_K2Node_ComponentBoundEvent_0_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__BP_WalkingPlagueheart_SlimeTrailPuddle_TerrainDetect2_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void BndEvt__BP_WalkingPlagueheart_SlimeTrailPuddle_TerrainDetect1_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void PlayStepOnCueAll(class APlayerCharacter* Player);
    void ExecuteUbergraph_BP_WalkingPlagueheart_SlimeTrailPuddle(int32 EntryPoint);
};

#endif
