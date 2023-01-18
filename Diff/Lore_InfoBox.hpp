#ifndef UE4SS_SDK_Lore_InfoBox_HPP
#define UE4SS_SDK_Lore_InfoBox_HPP

class ULore_InfoBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_BG_CutCorner_C* Basic_BG_Window_59;
    class UImage* Image_Icon;
    class UTextBlock* TextBlock_Grayed;
    class UTextBlock* TextBlock_TextBody;
    FText Text;
    FObjectiveMissionIcon Icon;
    FText GrayText;

    void SetData(FText Text, FObjectiveMissionIcon Icon, FText GrayText);
    void PreConstruct(bool IsDesignTime);
    void SetColor(FLinearColor InColorAndOpacity);
    void ExecuteUbergraph_Lore_InfoBox(int32 EntryPoint);
};

#endif
