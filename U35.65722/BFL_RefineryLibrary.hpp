#ifndef UE4SS_SDK_BFL_RefineryLibrary_HPP
#define UE4SS_SDK_BFL_RefineryLibrary_HPP

class UBFL_RefineryLibrary_C : public UBlueprintFunctionLibrary
{

    void CreateLiquidMorkiteDecal(float Scale, FVector Location, FVector Normal, class UObject* __WorldContext, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class UDecalComponent* CallFunc_SpawnDecal_ReturnValue);
    class UMaterialInterface* GetMaterialFromPipelineStatus(EPipelineBuildState InPipelineState, class UObject* __WorldContextbool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, EPipelineBuildState Temp_byte_Variable, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, class UMaterialInterface* Temp_object_Variable_4, class UFSDGameUserSettings* CallFunc_GetFSDGameUserSettings_ReturnValue, bool CallFunc_GetPhotosensitiveMode_ReturnValue, class UMaterialInterface* K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1);
};

#endif
