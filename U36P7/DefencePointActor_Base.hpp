#ifndef UE4SS_SDK_DefencePointActor_Base_HPP
#define UE4SS_SDK_DefencePointActor_Base_HPP

class ADefencePointActor_Base_C : public ADefensePointActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* Terrain scanner mesh;
    class UStaticMeshComponent* DistressSphere;
    class UCapsuleComponent* UseableCollider;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;

    void DefenseStart();
    void OnDefenseSucceed();
    void OnDefenceFailed();
    void DefenseComplete();
    void DefenseFail();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DefencePointActor_Base(int32 EntryPoint);
};

#endif
