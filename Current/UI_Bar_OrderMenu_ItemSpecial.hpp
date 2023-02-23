#ifndef UE4SS_SDK_UI_Bar_OrderMenu_ItemSpecial_HPP
#define UE4SS_SDK_UI_Bar_OrderMenu_ItemSpecial_HPP

class UUI_Bar_OrderMenu_ItemSpecial_C : public USpaceRigBarMenuItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Idle;
    class UWidgetAnimation* Click;
    class UWidgetAnimation* Hover;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UButton* BuyButton;
    class UImage* DrinkIconLeft;
    class UImage* DrinkIconRight;
    class UTextBlock* DrinkNameLabel;
    class UImage* Image_387;
    class UImage* Image_389;
    class UImage* Img_Frame;
    class UOverlay* Overlay_1;
    class UHorizontalBox* RankBox;
    class UBorder* RankHolder;
    class UImage* RankIcon;
    class UTextBlock* RankText;
    class UTextBlock* TextBlock_168;
    class UUI_Bar_DrinkCost_C* UI_Bar_DrinkCost;
    class UUI_Bar_LockWarning_C* UI_Bar_LockWarning;
    class UUI_Bar_PlayerRankWarning_C* UI_Bar_PlayerRankWarning;
    FUI_Bar_OrderMenu_ItemSpecial_COnDrinksPurchased OnDrinksPurchased;
    void OnDrinksPurchased(class UDrinkableDataAsset* Drink);
    FUI_Bar_OrderMenu_ItemSpecial_COnHover OnHover;
    void OnHover(class USpaceRigBarMenuItem* OrderItem);
    FUI_Bar_OrderMenu_ItemSpecial_COnUnhover OnUnhover;
    void OnUnhover(class USpaceRigBarMenuItem* OrderItem);
    bool Selected;
    bool CanOrder;
    FUI_Bar_OrderMenu_ItemSpecial_COnPurchaseDenied OnPurchaseDenied;
    void OnPurchaseDenied();
    FUI_Bar_OrderMenu_ItemSpecial_COnSelected OnSelected;
    void OnSelected(class USpaceRigBarMenuItem* Item);
    bool NewVar_0;
    FUI_Bar_OrderMenu_ItemSpecial_COnDrinkUnlocked OnDrinkUnlocked;
    void OnDrinkUnlocked(class UDrinkableDataAsset* Drink);
    bool AreBeersFree;

    class UDrinkableDataAsset* GetSelectedDrinkableType();
    bool HasPlayerRank();
    void GetTemporaryBuf(class UTemporaryBuff*& buff);
    void UpdateItemStatus();
    void GetBorderColor(FLinearColor& OutputColor);
    bool IsInteractable();
    void No_026492834E69A68487066993DA576F51();
    void Yes_026492834E69A68487066993DA576F51();
    void Construct();
    void OnCreditsChanged(int32 Credits);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BuyButton_K2Node_ComponentBoundEvent_115_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnPlayerProgressChanged(int32 Rank, int32 Stars);
    void Select();
    void Unselect();
    void OnHoverFinished();
    void BuyFailed();
    void TryUnlock();
    void SetDrinkable(class UDrinkableDataAsset* Drinkable);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Bar_OrderMenu_ItemSpecial(int32 EntryPoint);
    void OnDrinkUnlocked__DelegateSignature(class UDrinkableDataAsset* Drink);
    void OnSelected__DelegateSignature(class USpaceRigBarMenuItem* Item);
    void OnPurchaseDenied__DelegateSignature();
    void OnUnhover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
    void OnHover__DelegateSignature(class USpaceRigBarMenuItem* OrderItem);
    void OnDrinksPurchased__DelegateSignature(class UDrinkableDataAsset* Drink);
};

#endif
