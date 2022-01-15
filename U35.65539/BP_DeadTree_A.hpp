#ifndef UE4SS_SDK_BP_DeadTree_A_HPP
#define UE4SS_SDK_BP_DeadTree_A_HPP

class ABP_DeadTree_A_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UTerrainDetectComponent* TerrainDetect;
    UTerrainPlacementComponent* terrainPlacement;
    UPathfinderCollisionComponent* PathfinderCollision;
    UStaticMeshComponent* StaticMesh4;
    USceneComponent* Scene;
    UStaticMeshComponent* StaticMesh3;
    USceneComponent* BranchPoint3;
    UStaticMeshComponent* StaticMesh2;
    UStaticMeshComponent* StaticMesh1;
    UStaticMeshComponent* StaticMesh;
    USceneComponent* BranchPoint4;
    UStaticMeshComponent* SM_DeadTree_Branch_A---DELEETE WHEN DONE;
    USceneComponent* BranchPoint0;
    USceneComponent* BranchPoint2;
    USceneComponent* BranhcPoint1;
    UStaticMeshComponent* SM_DeadTree_Trunk_A;
    USimpleHealthComponent* SimpleHealth;
    USceneComponent* DefaultSceneRoot;
    TArray<TSubclassOf<AActor>> Branches;
    TArray<USceneComponent*> BranchPoints;
    int32 MinNumberBranches;
    int32 MaxNumberBranches;
    int32 ChosenNumberOfBranches;
    TArray<FSTR_DeadTreeBranch> BranchesSTR;
    TArray<AActor*> SpawnedBranches;

    void ReceiveBeginPlay();
    void OnMatchStarted_Event_0();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_0_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void BndEvt__TerrainDetect_K2Node_ComponentBoundEvent_2_PointRemovedEvent__DelegateSignature();
    void ExecuteUbergraph_BP_DeadTree_A(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_HasAuthority_ReturnValue_1, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_DegreesToRadians_ReturnValue, TSubclassOf<AActor> CallFunc_Array_Get_Item, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_DegreesToRadians_ReturnValue_1, USceneComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, FSTR_DeadTreeBranch K2Node_MakeStruct_STR_DeadTreeBranch, bool CallFunc_Greater_IntInt_ReturnValue, DelegateEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDGameState* CallFunc_GetFSDGameState_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_HasMatchStarted_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, FSTR_DeadTreeBranch CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, FVector CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, AActor* CallFunc_Array_Get_Item_3, float CallFunc_Multiply_IntFloat_ReturnValue, UHealthComponentBase* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_K2_GetComponentScale_ReturnValue_1, FVector CallFunc_K2_GetComponentScale_ReturnValue_2, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_Multiply_FloatFloat_ReturnValue, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
