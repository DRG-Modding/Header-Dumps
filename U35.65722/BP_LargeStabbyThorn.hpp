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
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_1_PointRemovedEvent__DelegateSignature();
    void OnTerrainPointRemoved();
    void ExecuteUbergraph_BP_LargeStabbyThorn(int32 EntryPoint, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable, FExecuteUbergraph_BP_LargeStabbyThornK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, TEnumAsByte<EMoveComponentAction::Type> Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue, FExecuteUbergraph_BP_LargeStabbyThornK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class APlayerCharacter* K2Node_CustomEvent_player, bool K2Node_CustomEvent_enteredTrigger, bool CallFunc_HasAuthority_ReturnValue_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, class AFSDGameState* CallFunc_GetFSDGameState_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, FVector CallFunc_K2_GetActorLocation_ReturnValue_3, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue_4, FVector CallFunc_GetActorUpVector_ReturnValue, FRotator CallFunc_Conv_VectorToRotator_ReturnValue, class AProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
};

#endif
