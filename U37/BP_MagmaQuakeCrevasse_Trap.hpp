#ifndef UE4SS_SDK_BP_MagmaQuakeCrevasse_Trap_HPP
#define UE4SS_SDK_BP_MagmaQuakeCrevasse_Trap_HPP

class ABP_MagmaQuakeCrevasse_Trap_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBillboardComponent* P_Tell_05;
    class UBillboardComponent* P_Tell_04;
    class UBillboardComponent* P_Tell_03;
    class UBillboardComponent* P_Tell_02;
    class UBillboardComponent* P_Tell_01;
    class UStaticMeshComponent* Step11;
    class UStaticMeshComponent* Step8;
    class UStaticMeshComponent* CrevasseHotRockFill;
    class UActorStateComponent* CrevasseOpen;
    class UStaticMeshComponent* Step6;
    class UStaticMeshComponent* Step5;
    class UStaticMeshComponent* Step4;
    class UStaticMeshComponent* Step3;
    class UStaticMeshComponent* Step1;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Crevasse;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    TArray<FVector> ParticleLocations;
    TArray<FTransform> TellTransforms;
    int32 TellIndex;
    TArray<class UStaticMeshComponent*> RockSteps;
    float ChanceOfRockSteps;
    int32 MinNumRockSteps;
    TArray<class USceneComponent*> Tells;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CrevasseOpen_K2Node_ComponentBoundEvent_4_StateDelegate__DelegateSignature(class UActorStateComponent* State);
    void SetCrevasseActive(bool IsActive);
    void Test_Crevasse();
    void ExecuteUbergraph_BP_MagmaQuakeCrevasse_Trap(int32 EntryPoint);
};

#endif
