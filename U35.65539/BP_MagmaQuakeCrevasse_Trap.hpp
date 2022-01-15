#ifndef UE4SS_SDK_BP_MagmaQuakeCrevasse_Trap_HPP
#define UE4SS_SDK_BP_MagmaQuakeCrevasse_Trap_HPP

class ABP_MagmaQuakeCrevasse_Trap_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBillboardComponent* P_Tell_05;
    UBillboardComponent* P_Tell_04;
    UBillboardComponent* P_Tell_03;
    UBillboardComponent* P_Tell_02;
    UBillboardComponent* P_Tell_01;
    UStaticMeshComponent* Step11;
    UStaticMeshComponent* Step8;
    UStaticMeshComponent* CrevasseHotRockFill;
    UActorStateComponent* CrevasseOpen;
    UStaticMeshComponent* Step6;
    UStaticMeshComponent* Step5;
    UStaticMeshComponent* Step4;
    UStaticMeshComponent* Step3;
    UStaticMeshComponent* Step1;
    UBoxComponent* Box;
    UStaticMeshComponent* Crevasse;
    UTerrainPlacementComponent* terrainPlacement;
    USceneComponent* DefaultSceneRoot;
    TArray<FVector> ParticleLocations;
    TArray<FTransform> TellTransforms;
    int32 TellIndex;
    TArray<UStaticMeshComponent*> RockSteps;
    float ChanceOfRockSteps;
    int32 MinNumRockSteps;
    TArray<USceneComponent*> Tells;

    void UserConstructionScript(TArray<USceneComponent*>& K2Node_MakeArray_Array, TArray<UStaticMeshComponent*>& K2Node_MakeArray_Array_1);
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__CrevasseOpen_K2Node_ComponentBoundEvent_4_StateDelegate__DelegateSignature(UActorStateComponent* State);
    void SetCrevasseActive(bool IsActive);
    void Test_Crevasse();
    void ExecuteUbergraph_BP_MagmaQuakeCrevasse_Trap(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, bool Temp_bool_Has_Been_Initd_Variable, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FVector CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 Temp_byte_Variable, int32 Temp_int_Variable, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, UStaticMeshComponent* CallFunc_Array_Get_Item_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, UActorStateComponent* K2Node_ComponentBoundEvent_state, ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, FRotator CallFunc_K2_GetActorRotation_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_2, FVector CallFunc_GetActorScale3D_ReturnValue, const FTransform CallFunc_GetTransform_ReturnValue, FVector CallFunc_TransformLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool K2Node_CustomEvent_isActive, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, USceneComponent* CallFunc_Array_Get_Item_2, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, uint8 Temp_byte_Variable_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, uint8 K2Node_Select_Default);
}

#endif
