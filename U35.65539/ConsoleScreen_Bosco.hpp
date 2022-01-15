#ifndef UE4SS_SDK_ConsoleScreen_Bosco_HPP
#define UE4SS_SDK_ConsoleScreen_Bosco_HPP

class UConsoleScreen_Bosco_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    FText TextToDisplay;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void UpdateUINotification();
    void OnSkinUnlocked(UItemSkin* Skin, UItemID* ItemID);
    void ExecuteUbergraph_ConsoleScreen_Bosco(int32 EntryPoint, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, SkinSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_RandomFloat_ReturnValue, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_IsInItemUINotificationSet_ReturnValue, UItemSkin* K2Node_CustomEvent_Skin, UItemID* K2Node_CustomEvent_itemID, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
}

#endif
