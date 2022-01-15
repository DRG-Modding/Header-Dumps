#ifndef UE4SS_SDK_Lore_Container_Text_Without_BG_HPP
#define UE4SS_SDK_Lore_Container_Text_Without_BG_HPP

class ULore_Container_Text_Without_BG_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    URichTextBlock* RichTextBlock_Body;
    UTextBlock* TextBlock_Headline;
    FText Headline;
    FText Text;

    void SetText(FText Headline, FText Body);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Container_Text_Without_BG(int32 EntryPoint, FText K2Node_CustomEvent_Headline, FText K2Node_CustomEvent_Body, bool K2Node_Event_IsDesignTime);
}

#endif
