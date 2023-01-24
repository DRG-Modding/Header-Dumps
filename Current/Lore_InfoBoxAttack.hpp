#ifndef UE4SS_SDK_Lore_InfoBoxAttack_HPP
#define UE4SS_SDK_Lore_InfoBoxAttack_HPP

class ULore_InfoBoxAttack_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_BG_CutCorner_C* Basic_BG_Window_59;
    class ULore_DamageTypeIcon_C* Lore_DamageTypeIcon;
    class UTextBlock* TextBlock_Grayed;
    class UTextBlock* TextBlock_TextBody;
    FText Text;
    FDamageTypeDescription Icon;
    FText GrayText;

    void SetData(FText Text, FDamageTypeDescription Icon, FText GrayText);
    void PreConstruct(bool IsDesignTime);
    void SetColor(FLinearColor InColorAndOpacity);
    void ExecuteUbergraph_Lore_InfoBoxAttack(int32 EntryPoint);
};

#endif
