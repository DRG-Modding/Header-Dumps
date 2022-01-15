#ifndef UE4SS_SDK_Lore_InfoBox_W_Icon_HPP
#define UE4SS_SDK_Lore_InfoBox_W_Icon_HPP

class ULore_InfoBox_W_Icon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_BG_CutCorner_C* Basic_BG_Window_59;
    UImage* Image_Icon;
    UTextBlock* TextBlock_TextBody;
    FText Info;

    void SetData(FText Text, UTexture2D* Icon);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_InfoBox_W_Icon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, FText K2Node_CustomEvent_Text, UTexture2D* K2Node_CustomEvent_Icon);
}

#endif
