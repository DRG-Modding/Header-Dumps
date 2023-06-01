#ifndef UE4SS_SDK_BP_AmberEvent_HPP
#define UE4SS_SDK_BP_AmberEvent_HPP

class ABP_AmberEvent_C : public AAmberEvent
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCapsuleComponent* Capsule1;
    class URoomCarverComponent* RoomCarver;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UOutlineComponent* outline;
    class UStaticMeshComponent* SM_Prim_Cylinder_06sides;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UStaticMeshComponent* StaticMesh1;
    class UMeshCarverComponent* MeshCarver;
    class UAudioComponent* AmberLaserActivated;
    class UParticleSystemComponent* ParticleSystem;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* StaticMesh;
    class URestrictedResourceBank* RestrictedResourceBank;
    class UChildActorComponent* StartButton1;
    class UChildActorComponent* StartButton2;
    class UChildActorComponent* StartButton4;
    class UChildActorComponent* StartButton3;
    class USkeletalMeshComponent* SkeletalMesh;
    class UTerrainPlacementComponent* terrainPlacement;

    void BndEvt__RestrictedResourceBank_K2Node_ComponentBoundEvent_0_ResourceBankEvent__DelegateSignature(class APlayerCharacter* User);
    void SpawnEnemies();
    void OnEventFinished(bool eventSuccess);
    void OnEventTriggered();
    void ExecuteUbergraph_BP_AmberEvent(int32 EntryPoint);
};

#endif
