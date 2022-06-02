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

    void UserConstructionScript();
};

#endif
