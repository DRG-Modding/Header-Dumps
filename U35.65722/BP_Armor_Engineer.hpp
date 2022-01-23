#ifndef UE4SS_SDK_BP_Armor_Engineer_HPP
#define UE4SS_SDK_BP_Armor_Engineer_HPP

class ABP_Armor_Engineer_C : public AArmorPiece
{
    class USceneComponent* DefaultSceneRoot;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<class ABP_Armor_Engineer_C> CallFunc_GetObjectClass_ReturnValue);
};

#endif
