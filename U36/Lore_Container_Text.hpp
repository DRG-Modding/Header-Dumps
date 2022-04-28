#ifndef UE4SS_SDK_Lore_Container_Text_HPP
#define UE4SS_SDK_Lore_Container_Text_HPP

class ULore_Container_Text_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar2;
    class UBasic_Window_CutCorner_C* Basic_Window;
    class URichTextBlock* RichTextBlock_Body;
    class UTextBlock* TextBlock_Headline;
    class UVerticalBox* VerticalBox_19;
    FText Headline;
    FText Text;
    FMargin TextPadding;

    void SetText(FText Headline, FText Body);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Container_Text(int32 EntryPoint);
};

#endif
