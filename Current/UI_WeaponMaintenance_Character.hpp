#ifndef UE4SS_SDK_UI_WeaponMaintenance_Character_HPP
#define UE4SS_SDK_UI_WeaponMaintenance_Character_HPP

class UUI_WeaponMaintenance_Character_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* BannerBorder;
    class UICON_Hero_C* ICON_Hero;
    class UHorizontalBox* PrimaryBox;
    class UHorizontalBox* SecondaryBox;
    class UPlayerCharacterID* characterID;
    TArray<class UUI_WeaponMaintenance_Item_C*> ItemEntries;

    void SetItems(class UPanelWidget* InPanel, TArray<class UItemID*>& InItems);
    void SetCharacter(class UPlayerCharacterID* InCharacterID);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Refresh();
    void ExecuteUbergraph_UI_WeaponMaintenance_Character(int32 EntryPoint);
};

#endif
