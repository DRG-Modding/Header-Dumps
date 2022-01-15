#ifndef UE4SS_SDK_BP_SmallGenerator_HPP
#define UE4SS_SDK_BP_SmallGenerator_HPP

class ABP_SmallGenerator_C : AAnchorTurner
{
    FPointerToUberGraphFrame UberGraphFrame;
    UPathfinderCollisionComponent* PathfinderCollision1;
    UPathfinderCollisionComponent* PathfinderCollision;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UOutlineComponent* outline;
    UStaticMeshComponent* StaticMesh2;
    USphereComponent* Sphere;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    UBoxComponent* Box3;
    UBoxComponent* Box2;
    UBoxComponent* Box1;
    UBoxComponent* Box;
    URoomCarverComponent* RoomCarver;
    UTerrainPlacementComponent* terrainPlacement;
    UPointLightComponent* PointLight;
    bool Found;

    void OnRep_Found(ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void ReceiveBeginPlay();
    void Cheat_TeleportPlayer();
    void BndEvt__TurnUse_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(UPlayerCharacter* User, EInputKeys Key);
    void GeneratorSpunUp();
    void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SpunUp();
    void ExecuteUbergraph_BP_SmallGenerator(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetPlayerController_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, UPlayerCharacter* K2Node_ComponentBoundEvent_user, EInputKeys K2Node_ComponentBoundEvent_key, FHitResult CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, UFSDGameMode* CallFunc_GetFSDGameMode_ReturnValue, UEnemyWaveManager* CallFunc_GetWaveManager_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_2);
}

#endif
