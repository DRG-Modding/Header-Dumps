#ifndef UE4SS_SDK_BP_SmallGenerator_HPP
#define UE4SS_SDK_BP_SmallGenerator_HPP

class ABP_SmallGenerator_C : public AAnchorTurner
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPathfinderCollisionComponent* PathfinderCollision1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* StaticMesh2;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh1;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Box3;
    class UBoxComponent* Box2;
    class UBoxComponent* Box1;
    class UBoxComponent* Box;
    class URoomCarverComponent* RoomCarver;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* PointLight;
    bool Found;

    void OnRep_Found();
    void ReceiveBeginPlay();
    void Cheat_TeleportPlayer();
    void BndEvt__TurnUse_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void GeneratorSpunUp();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SpunUp();
    void ExecuteUbergraph_BP_SmallGenerator(int32 EntryPoint);
};

#endif
