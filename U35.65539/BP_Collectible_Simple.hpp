#ifndef UE4SS_SDK_BP_Collectible_Simple_HPP
#define UE4SS_SDK_BP_Collectible_Simple_HPP

class ABP_Collectible_Simple_C : ABP_Collectible_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTerrainPlacementComponent* terrainPlacement;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* Mesh;

    void PickedUp();
    void ExecuteUbergraph_BP_Collectible_Simple(int32 EntryPoint, FVector CallFunc_K2_GetActorLocation_ReturnValue, FRotator CallFunc_K2_GetActorRotation_ReturnValue, UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue);
}

#endif
