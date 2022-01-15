#ifndef UE4SS_SDK_BP_HUD_HPP
#define UE4SS_SDK_BP_HUD_HPP

class ABP_HUD_C : UFSDHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* DefaultSceneRoot;
    TArray<UWidget*> Widgets;
    APlayerController* PlayerController;
    bool HudInitialized;
    UFSDMainHUDWidget* HudWidget;
    TArray<URadarPointComponent*> RadarPointsInQueue;
    APlayerCharacter* PlayerCharacter;
    UWindowWidget* EscMenu;
    UWindowWidget* CheatMenu;
    UScreenOverlay_Afflictions_C* AfflictionWidget;
    UBP_Invitation_C* InviteRequest;
    UWindowWidget* QuickCheatMenu;

    void IsInitialized(bool& Out);
    void CreateQuickCheatsIfNotCreated(TSubclassOf<UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, UWindowWidget* CallFunc_Create_ReturnValue);
    void PushEvent(UWidget* EventWidget, bool Left, UHUD_Main_C* K2Node_DynamicCast_AsHUD_Main, bool K2Node_DynamicCast_bSuccess);
    void CreateCheatsIfNotCreated(TSubclassOf<UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, UWindowWidget* CallFunc_Create_ReturnValue);
    void RemoveAllWidgetsFromParents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess);
    void AddAllWidgetToViewport(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess);
    void AddWidget(TSubclassOf<UUserWidget> Class, UWidget*& Widget, UUserWidget* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void OnLoaded_73E4B65F44516401F86CB88F7530B278(TSubclassOf<UObject> Loaded);
    void PlayerSpawned(UPlayerCharacter* Player);
    void RadarPointAdded(URadarPointComponent* radarPoint);
    void HandleSeamlessTravel();
    void OnVisibilityChanged();
    void ReceiveDestroyed();
    void CameraDroneSpawned(UPlayerCameraDrone* Drone);
    void OnEndLevelReceived_Event();
    void OnShowMainMenu();
    void LoadEscapeMenu();
    void OnHit_Event(float Damage, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    void QuickCheatMenuRequest();
    void CheatMenuRequest();
    void ExecuteUbergraph_BP_HUD(int32 EntryPoint, OnAssetClassLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate, QuickCheatMenuRequested__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ESlateVisibility Temp_byte_Variable, CheatMenuRequested__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, int32 Temp_int_Array_Index_Variable, TSubclassOf<UObject> Temp_class_Variable, int32 Temp_int_Array_Index_Variable_1, UPlayerCharacter* K2Node_Event_player, URadarPointComponent* K2Node_Event_radarPoint, int32 CallFunc_Array_Add_ReturnValue, MainMenuRequested__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetHUDVisible_ReturnValue, UPlayerCameraDrone* K2Node_Event_drone, TSubclassOf<UObject> K2Node_CustomEvent_Loaded, UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsWindowOpen_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, UWindowWidget* CallFunc_Create_ReturnValue, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, UBP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, TSubclassOf<UUserWidget> CallFunc_LoadWidgetClass_ReturnValue, UWidget* CallFunc_AddWidget_Widget, UFSDMainHUDWidget* K2Node_DynamicCast_AsFSDMain_HUDWidget, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<UUserWidget> CallFunc_LoadWidgetClass_ReturnValue_1, UWidget* CallFunc_AddWidget_Widget_1, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, UFSDMainHUDWidget* K2Node_DynamicCast_AsFSDMain_HUDWidget_1, bool K2Node_DynamicCast_bSuccess_2, UScreenOverlay_Afflictions_C* CallFunc_Create_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, URadarPointComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetHUDVisible_ReturnValue_1, bool CallFunc_IsParalyzed_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, UHUD_Directional_Damage_Indicator_C* CallFunc_Create_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_CustomEvent_Damage, UDamageClass* K2Node_CustomEvent_damageClass, AActor* K2Node_CustomEvent_DamageCauser, bool K2Node_CustomEvent_anyHealthLost, ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, UUserWidget* CallFunc_Hit_Widget, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, ReceivedEndLevelDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_BooleanAND_ReturnValue_3, bool Temp_bool_Variable_5, bool CallFunc_IsValid_ReturnValue_2, ESlateVisibility K2Node_Select_Default, UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, bool CallFunc_IsWindowOpen_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, UBP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_3, UWindowManager* CallFunc_GetWindowManager_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, UPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Not_PreBool_ReturnValue_1, UWindowManager* CallFunc_GetWindowManager_ReturnValue_5, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_Select_Default_1);
}

#endif
