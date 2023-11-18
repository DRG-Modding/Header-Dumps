#ifndef UE4SS_SDK_LIB_Game_UI_HPP
#define UE4SS_SDK_LIB_Game_UI_HPP

class ULIB_Game_UI_C : public UBlueprintFunctionLibrary
{

    void GetSkinText(class UItemSkin* InSkin, class UItemID* InOptionalItem, class UPlayerCharacterID* InOptionalCharacter, class UObject* __WorldContext, FText& Title, FText& Category, FText& Description, bool& HasOptionalCharacterID, class UPlayerCharacterID*& characterID);
    void GetRewardIcon(class UReward* Reward, class UObject* __WorldContext, class UTexture*& Icon);
    void GetRewardText(class UReward* Reward, class UObject* __WorldContext, FText& Title, FText& Category, FText& Description, bool& HasOptionalCharacterID, class UPlayerCharacterID*& characterID);
    void GetEnemyFamilyName(EEnemyFamily Family, class UObject* __WorldContext, FText& Name);
    void GetArmorTypeInfo(EArmorType Type, class UObject* __WorldContext, FText& Display Text, class UTexture2D*& Icon, FLinearColor& Color);
    void GetEnemyTypeInfo(EEnemyType Type, class UObject* __WorldContext, FText& Display Text, class UTexture2D*& Icon, FLinearColor& IconColor);
    void GetEnemyFamilyInfo(EEnemyFamily Family, class UObject* __WorldContext, FText& Name, class UTexture2D*& Icon, FLinearColor& Color);
    void GetPickaxePartLocationTitle(EPickaxePartLocation InPartLocation, bool UpperCase, bool LongName, class UObject* __WorldContext, FText& OutTitle);
    void GetVanitySlotTitle(EVanitySlot InVanitySlot, bool UpperCase, class UObject* __WorldContext, FText& OutTitle);
};

#endif
