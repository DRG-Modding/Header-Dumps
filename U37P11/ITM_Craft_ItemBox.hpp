#ifndef UE4SS_SDK_ITM_Craft_ItemBox_HPP
#define UE4SS_SDK_ITM_Craft_ItemBox_HPP

class UITM_Craft_ItemBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UImage* Arrow;
    class UBorder* BG;
    class UBorder* Border_0;
    class UBorder* Border_123;
    class UBorder* Brackets;
    class UBTN_UnlockItem_C* BTN_UnlockItem;
    class UButton* Button_1;
    class UITM_Craft_ResourceSmall_C* Cost_Fashionites;
    class UTextBlock* CostSeperator;
    class UTextBlock* DATA_ItemDescription;
    class UTextBlock* DATA_ItemName;
    class UUI_VanityEventSource_C* EventSource;
    class UITM_Craft_ItemIcon_C* ITEM_Crafting_ItemIcon;
    class UITM_ItemUnlockedIcon_C* ITM_ItemUnlockedIcon;
    class UHorizontalBox* ResourceHolder;
    class UTextBlock* Text_UsesEquippedPaintjob;
    TScriptInterface<class ICraftable> Item;
    TSubclassOf<class APlayerCharacter> Character;
    bool IsHovering;

    void RefreshCanAfford();
    void FreeRenderTarget();
    void CreateResources(TScriptInterface<class ICraftable> InItem);
    void SetCostColor();
    void SetRankRequirements();
    void SetTextAndIcon();
    void SetCanUnlock();
    void SetData(TScriptInterface<class ICraftable> Item, TSubclassOf<class APlayerCharacter> Character);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Update();
    void ExecuteUbergraph_ITM_Craft_ItemBox(int32 EntryPoint);
};

#endif
