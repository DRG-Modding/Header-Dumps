#ifndef UE4SS_SDK_BP_Collectible_Barley_Base_HPP
#define UE4SS_SDK_BP_Collectible_Barley_Base_HPP

class ABP_Collectible_Barley_Base_C : public ABP_Collectible_Base_C
{
    class UMaterialInstance* FruitMaterial;

    float GetPickDelay(float CallFunc_RandomFloatInRange_ReturnValue);
    void PickBerry(class USceneComponent* Berry, class USceneComponent* Stem, FRotator CallFunc_GetSocketRotation_ReturnValue, FVector CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue);
    void UserConstructionScript();
};

#endif
