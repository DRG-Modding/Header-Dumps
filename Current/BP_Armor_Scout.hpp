#ifndef UE4SS_SDK_BP_Armor_Scout_HPP
#define UE4SS_SDK_BP_Armor_Scout_HPP

class ABP_Armor_Scout_C : public AArmorPiece
{
    class USceneComponent* DefaultSceneRoot;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
};

#endif
