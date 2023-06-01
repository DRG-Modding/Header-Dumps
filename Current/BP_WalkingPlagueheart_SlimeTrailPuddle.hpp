#ifndef UE4SS_SDK_BP_WalkingPlagueheart_SlimeTrailPuddle_HPP
#define UE4SS_SDK_BP_WalkingPlagueheart_SlimeTrailPuddle_HPP

class ABP_WalkingPlagueheart_SlimeTrailPuddle_C : public APlaguePuddle
{
    FPointerToUberGraphFrame UberGraphFrame;
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

    void OnRep_isFoamed();
    void ReceiveBeginPlay();
    void Receive_OnVacuumed();
    void ExecuteUbergraph_BP_WalkingPlagueheart_SlimeTrailPuddle(int32 EntryPoint);
};

#endif
