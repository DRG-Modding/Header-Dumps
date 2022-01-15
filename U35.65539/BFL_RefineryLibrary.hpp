#ifndef UE4SS_SDK_BFL_RefineryLibrary_HPP
#define UE4SS_SDK_BFL_RefineryLibrary_HPP

class UBFL_RefineryLibrary_C : UBlueprintFunctionLibrary
{

    void CreateLiquidMorkiteDecal(float Scale, FVector Location, FVector Normal, UObject* __WorldContext, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UDecalComponent* CallFunc_SpawnDecal_ReturnValue);
    UMaterialInterface* GetMaterialFromPipelineStatus(EPipelineBuildState InPipelineState, UObject* __WorldContextbool Temp_bool_Variable, UMaterialInterface* Temp_object_Variable, UMaterialInterface* Temp_object_Variable_1, EPipelineBuildState Temp_byte_Variable, UMaterialInterface* Temp_object_Variable_2, UMaterialInterface* Temp_object_Variable_3, UMaterialInterface* Temp_object_Variable_4, UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, UMaterialInterface* K2Node_Select_Default, UMaterialInterface* K2Node_Select_Default_1);
}

#endif
