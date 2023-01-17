#ifndef UE4SS_SDK_WND_Crafting_Unlock_HPP
#define UE4SS_SDK_WND_Crafting_Unlock_HPP

class UWND_Crafting_Unlock_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* SwitchToEquip;
    class UBorder* Border;
    class UBorder* Border_0;
    class UBorder* Border_1;
    class UBasic_FlatButton_C* BTN_BuyWithFashionite;
    class UBasic_FlatButton_C* BTN_BuyWithResources;
    class UBasic_ButtonScalable2_C* BTN_Cancel;
    class UBasic_ButtonScalable2_C* BTN_EquipNo;
    class UBasic_ButtonScalable2_C* BTN_EquipYes;
    class UWidgetSwitcher* ContentSwitcher;
    class UBasic_Label_C* DATA_ItemName;
    class UITM_Craft_ResourceSmall_C* FashioniteCost;
    class UHorizontalBox* HorizontalBoxResources;
    class UITM_Craft_ItemIcon_C* ITM_Craft_ItemIcon;
    class UITM_Craft_ResourceSmall_C* ResourceCost;
    class UTextBlock* TXT_Purchase;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_ImageTinted_C* UI_ImageTinted_1;
    TScriptInterface<class ICraftable> Item;
    class AFSDPlayerState* Player;
    class UAudioComponent* ShoutAudioComponent;
    TSubclassOf<class APlayerCharacter> Character;

    bool ReceiveCanCloseWindow(FName InActionName, FKey InKey, bool InIsMouseEvent);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void CreateResources();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BuyWithResources();
    void Cancel();
    void Show(TScriptInterface<class ICraftable> Item, class AFSDPlayerState* Player, TSubclassOf<class APlayerCharacter> Character);
    void PreConstruct(bool IsDesignTime);
    void Close();
    void BndEvt__BTN_BuyWithResources_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
    void BndEvt__BTN_BuyWithFashionite_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UBasic_FlatButton_C* Button);
    void BndEvt__BTN_Cancel_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Equip();
    void BuyWithFashionite();
    void ExecuteUbergraph_WND_Crafting_Unlock(int32 EntryPoint);
};

#endif
