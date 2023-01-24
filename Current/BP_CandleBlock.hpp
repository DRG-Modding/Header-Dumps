#ifndef UE4SS_SDK_BP_CandleBlock_HPP
#define UE4SS_SDK_BP_CandleBlock_HPP

class ABP_CandleBlock_C : public AActor
{
    class UCapsuleComponent* Collision;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UStaticMeshComponent* StaticMesh2;
    class UPointLightComponent* PointLight2;
    class UStaticMeshComponent* StaticMesh1;
    class UPointLightComponent* PointLight1;
    class UStaticMeshComponent* StaticMesh;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Mesh_MainBlock;
    class UStaticMeshComponent* Mesh_Flame01;
    class USceneComponent* SharedRoot;

};

#endif
