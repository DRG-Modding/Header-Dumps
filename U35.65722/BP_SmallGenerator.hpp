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

    void OnRep_Found(class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay();
    void Cheat_TeleportPlayer();
    void BndEvt__TurnUse_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void GeneratorSpunUp();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SpunUp();
    void ExecuteUbergraph_BP_SmallGenerator(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FExecuteUbergraph_BP_SmallGeneratorK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, class APlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, class AFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, class UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2);
};

#endif
