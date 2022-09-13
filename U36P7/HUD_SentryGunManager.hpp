#ifndef UE4SS_SDK_HUD_SentryGunManager_HPP
#define UE4SS_SDK_HUD_SentryGunManager_HPP

class UHUD_SentryGunManager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AmmoHolder;
    class UHUD_DefaultLabel_C* AmmoLabel;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UImage* ICON_SentryBG;
    class UImage* ICON_SentryOutline;
    class UHorizontalBox* KeyHolder;
    class UUI_AdvancedLabel_C* KeyLabel;
    class UBasic_HUD_BracketWindowBig_Single_C* RecallWindow;
    class UVerticalBox* Root;
    class UInventoryComponent* Inventory;
    class ARecallableSentryGunItem* Item;
    int32 PreviewSentryCount;
    class UHUDVisibilityGroup* VisibilityGroup;
    TArray<class UHUD_SentryGunWidget_C*> SentryWidgets;
    class APlayerCharacter* Character;
    bool LaserpointerEquipped;

    void ItemEquipped(bool& IsEquipped);
    void OutOfAmmo(bool& OutOfAmmo);
    void PreConstruct(bool IsDesignTime);
    void AddSentry(int32 Index);
    void Construct();
    void OnItemsLoaded();
    void OnActiveItemsChanged(class ARecallableSentryGunItem* Item);
    void OnItemCurrentAmountChanged(int32 Amount);
    void Update Dynamic Visibility();
    void OnSentryStateChanged_Event();
    void Setup Dynamic Visibility();
    void OnLaserPointerPressed_Event();
    void OnLaserPointerReleased_Event();
    void ExecuteUbergraph_HUD_SentryGunManager(int32 EntryPoint);
};

#endif
