#ifndef UE4SS_SDK_UI_SaveGame_CharacterClass_HPP
#define UE4SS_SDK_UI_SaveGame_CharacterClass_HPP

class UUI_SaveGame_CharacterClass_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ClassIcon;
    USizeBox* IconSize;
    UITEM_SpaceRig_ClassLevel_C* ITEM_SpaceRig_ClassLevel;
    UImage* OuterBorder;
    UITM_RetirementBadge_C* RetirementBadge;
    TSubclassOf<APlayerCharacter> CharacterClass;
    int32 CharacterLevel;
    int32 TimesRetired;
    float Size;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_SaveGame_CharacterClass(int32 EntryPoint, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, UTexture2D* CallFunc_GetHeroImage_ReturnValue);
}

#endif
