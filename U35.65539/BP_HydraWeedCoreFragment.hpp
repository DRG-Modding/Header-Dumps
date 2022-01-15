#ifndef UE4SS_SDK_BP_HydraWeedCoreFragment_HPP
#define UE4SS_SDK_BP_HydraWeedCoreFragment_HPP

class ABP_HydraWeedCoreFragment_C : UBP_Gem_C
{
    UPointLightComponent* PointLight;
    TArray<UStaticMesh*> Meshes;
    int32 Index;
}

#endif
