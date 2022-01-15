#ifndef UE4SS_SDK_ConsoleScreen_UpgradeEquipment_HPP
#define UE4SS_SDK_ConsoleScreen_UpgradeEquipment_HPP

class UConsoleScreen_UpgradeEquipment_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* TextAnim;
    UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate;
    UConsoleScreen_Notification_C* ConsoleScreen_Notification;
    FText TextToDisplay;

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnItemUnlocked_Event();
    void UpdateNotification();
    void OnSkinUnlocked(UItemSkin* Skin, UItemID* ItemID);
    void ExecuteUbergraph_ConsoleScreen_UpgradeEquipment(int32 EntryPoint, ItemUnlockedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ItemUINotificationDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, SkinSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_RandomFloat_ReturnValue, bool K2Node_Event_IsDesignTime, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue_1, UGameData* CallFunc_GetFSDGameData_ReturnValue_1, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, bool CallFunc_IsInItemUINotificationSet_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, UItemSkin* K2Node_CustomEvent_Skin, UItemID* K2Node_CustomEvent_itemID, bool CallFunc_BooleanOR_ReturnValue_1);
}

#endif
