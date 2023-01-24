#ifndef UE4SS_SDK_BP_BarrelSpawner_HPP
#define UE4SS_SDK_BP_BarrelSpawner_HPP

class ABP_BarrelSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh_Screen;
    class UWidgetComponent* Widget Barrel Counter;
    class UDecalComponent* Decal;
    class UBoxComponent* Box;
    class UBillboardComponent* Billboard;
    class USceneComponent* DefaultSceneRoot;
    class ABP_Phys_Barrel01_C* LastBarrel;
    int32 BarrelsSpawned;
    int32 SpawnCicle;
    float SpawnFrequency;
    int32 BarrelCount;
    bool ReadyToReset;
    FBP_BarrelSpawner_COnSpawnBarrelKicked OnSpawnBarrelKicked;
    void OnSpawnBarrelKicked(class APlayerCharacter* Kicked by);

    void OnRep_BarrelCount();
    void ReceiveBeginPlay();
    void SpawnBarrel();
    void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Reset();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnBarrelKicked(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_BarrelSpawner(int32 EntryPoint);
    void OnSpawnBarrelKicked__DelegateSignature(class APlayerCharacter* Kicked by);
};

#endif
