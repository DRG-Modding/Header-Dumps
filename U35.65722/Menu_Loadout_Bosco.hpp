#ifndef UE4SS_SDK_Menu_Loadout_Bosco_HPP
#define UE4SS_SDK_Menu_Loadout_Bosco_HPP

class UMENU_Loadout_Bosco_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_CheckBox_C* AllowBosco;
    class UMENU_UpgradeScreen_C* MENU_UpgradeScreen;
    int32 LoadAttemts;
    TSubclassOf<class APlayerCharacter> Character;

    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnShown();
    void OnClosed();
    void OneUpgradeInAllTiers(TSubclassOf<class AActor> Item);
    void BndEvt__MENU_UpgradeScreen_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature();
    void OnCloseClicked_Event_0();
    void Construct();
    void ExecuteUbergraph_MENU_Loadout_Bosco(int32 EntryPoint, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_GetBoscoAllowed_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UClass* CallFunc_LoadClass_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, TSubclassOf<class AActor> K2Node_CustomEvent_Item, FExecuteUbergraph_MENU_Loadout_BoscoK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, const bool CallFunc_PlayerOwnesUpgradeInAllTiers_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, class AFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, UClass* CallFunc_LoadClass_ReturnValue_1, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor_1, bool K2Node_ClassDynamicCast_bSuccess_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_PlayPitched_ReturnValue);
};

#endif
