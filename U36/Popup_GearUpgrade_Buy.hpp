#ifndef UE4SS_SDK_Popup_GearUpgrade_Buy_HPP
#define UE4SS_SDK_Popup_GearUpgrade_Buy_HPP

class UPopup_GearUpgrade_Buy_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* BasicWindow_Minimal;
    class UBlurBackground_C* BlurBackground;
    class UBasic_ButtonScalable2_C* BTN_No;
    class UBasic_ButtonScalable2_C* BTN_Yes;
    class UTextBlock* TEXT_Purchase;
    class UTextBlock* TEXT_UpgradeName;
    class UVerticalBox* VerticalBox_Cost;
    class UItemUpgrade* Upgrade;
    TSubclassOf<class AActor> Item;
    class AFSDPlayerState* Player;
    class UAudioComponent* ShoutAudioComponent;
    bool HasAllUpgradesForItem;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Show(TSubclassOf<class AActor> Item, class UItemUpgrade* Upgrade);
    void BndEvt__BTN_Yes_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__BTN_No_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Back();
    void Buy();
    void OnClosed();
    void ExecuteUbergraph_Popup_GearUpgrade_Buy(int32 EntryPoint);
};

#endif
