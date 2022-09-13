#ifndef UE4SS_SDK_HUD_WeaponName_HPP
#define UE4SS_SDK_HUD_WeaponName_HPP

class UHUD_WeaponName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UTextBlock* DATA_ItemCategory;
    class UTextBlock* DATA_ItemName;
    class UInvalidationBox* InvalidationBox_0;
    class APlayerCharacter* Character;

    void UpdateLabel();
    void Construct();
    void OnItemEquipped(class AItem* Item);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_WeaponName(int32 EntryPoint);
};

#endif
