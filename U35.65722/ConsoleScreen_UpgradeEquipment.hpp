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
    void ExecuteUbergraph_ConsoleScreen_UpgradeEquipment(int32 EntryPoint, FExecuteUbergraph_ConsoleScreen_UpgradeEquipmentK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ConsoleScreen_UpgradeEquipmentK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_ConsoleScreen_UpgradeEquipmentK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_RandomFloat_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, class UGameData* CallFunc_GetFSDGameData_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue, bool CallFunc_IsInItemUINotificationSet_ReturnValue_1, class UGameData* CallFunc_GetFSDGameData_ReturnValue_1, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_2, bool CallFunc_IsInItemUINotificationSet_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class UItemSkin* K2Node_CustomEvent_Skin, class UItemID* K2Node_CustomEvent_itemID, bool CallFunc_BooleanOR_ReturnValue_1);
};

#endif
