#ifndef UE4SS_SDK_BP_Armor_Engineer_HPP
#define UE4SS_SDK_BP_Armor_Engineer_HPP

class ABP_Armor_Engineer_C : AArmorPiece
{
    USceneComponent* DefaultSceneRoot;

    void GetGearStatEntry(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<UBP_Armor_Engineer_C> CallFunc_GetObjectClass_ReturnValue);
}

#endif
