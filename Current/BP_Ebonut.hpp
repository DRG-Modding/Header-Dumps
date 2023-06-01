#ifndef UE4SS_SDK_BP_Ebonut_HPP
#define UE4SS_SDK_BP_Ebonut_HPP

class ABP_Ebonut_C : public ABP_Collectible_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Carver_DropPodDrill001;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UPointLightComponent* PointLight1;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderWalkable;
    class UPointLightComponent* PointLight;
    class USceneComponent* PickupParticleSpawnPoint;
    class UAudioComponent* OpenHit;
    class UAudioComponent* 2ndHit;
    class UAudioComponent* 1stHit;
    class UStaticMeshComponent* Shell3;
    class UStaticMeshComponent* Shell2;
    class UStaticMeshComponent* Shell1;
    class UStaticMeshComponent* CoreMesh;
    class USimpleHealthComponent* SimpleHealth;
    class UStaticMeshComponent* BaseMesh;
    float ScaleDown_NewTrack_0_F8D011474F43755B827C2BB8FCF9590F;
    TEnumAsByte<ETimelineDirection::Type> ScaleDown__Direction_F8D011474F43755B827C2BB8FCF9590F;
    class UTimelineComponent* ScaleDown;
    float FirstThreshold;
    float SecondThreshold;
    class UStaticMeshComponent* NewVar_0;
    TEnumAsByte<EEbonutState::Type> State;
    bool CunksAreLoose;

    void ShowOpen2();
    void SetState(TEnumAsByte<EEbonutState::Type> State);
    void OnRep_State();
    void ScaleDown__FinishedFunc();
    void ScaleDown__UpdateFunc();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DamageSig__DelegateSignature(float Amount);
    void RemoveChunks();
    void PickedUp();
    void FirstHit();
    void SecondHit();
    void CrackOpen();
    void PlayDeath();
    void ExecuteUbergraph_BP_Ebonut(int32 EntryPoint);
};

#endif
