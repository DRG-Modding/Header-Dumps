#ifndef UE4SS_SDK_BP_Halloween_Candle_HPP
#define UE4SS_SDK_BP_Halloween_Candle_HPP

class ABP_Halloween_Candle_C : public AActor
{
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Mesh_Candle;
    class UStaticMeshComponent* Mesh_Flame01;
    class USceneComponent* SharedRoot;

};

#endif
