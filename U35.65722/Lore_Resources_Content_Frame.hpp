#ifndef UE4SS_SDK_Lore_Resources_Content_Frame_HPP
#define UE4SS_SDK_Lore_Resources_Content_Frame_HPP

class ULore_Resources_Content_Frame_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Glitch;
    class UBasic_BG_CutCorner_C* Basic_BG_CutCorner;
    class UBG_Window_Outline_4px_C* BG_Window_Outline_4px;
    class UButton* Button_Outer;
    class UImage* Image_DesaturatedIcon;
    class UImage* Image_Icon;
    class UOverlay* Overlay_UnknownIcon;
    class USizeBox* SizeBox_Outer;
    class UTextBlock* TextBlock_Name;
    FMM_ResourceInfo ResourceInfo;
    FLore_Resources_Content_Frame_COnClicked OnClicked;
    void OnClicked(class ULore_Resources_Content_Frame_C* Button, FMM_ResourceInfo Resource);
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
    void ExecuteUbergraph_Lore_Resources_Content_Frame(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_CustomEvent_IsSelected, FLinearColor CallFunc_MenuColors_OutputColor, bool CallFunc_BooleanOR_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_1, bool CallFunc_IsHovered_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FLinearColor K2Node_MakeStruct_LinearColor);
    void OnClicked__DelegateSignature(class ULore_Resources_Content_Frame_C* Button, FMM_ResourceInfo Resource);
};

#endif
