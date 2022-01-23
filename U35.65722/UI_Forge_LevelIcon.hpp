#ifndef UE4SS_SDK_UI_Forge_LevelIcon_HPP
#define UE4SS_SDK_UI_Forge_LevelIcon_HPP

class UUI_Forge_LevelIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DataLevel;
    class USizeBox* IconSize;
    class UUI_ImageTinted_C* UI_ImageTinted;
    float Size;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    int32 Level;

    void GetLevel(int32& Level);
    void SetLevelFromSchematic(class USchematic* Schematic);
    void SetLevel(int32 inLevel, FText CallFunc_Conv_IntToText_ReturnValue);
    void SetIconColor(TEnumAsByte<ENUM_MenuColors::Type> InColor);
    void SetSize(float InSize, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Forge_LevelIcon(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

#endif
