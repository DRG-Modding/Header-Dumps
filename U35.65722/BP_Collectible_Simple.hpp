#ifndef UE4SS_SDK_BP_Collectible_Simple_HPP
#define UE4SS_SDK_BP_Collectible_Simple_HPP

class ABP_Collectible_Simple_C : public ABP_Collectible_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainPlacementComponent* terrainPlacement;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* Mesh;

    void PickedUp();
    void ExecuteUbergraph_BP_Collectible_Simple(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
};

#endif
