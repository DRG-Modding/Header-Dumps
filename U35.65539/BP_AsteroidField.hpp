#ifndef UE4SS_SDK_BP_AsteroidField_HPP
#define UE4SS_SDK_BP_AsteroidField_HPP

class ABP_AsteroidField_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    URotatingMovementComponent* RotatingMovement;
    UBillboardComponent* Billboard;
    UStaticMeshComponent* Mesh_PlanetaryRing;
    USceneComponent* Scene;
    TArray<UStaticMesh*> Meshes to spawn;
    int32 Number of meshes;
    float AsteroidScale;
    float RadiusInner;
    float RadiusOuter;
    TArray<UInstancedStaticMeshComponent*> Instanced meshes;
    TSoftObjectPtr<UHierarchicalInstancedStaticMeshComponent> NewVar_0;
    float RingNoiseScale;
    float RingHeight;
    float RingMeshCircumferance;
    bool RingField;
    bool RingField - Show Ring;
    float RingOpacity;
    FRandomStream Random seed;
    float RingEmissiveMultiplier;
    UMaterialInterface* Asteroid Material;
    FRotator Rotation;

    void UserConstructionScript(bool Temp_bool_Variable, const FTransform Temp_struct_Variable, UInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable_1, FVector CallFunc_RandomUnitVectorFromStream_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, FRotator CallFunc_MakeRotator_ReturnValue, bool Temp_bool_Variable_2, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_2, bool Temp_bool_Variable_3, FVector CallFunc_MakeVector_ReturnValue, FVector CallFunc_GreaterGreater_VectorRotator_ReturnValue, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool K2Node_Select_Default, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_3, bool K2Node_Select_Default_1, FRotator CallFunc_MakeRotator_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable_1, UStaticMesh* CallFunc_Array_Get_Item, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, UInstancedStaticMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_5, int32 CallFunc_Clamp_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, FVector K2Node_Select_Default_2, FTransform CallFunc_MakeTransform_ReturnValue, int32 CallFunc_AddInstance_ReturnValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AsteroidField(int32 EntryPoint);
}

#endif
