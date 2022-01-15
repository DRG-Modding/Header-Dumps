#ifndef UE4SS_SDK_BP_LargeStabbyThorn_HPP
#define UE4SS_SDK_BP_LargeStabbyThorn_HPP

class ABP_LargeStabbyThorn_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UBillboardComponent* DamagePoint;
    UDamageComponent* Damage;
    UStaticMeshComponent* SM_TreeBarnacle_01;
    UStaticMeshComponent* SM_StabbyThorn;
    USceneComponent* DefaultSceneRoot;
    bool Retracted;

    void OnRep_Retracted();
    void ReceiveBeginPlay();
    void OnPlayerProximity(UPlayerCharacter* Player, bool enteredTrigger);
    void Retract();
    void Extend();
    void OnMatchStarted_Event();
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_LargeStabbyThorn(int32 EntryPoint, uint8 Temp_byte_Variable, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, uint8 Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, PlayerProximityDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, UPlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, bool CallFunc_HasAuthority_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_GetActorUpVector_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, AProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
}

#endif
