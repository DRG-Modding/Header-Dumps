#ifndef UE4SS_SDK_UI_SaveGame_CharacterClass_HPP
#define UE4SS_SDK_UI_SaveGame_CharacterClass_HPP

class UUI_SaveGame_CharacterClass_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ClassIcon;
    class USizeBox* IconSize;
    class UITEM_SpaceRig_ClassLevel_C* ITEM_SpaceRig_ClassLevel;
    class UImage* OuterBorder;
    class UITM_RetirementBadge_C* RetirementBadge;
    TSubclassOf<class APlayerCharacter> CharacterClass;
    int32 CharacterLevel;
    int32 TimesRetired;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_SaveGame_CharacterClass(int32 EntryPoint);
};

#endif
