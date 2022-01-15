#ifndef UE4SS_SDK_Lore_Container_Text_HPP
#define UE4SS_SDK_Lore_Container_Text_HPP

class ULore_Container_Text_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar2;
    UBasic_Window_CutCorner_C* Basic_Window;
    URichTextBlock* RichTextBlock_Body;
    UTextBlock* TextBlock_Headline;
    UVerticalBox* VerticalBox_19;
    FText Headline;
    FText Text;
    FMargin TextPadding;

    void SetText(FText Headline, FText Body);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Container_Text(int32 EntryPoint, FText K2Node_CustomEvent_Headline, FText K2Node_CustomEvent_Body, bool K2Node_Event_IsDesignTime, UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue);
}

#endif
