#ifndef UE4SS_SDK_BP_FragilePlatform_HPP
#define UE4SS_SDK_BP_FragilePlatform_HPP

class ABP_FragilePlatform_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UBoxComponent* Box;
    class USimpleHealthComponent* SimpleHealth;
    class UTerrainPlacementComponent* terrainPlacement;
    class UStaticMeshComponent* Platform;
    class USceneComponent* Default root component;
    TEnumAsByte<ETimelineDirection::Type> Crack_Timer__Direction_1ABFCC984A9885503D55279811F213E0;
    class UTimelineComponent* Crack Timer;
    float Time Between Cracks;
    TEnumAsByte<EFragilePlatformState::Type> CrackState;
    int32 Amount of actors inside;
    float Time until next crack;
    class UStaticMesh* Stage1 mesh;
    class UStaticMesh* Stage2 mesh;
    class UStaticMesh* Stage3 mesh;
    float current state health;
    float State max health;
    float Rotation;

    void OnRep_Rotation();
    void Take damage on state(float Damage);
    void OnRep_CrackState();
    void Crack Timer__FinishedFunc();
    void Crack Timer__UpdateFunc();
    void ReceiveBeginPlay();
    void Break Platform();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_5_DamageSig__DelegateSignature(float Amount);
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_6_DeathSig__DelegateSignature(class UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_FragilePlatform(int32 EntryPoint);
};

#endif
