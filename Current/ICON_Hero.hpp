#ifndef UE4SS_SDK_ICON_Hero_HPP
#define UE4SS_SDK_ICON_Hero_HPP

class UICON_Hero_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_MaskedImage_C* CharacterIcon;
    class UImage* ICON_BG;
    class UImage* Icon_Border;
    class USizeBox* IconSizeBox;
    int32 Size;
    class UPlayerCharacterID* characterID;
    TEnumAsByte<ENUM_MenuColors::Type> DefaultBorderColor;
    bool AlwaysUseDefaultBorderColor;

    void SetCharacter(class UPlayerCharacterID* InCharacterID);
    void SetSize(int32 InSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ICON_Hero(int32 EntryPoint);
};

#endif
