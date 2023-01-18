#ifndef UE4SS_SDK_BP_DeadTree_A_HPP
#define UE4SS_SDK_BP_DeadTree_A_HPP

class ABP_DeadTree_A_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UStaticMeshComponent* StaticMesh4;
    class USceneComponent* Scene;
    class UStaticMeshComponent* StaticMesh3;
    class USceneComponent* BranchPoint3;
    class UStaticMeshComponent* StaticMesh2;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class USceneComponent* BranchPoint4;
    class UStaticMeshComponent* SM_DeadTree_Branch_A---DELEETE WHEN DONE;
    class USceneComponent* BranchPoint0;
    class USceneComponent* BranchPoint2;
    class USceneComponent* BranhcPoint1;
    class UStaticMeshComponent* SM_DeadTree_Trunk_A;
    class USimpleHealthComponent* SimpleHealth;
    class USceneComponent* DefaultSceneRoot;
    TArray<class TSubclassOf<AActor>> Branches;
    TArray<class USceneComponent*> BranchPoints;
    int32 MinNumberBranches;
    int32 MaxNumberBranches;
    int32 ChosenNumberOfBranches;
    TArray<FSTR_DeadTreeBranch> BranchesSTR;
    TArray<class AActor*> SpawnedBranches;

    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void ExecuteUbergraph_BP_DeadTree_A(int32 EntryPoint);
};

#endif
