#ifndef UE4SS_SDK_BP_HydraWeedCoreFragment_HPP
#define UE4SS_SDK_BP_HydraWeedCoreFragment_HPP

class ABP_HydraWeedCoreFragment_C : public ABP_Gem_C
{
    class UPointLightComponent* PointLight;
    TArray<class UStaticMesh*> Meshes;
    int32 Index;

};

#endif
