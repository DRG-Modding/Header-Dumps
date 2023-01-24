#ifndef UE4SS_SDK_Lore_Container_DamageType_HPP
#define UE4SS_SDK_Lore_Container_DamageType_HPP

class ULore_Container_DamageType_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_IconWithOutline_C* Basic_HexIcon;
    class UBasic_Window_CutCorner_C* Basic_Window;
    class URichTextSizable* RichTextSizable_Body;
    class UTextBlock* TextBlock_Headline;
    TEnumAsByte<M_IconShapes::Type> IconShape;
    FLinearColor IconTint;
    bool IconOutline;

    void SetData(FDamageTypeDescription Damage Description);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Container_DamageType(int32 EntryPoint);
};

#endif
