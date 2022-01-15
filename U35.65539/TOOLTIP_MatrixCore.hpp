#ifndef UE4SS_SDK_TOOLTIP_MatrixCore_HPP
#define UE4SS_SDK_TOOLTIP_MatrixCore_HPP

class UTOOLTIP_MatrixCore_C : UUserWidget
{
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UBasic_Label_C* SchematicCategory;
    UBasic_Label_C* SchematicName;
    UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon;

    void FromSchematic(USchematic* InSchematic, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_GetTitle_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
}

#endif
