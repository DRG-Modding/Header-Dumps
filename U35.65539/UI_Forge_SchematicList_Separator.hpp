#ifndef UE4SS_SDK_UI_Forge_SchematicList_Separator_HPP
#define UE4SS_SDK_UI_Forge_SchematicList_Separator_HPP

class UUI_Forge_SchematicList_Separator_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UTextBlock* CategoryHeader;
    FText Category;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Forge_SchematicList_Separator(int32 EntryPoint, FText CallFunc_TextToUpper_ReturnValue, bool K2Node_Event_IsDesignTime);
}

#endif
