#ifndef UE4SS_SDK_UI_Forge_LevelIcon_HPP
#define UE4SS_SDK_UI_Forge_LevelIcon_HPP

class UUI_Forge_LevelIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DataLevel;
    class UUI_ImageTinted_C* IconImage;
    class USizeBox* IconSize;
    float Size;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    int32 Level;
    class UTexture2D* Icon;

    void GetLevel(int32& Level);
    void SetLevelFromSchematic(class USchematic* Schematic);
    void SetLevel(int32 InLevel);
    void SetIconColor(TEnumAsByte<ENUM_MenuColors::Type> InColor);
    void SetSize(float InSize);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Forge_LevelIcon(int32 EntryPoint);
};

#endif
