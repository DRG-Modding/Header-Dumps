#ifndef UE4SS_SDK_ConsoleScreen_Bosco_HPP
#define UE4SS_SDK_ConsoleScreen_Bosco_HPP

class UConsoleScreen_Bosco_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* TextAnim;
    class UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    class UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    FText TextToDisplay;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void UpdateUINotification();
    void OnSkinUnlocked(class UItemSkin* Skin, class UItemID* ItemID);
    void ExecuteUbergraph_ConsoleScreen_Bosco(int32 EntryPoint);
};

#endif
