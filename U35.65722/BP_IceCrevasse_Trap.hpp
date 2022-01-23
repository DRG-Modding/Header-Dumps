#ifndef UE4SS_SDK_BP_IceCrevasse_Trap_HPP
#define UE4SS_SDK_BP_IceCrevasse_Trap_HPP

class ABP_IceCrevasse_Trap_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Step6;
    class UStaticMeshComponent* Step5;
    class UStaticMeshComponent* Step4;
    class UStaticMeshComponent* Step3;
    class UStaticMeshComponent* Step2;
    class UStaticMeshComponent* Step1;
    class UStaticMeshComponent* Tell4;
    class UStaticMeshComponent* Tell3;
    class UStaticMeshComponent* Tell2;
    class UStaticMeshComponent* Tell1;
    class UStaticMeshComponent* StaticMesh;
    class UBoxComponent* Box;
    class UStaticMeshComponent* Crevasse;
    class ULevelGenerationCarverComponent* LevelGenerationCarver_warning;
    class UTerrainPlacementComponent* terrainPlacement;
    class USceneComponent* DefaultSceneRoot;
    TArray<FVector> ParticleLocations;
    TArray<FTransform> TellTransforms;
    int32 TellIndex;
    TArray<class UStaticMeshComponent*> RockSteps;
    float ChanceOfRockSteps;
    bool IsOpen;

    void OnRep_IsOpen();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OpenCrevasse();
    void ExecuteUbergraph_BP_IceCrevasse_Trap(int32 EntryPoint, FVector CallFunc_GetActorScale3D_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const FHitResult K2Node_ComponentBoundEvent_SweepResult, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue_1, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_1, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, FVector CallFunc_Array_Get_Item, FVector CallFunc_Add_VectorVector_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, FRotator CallFunc_K2_GetComponentRotation_ReturnValue, FVector CallFunc_K2_GetComponentLocation_ReturnValue, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable, class ADeepCSGWorld* CallFunc_GetCSGWorld_ReturnValue_2, class UStaticMeshComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, FTransform CallFunc_K2_GetComponentToWorld_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_1, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1);
};

#endif
