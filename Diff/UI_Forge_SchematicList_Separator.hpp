#ifndef UE4SS_SDK_UI_Forge_SchematicList_Separator_HPP
#define UE4SS_SDK_UI_Forge_SchematicList_Separator_HPP

class UUI_Forge_SchematicList_Separator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UTextBlock* CategoryHeader;
    FText Category;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Forge_SchematicList_Separator(int32 EntryPoint);
};

#endif
