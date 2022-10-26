#ifndef UE4SS_SDK_TOOLTIP_MatrixCore_HPP
#define UE4SS_SDK_TOOLTIP_MatrixCore_HPP

class UTOOLTIP_MatrixCore_C : public UUserWidget
{
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UBasic_Label_C* SchematicCategory;
    class UBasic_Label_C* SchematicName;
    class UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon;

    void FromSchematic(class USchematic* InSchematic);
};

#endif
