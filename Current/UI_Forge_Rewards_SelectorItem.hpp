#ifndef UE4SS_SDK_UI_Forge_Rewards_SelectorItem_HPP
#define UE4SS_SDK_UI_Forge_Rewards_SelectorItem_HPP

class UUI_Forge_Rewards_SelectorItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimHover;
    class UITM_CharacterIcon_C* Character_Icon;
    class UButton* Item_Button;
    class UUI_GradientMasked_Image_C* Type_GradientBG;
    class UPlayerCharacterID* characterID;
    class USchematic* Schematic;
    FUI_Forge_Rewards_SelectorItem_COnClicked OnClicked;
    void OnClicked(class USchematic* InSchematic);
    FUI_Forge_Rewards_SelectorItem_COnHoverBegin OnHoverBegin;
    void OnHoverBegin();
    FUI_Forge_Rewards_SelectorItem_COnHoverEnd OnHoverEnd;
    void OnHoverEnd();

    void SetData(class UPlayerCharacterID* InCharacterID, class USchematic* InSchematic, bool& OutValidReward);
    void BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_Forge_MasteryBar_SelectorItem_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_Forge_Rewards_SelectorItem(int32 EntryPoint);
    void OnHoverEnd__DelegateSignature();
    void OnHoverBegin__DelegateSignature();
    void OnClicked__DelegateSignature(class USchematic* InSchematic);
};

#endif
