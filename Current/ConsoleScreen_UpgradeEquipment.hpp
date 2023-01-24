#ifndef UE4SS_SDK_ConsoleScreen_UpgradeEquipment_HPP
#define UE4SS_SDK_ConsoleScreen_UpgradeEquipment_HPP

class UConsoleScreen_UpgradeEquipment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    FText TextToDisplay;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnItemUnlocked_Event();
    void UpdateNotification();
    void OnSkinUnlocked(class UItemSkin* Skin, class UItemID* ItemID);
    void ExecuteUbergraph_ConsoleScreen_UpgradeEquipment(int32 EntryPoint);
};

#endif
