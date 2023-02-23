#ifndef UE4SS_SDK_UI_Bar_OrderMenu_Item_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_Item_HPP

class UUI_Bar_OrderMenu_Item_C : public USpaceRigBarMenuItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UBorder* Border_0;
    class UBorder* Border_101;
    class UButton* BuyButton;
    class UImage* DrinkIcon;
    class UTextBlock* DrinkNameLabel;
    class UImage* ICON_BeerLicense;
    class UCheckBox* OrderSpecialEdition;
    class USizeBox* SizeBox_3;
    class UHorizontalBox* SpecialEditionBox;
    class UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    class UUI_Bar_LockWarning_C* UI_Bar_LockWarning;
    class UUI_Bar_PlayerRankWarning_C* UI_Bar_PlayerRankWarning;
    class UUI_Bar_SupporterLabel_C* UI_Bar_SupporterLabel;
    FUI_Bar_OrderMenu_Item_COnDrinksPurchased OnDrinksPurchased;
    void OnDrinksPurchased(class UDrinkableDataAsset* Drink);
    FUI_Bar_OrderMenu_Item_COnHover OnHover;
    void OnHover(class USpaceRigBarMenuItem* OrderItem);
    FUI_Bar_OrderMenu_Item_COnUnhover OnUnhover;
    void OnUnhover(class USpaceRigBarMenuItem* OrderItem);
    bool Selected;
    bool CanOrder;
    FUI_Bar_OrderMenu_Item_COnPurchaseDenied OnPurchaseDenied;
    void OnPurchaseDenied();
    FUI_Bar_OrderMenu_Item_COnSelected OnSelected;
    void OnSelected(class USpaceRigBarMenuItem* Item);
    bool AreBeersFree;
    FUI_Bar_OrderMenu_Item_COnDrinkUnlocked OnDrinkUnlocked;
    void OnDrinkUnlocked(class UDrinkableDataAsset* Drink);
    FUI_Bar_OrderMenu_Item_COnDrinkableTypeChanged OnDrinkableTypeChanged;
    void OnDrinkableTypeChanged();

    class UDrinkableDataAsset* GetSelectedDrinkableType();
    bool AreBeersFreee();
    bool HasPlayerRank();
    void GetTemporaryBuf(class UTemporaryBuff*& buff);
    void UpdateItem();
    void GetBorderColor(FLinearColor& OutputColor);
    bool IsInteractable();
    void No_0F2CD82B4BA6006B33BED8B78B16B74B();
    void Yes_0F2CD82B4BA6006B33BED8B78B16B74B();
    void BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void OnPlayerProgressChanged(int32 Rank, int32 Stars);
    void Select();
    void Unselect();
    void OnHoverFinished();
    void BuyFailed();
    void TryUnlock();
    void OnUnlockAnimFinished_Event();
    void OnCreditsChanged(int32 Credits);
    void Construct();
    void BndEvt__UI_Bar_OrderMenu_Item_OrderSpecialEdition_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void PreConstruct(bool IsDesignTime);
    void Set Drinkable Visuals();
    void ExecuteUbergraph_UI_Bar_OrderMenu_Item(int32 EntryPoint);
    void OnDrinkableTypeChanged__DelegateSignature();
    void OnDrinkUnlocked__DelegateSignature(class UDrinkableDataAsset* Drink);
    void OnSelected__DelegateSignature(class USpaceRigBarMenuItem* Item);
    void OnPurchaseDenied__DelegateSignature();
    void OnUnhover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
    void OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
    void OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Drink);
};

#endif
