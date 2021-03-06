#ifndef UE4SS_SDK_BP_E3trailer_AsteroidField_HPP
#define UE4SS_SDK_BP_E3trailer_AsteroidField_HPP

class ABP_E3trailer_AsteroidField_C : public AActor
{
    class USceneComponent* Scene;
    float Radius;
    TArray<class UStaticMesh*> Meshes to spawn;
    TArray<class UInstancedStaticMeshComponent*> Instanced meshes;
    int32 Number of meshes;
    FRandomStream Random seed;
    float Scale;

    void UserConstructionScript(const FTransform Temp_struct_Variable, int32 Temp_int_Variable, class UInstancedStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_3, FVector CallFunc_Conv_FloatToVector_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_Length_ReturnValue_1, class UStaticMesh* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, class UInstancedStaticMeshComponent* CallFunc_Array_Get_Item_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_4, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_5, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_6, FVector CallFunc_MakeVector_ReturnValue, int32 CallFunc_Clamp_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_AddInstance_ReturnValue);
};

#endif
