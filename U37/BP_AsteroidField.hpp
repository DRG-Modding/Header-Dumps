#ifndef UE4SS_SDK_BP_AsteroidField_HPP
#define UE4SS_SDK_BP_AsteroidField_HPP

class ABP_AsteroidField_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URotatingMovementComponent* RotatingMovement;
    class UBillboardComponent* Billboard;
    class UStaticMeshComponent* Mesh_PlanetaryRing;
    class USceneComponent* Scene;
    TArray<class UStaticMesh*> Meshes to spawn;
    int32 Number of meshes;
    float AsteroidScale;
    float RadiusInner;
    float RadiusOuter;
    TArray<class UInstancedStaticMeshComponent*> Instanced meshes;
    TSoftObjectPtr<UHierarchicalInstancedStaticMeshComponent> NewVar_0;
    float RingNoiseScale;
    float RingHeight;
    float RingMeshCircumferance;
    bool RingField;
    bool RingField - Show Ring;
    float RingOpacity;
    FRandomStream Random seed;
    float RingEmissiveMultiplier;
    class UMaterialInterface* Asteroid Material;
    FRotator Rotation;

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_AsteroidField(int32 EntryPoint);
};

#endif
