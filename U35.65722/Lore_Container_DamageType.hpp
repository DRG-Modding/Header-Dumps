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
    void ExecuteUbergraph_Lore_Container_DamageType(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FDamageTypeDescription K2Node_CustomEvent_Damage_Description, bool K2Node_Event_IsDesignTime, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
};

#endif
