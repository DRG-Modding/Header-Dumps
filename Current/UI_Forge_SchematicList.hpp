#ifndef UE4SS_SDK_UI_Forge_SchematicList_HPP
#define UE4SS_SDK_UI_Forge_SchematicList_HPP

class UUI_Forge_SchematicList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetSwitcher* ContentSwitcher;
    class UOverlay* EmptyOverlay;
    class UOverlay* FullOverlay;
    class UImage* Image;
    class UImage* Image_159;
    class UImage* Image_161;
    class UImage* Image_162;
    class URichTextBlock* RichTextBlock_251;
    class UVerticalBox* SchematicsBox;
    class UUI_ImageTinted_C* UI_ImageTinted;
    FUI_Forge_SchematicList_COnItemClicked OnItemClicked;
    void OnItemClicked(class UUI_Forge_Schematic_C* Item);
    TArray<class USchematic*> Schematics;
    int32 Index;
    FTimerHandle NextTimer;
    FText CurrentCategory;
    bool ShowHistory;

    void AddSeparator(FText Text);
    void PopulateList();
    void TryAddSeparator(class USchematic* InNextSchematic);
    void GetCategoryOrder(class USchematic* Schematic, int32& OutOrder, FText& OutName);
    void AddNext();
    void Refresh();
    void ItemClicked(class UUI_Forge_Schematic_C* Item);
    void AddSchematic(class USchematic* InSchematic);
    void Clear();
    void Construct();
    void ExecuteUbergraph_UI_Forge_SchematicList(int32 EntryPoint);
    void OnItemClicked__DelegateSignature(class UUI_Forge_Schematic_C* Item);
};

#endif
