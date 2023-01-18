#ifndef UE4SS_SDK_Lore_Content_Info_Tab_W_Icon_HPP
#define UE4SS_SDK_Lore_Content_Info_Tab_W_Icon_HPP

class ULore_Content_Info_Tab_W_Icon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_BG_Square_Outline_Flat_C* Basic_BG_Square_Outline_Flat;
    class UButton* Button_0;
    class UImage* Icon;
    class UTexture2D* Texture;
    FLore_Content_Info_Tab_W_Icon_COnClicked OnClicked;
    void OnClicked();
    bool IsSelected;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void SetSelected(bool IsSelected);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void UpdateColor();
    void ExecuteUbergraph_Lore_Content_Info_Tab_W_Icon(int32 EntryPoint);
    void OnClicked__DelegateSignature();
};

#endif
