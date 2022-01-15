#ifndef UE4SS_SDK_Lore_InfoBox_HPP
#define UE4SS_SDK_Lore_InfoBox_HPP

class ULore_InfoBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_BG_CutCorner_C* Basic_BG_Window_59;
    UImage* Image_Icon;
    UTextBlock* TextBlock_Grayed;
    UTextBlock* TextBlock_TextBody;
    FText Text;
    FObjectiveMissionIcon Icon;
    FText GrayText;

    void SetData(FText Text, FObjectiveMissionIcon Icon, FText GrayText);
    void PreConstruct(bool IsDesignTime);
    void SetColor(FLinearColor InColorAndOpacity);
    void ExecuteUbergraph_Lore_InfoBox(int32 EntryPoint, FLinearColor K2Node_CustomEvent_InColorAndOpacity, bool K2Node_Event_IsDesignTime, FText CallFunc_TextToUpper_ReturnValue, FText K2Node_CustomEvent_Text, FObjectiveMissionIcon K2Node_CustomEvent_Icon, FText K2Node_CustomEvent_GrayText, FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
