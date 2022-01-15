#ifndef UE4SS_SDK_Lore_Resources_Content_Frame_HPP
#define UE4SS_SDK_Lore_Resources_Content_Frame_HPP

class ULore_Resources_Content_Frame_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Glitch;
    UBasic_BG_CutCorner_C* Basic_BG_CutCorner;
    UBG_Window_Outline_4px_C* BG_Window_Outline_4px;
    UButton* Button_Outer;
    UImage* Image_DesaturatedIcon;
    UImage* Image_Icon;
    UOverlay* Overlay_UnknownIcon;
    USizeBox* SizeBox_Outer;
    UTextBlock* TextBlock_Name;
    FMM_ResourceInfo ResourceInfo;
    FLore_Resources_Content_Frame_COnClicked OnClicked;
    void OnClicked(ULore_Resources_Content_Frame_C* Button, FMM_ResourceInfo Resource);
    bool IsSelected;
    bool IsUnknown;
    bool IsGlitch;
    FVector2D Size;

    void Construct();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void SetSelect(bool IsSelected);
    void SetAsUnknown();
    void UpdateOutline();
    void ExecuteUbergraph_Lore_Resources_Content_Frame(int32 EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_IsSelected, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_BooleanOR_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_IsHovered_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FLinearColor K2Node_MakeStruct_LinearColor);
    void OnClicked__DelegateSignature(ULore_Resources_Content_Frame_C* Button, FMM_ResourceInfo Resource);
}

#endif
