#ifndef UE4SS_SDK_BPL_Armor_HPP
#define UE4SS_SDK_BPL_Armor_HPP

class UBPL_Armor_C : public UBlueprintFunctionLibrary
{

    void AddBaseArmorStats(class AFSDPlayerState* Player, TArray<FGearStatEntry>& Stats, TSubclassOf<class AArmorPiece> armorClass, class UObject* __WorldContext);
};

#endif
