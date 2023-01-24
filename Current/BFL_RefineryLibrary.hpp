#ifndef UE4SS_SDK_BFL_RefineryLibrary_HPP
#define UE4SS_SDK_BFL_RefineryLibrary_HPP

class UBFL_RefineryLibrary_C : public UBlueprintFunctionLibrary
{

    void CreateLiquidMorkiteDecal(float Scale, FVector Location, FVector Normal, class UObject* __WorldContext);
    class UMaterialInterface* GetMaterialFromPipelineStatus(EPipelineBuildState InPipelineState, class UObject* __WorldContext);
};

#endif
