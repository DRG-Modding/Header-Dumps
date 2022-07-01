#ifndef UE4SS_SDK_BP_Collectible_Barley_Base_HPP
#define UE4SS_SDK_BP_Collectible_Barley_Base_HPP

class ABP_Collectible_Barley_Base_C : public ABP_Collectible_Base_C
{
    class UMaterialInstance* FruitMaterial;

    float GetPickDelay();
    void PickBerry(class USceneComponent* Berry, class USceneComponent* Stem);
    void UserConstructionScript();
};

#endif
