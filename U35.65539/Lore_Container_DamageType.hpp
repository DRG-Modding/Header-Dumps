#ifndef UE4SS_SDK_Lore_Container_DamageType_HPP
#define UE4SS_SDK_Lore_Container_DamageType_HPP

class ULore_Container_DamageType_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_IconWithOutline_C* Basic_HexIcon;
    UBasic_Window_CutCorner_C* Basic_Window;
    URichTextSizable* RichTextSizable_Body;
    UTextBlock* TextBlock_Headline;
    TEnumAsByte<M_IconShapes::Type> IconShape;
    FLinearColor IconTint;
    bool IconOutline;

    void SetData(FDamageTypeDescription Damage Description);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Lore_Container_DamageType(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FDamageTypeDescription K2Node_CustomEvent_Damage_Description, bool K2Node_Event_IsDesignTime, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
}

#endif
