#ifndef UE4SS_SDK_Menu_Loadout_Bosco_HPP
#define UE4SS_SDK_Menu_Loadout_Bosco_HPP

class UMENU_Loadout_Bosco_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_CheckBox_C* AllowBosco;
    UMENU_UpgradeScreen_C* MENU_UpgradeScreen;
    int32 LoadAttemts;
    TSubclassOf<APlayerCharacter> Character;

    void BndEvt__Basic_CheckBox_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void OnShown();
    void OnClosed();
    void OneUpgradeInAllTiers(TSubclassOf<AActor> Item);
    void BndEvt__MENU_UpgradeScreen_K2Node_ComponentBoundEvent_1_OnItemPurchased__DelegateSignature();
    void OnCloseClicked_Event_0();
    void Construct();
    void ExecuteUbergraph_MENU_Loadout_Bosco(int32 EntryPoint, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, bool CallFunc_GetBoscoAllowed_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool K2Node_ComponentBoundEvent_IsChecked, TSubclassOf<AActor> K2Node_CustomEvent_Item, OnCloseClicked__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const bool CallFunc_PlayerOwnesUpgradeInAllTiers_ReturnValue, UGameData* CallFunc_GetFSDGameData_ReturnValue, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, UFSDPlayerController* CallFunc_GetPlayerController_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue_1, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor_1, bool K2Node_ClassDynamicCast_bSuccess_1, APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UAudioComponent* CallFunc_PlayPitched_ReturnValue);
}

#endif
