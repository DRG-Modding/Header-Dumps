#ifndef UE4SS_SDK_BP_LargeStabbyThorn_HPP
#define UE4SS_SDK_BP_LargeStabbyThorn_HPP

class ABP_LargeStabbyThorn_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect;
    class UTerrainPlacementComponent* terrainPlacement;
    class UBillboardComponent* DamagePoint;
    class UDamageComponent* Damage;
    class UStaticMeshComponent* SM_TreeBarnacle_01;
    class UStaticMeshComponent* SM_StabbyThorn;
    class USceneComponent* DefaultSceneRoot;
    bool Retracted;

    void OnRep_Retracted();
    void ReceiveBeginPlay();
    void OnPlayerProximity(class APlayerCharacter* Player, bool enteredTrigger);
    void Retract();
    void Extend();
    void OnMatchStarted_Event();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature(class USceneComponent* Point);
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_LargeStabbyThorn(int32 EntryPoint);
};

#endif
