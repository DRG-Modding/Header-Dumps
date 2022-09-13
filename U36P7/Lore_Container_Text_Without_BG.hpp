#ifndef UE4SS_SDK_Lore_Container_Text_Without_BG_HPP
#define UE4SS_SDK_Lore_Container_Text_Without_BG_HPP

class ULore_Container_Text_Without_BG_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class URichTextBlock* RichTextBlock_Body;
    class UTextBlock* TextBlock_Headline;
    FText Headline;
    FText Text;

    void SetText(FText Headline, FText Body);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Container_Text_Without_BG(int32 EntryPoint);
};

#endif
