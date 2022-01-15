#ifndef UE4SS_SDK_BP_Armor_Scout_HPP
#define UE4SS_SDK_BP_Armor_Scout_HPP

class ABP_Armor_Scout_C : AArmorPiece
{
    USceneComponent* DefaultSceneRoot;

    void GetGearStatEntry(UFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats, TSubclassOf<UBP_Armor_Scout_C> CallFunc_GetObjectClass_ReturnValue);
}

#endif
