#ifndef UE4SS_SDK_HUD_SentryGunWidget_HPP
#define UE4SS_SDK_HUD_SentryGunWidget_HPP

class UHUD_SentryGunWidget_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AmmoDepleted;
    class UWidgetAnimation* SentryPlaced;
    class UWidgetAnimation* ShotFired;
    class UBorder* Ammo_Border;
    class UProgressBar* AmmoProgress;
    class UBasic_HUD_BracketWindowBig_Single_C* Basic_HUD_BracketWindowBig_Single;
    class UBasic_Menu_ColorBarVertical_C* Basic_Menu_ColorBarVertical;
    class UTextBlock* DATA_Ammo;
    class UTextBlock* DATA_SentryName;
    class UImage* ICON_SentryBG;
    class UImage* ICON_SentryOutline;
    class UTextBlock* StateText;
    class UVerticalBox* VerticalBox;
    class ASentryGun* SentryGun;
    class ARecallableSentryGun* RecallableActor;
    class ARecallableSentryGunItem* Item;
    int32 Index;
    class UInventoryComponent* Inventory;
    FHUD_SentryGunWidget_COnSentryStateChanged OnSentryStateChanged;
    void OnSentryStateChanged();

    void IsOutOfAmmo(bool& OutOfAmmo);
    void GetMovementState(ERecallableActorState& State);
    void Set Sentry(class ARecallableSentryGun* Sentry Gun);
    void Set Sentry Home();
    void On Ammo Count Changed(int32 AmmoCount, int32 Change);
    void Init(class UInventoryComponent* Inventory, class ARecallableSentryGunItem* Item, int32 Index);
    void OnActiveItemsChanged(class ARecallableSentryGunItem* Item);
    void OnStateChanged(class ARecallableActor* Sender, ERecallableActorState State);
    void Update State(FString reason);
    void PreConstruct(bool IsDesignTime);
    void OnSelectedItemChanged(class ARecallableSentryGun* SentryGun);
    void Set Selected(bool Is Selected);
    void OnItemEquipped(class AItem* Item);
    void OnGunStateChanged(class ARedeployableSentryGun* Sender, ERedeployableSentryGunState NewState);
    void Check For Ammo Depletion();
    void OnDeployProgress_Event(float Progress);
    void Construct();
    void OnAmmoDepletedFinished();
    void OnItemUnequipped_Event(class AItem* Item);
    void ExecuteUbergraph_HUD_SentryGunWidget(int32 EntryPoint);
    void OnSentryStateChanged__DelegateSignature();
};

#endif
