#ifndef UE4SS_SDK_BP_HUD_HPP
#define UE4SS_SDK_BP_HUD_HPP

class ABP_HUD_C : public AFSDHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    TArray<class UWidget*> Widgets;
    class APlayerController* PlayerController;
    bool HudInitialized;
    class UFSDMainHUDWidget* HudWidget;
    TArray<class URadarPointComponent*> RadarPointsInQueue;
    class APlayerCharacter* PlayerCharacter;
    class UWindowWidget* EscMenu;
    class UWindowWidget* CheatMenu;
    class UScreenOverlay_Afflictions_C* AfflictionWidget;
    class UBP_Invitation_C* InviteRequest;
    class UWindowWidget* QuickCheatMenu;

    void IsInitialized(bool& Out);
    void CreateQuickCheatsIfNotCreated(TSubclassOf<class UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWindowWidget* CallFunc_Create_ReturnValue);
    void PushEvent(class UWidget* EventWidget, bool Left, class UHUD_Main_C* K2Node_DynamicCast_AsHUD_Main, bool K2Node_DynamicCast_bSuccess);
    void CreateCheatsIfNotCreated(TSubclassOf<class UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWindowWidget* CallFunc_Create_ReturnValue);
    void RemoveAllWidgetsFromParents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess);
    void AddAllWidgetToViewport(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* K2Node_DynamicCast_AsUser_Widget, bool K2Node_DynamicCast_bSuccess);
    void AddWidget(TSubclassOf<class UUserWidget> Class, class UWidget*& Widget, class UUserWidget* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void OnLoaded_73E4B65F44516401F86CB88F7530B278(UClass* Loaded);
    void PlayerSpawned(class APlayerCharacter* Player);
    void RadarPointAdded(class URadarPointComponent* radarPoint);
    void HandleSeamlessTravel();
    void OnVisibilityChanged();
    void ReceiveDestroyed();
    void CameraDroneSpawned(class APlayerCameraDrone* Drone);
    void OnEndLevelReceived_Event();
    void OnShowMainMenu();
    void LoadEscapeMenu();
    void OnHit_Event(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void QuickCheatMenuRequest();
    void CheatMenuRequest();
    void ExecuteUbergraph_BP_HUD(int32 EntryPoint, FExecuteUbergraph_BP_HUDK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_BP_HUDK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, ESlateVisibility Temp_byte_Variable, FExecuteUbergraph_BP_HUDK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, int32 Temp_int_Array_Index_Variable, UClass* Temp_class_Variable, int32 Temp_int_Array_Index_Variable_1, class APlayerCharacter* K2Node_Event_player, class URadarPointComponent* K2Node_Event_radarPoint, int32 CallFunc_Array_Add_ReturnValue, FExecuteUbergraph_BP_HUDK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GetHUDVisible_ReturnValue, class APlayerCameraDrone* K2Node_Event_drone, UClass* K2Node_CustomEvent_Loaded, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, bool CallFunc_IsWindowOpen_ReturnValue, bool CallFunc_IsValid_ReturnValue, TSubclassOf<class UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, class UWindowWidget* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, TSubclassOf<class UUserWidget> CallFunc_LoadWidgetClass_ReturnValue, class UWidget* CallFunc_AddWidget_Widget, class UFSDMainHUDWidget* K2Node_DynamicCast_AsFSDMain_HUDWidget, bool K2Node_DynamicCast_bSuccess_1, TSubclassOf<class UUserWidget> CallFunc_LoadWidgetClass_ReturnValue_1, class UWidget* CallFunc_AddWidget_Widget_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UFSDMainHUDWidget* K2Node_DynamicCast_AsFSDMain_HUDWidget_1, bool K2Node_DynamicCast_bSuccess_2, class UScreenOverlay_Afflictions_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, class URadarPointComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetHUDVisible_ReturnValue_1, bool CallFunc_IsParalyzed_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UHUD_Directional_Damage_Indicator_C* CallFunc_Create_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float K2Node_CustomEvent_Damage, class UDamageClass* K2Node_CustomEvent_damageClass, class AActor* K2Node_CustomEvent_DamageCauser, bool K2Node_CustomEvent_anyHealthLost, ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UUserWidget* CallFunc_Hit_Widget, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, FExecuteUbergraph_BP_HUDK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_BooleanAND_ReturnValue_3, bool Temp_bool_Variable_5, bool CallFunc_IsValid_ReturnValue_2, ESlateVisibility K2Node_Select_Default, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_2, bool CallFunc_IsWindowOpen_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_3, class UFSDCheatManager* CallFunc_GetCheatManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_3, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_4, class AFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Not_PreBool_ReturnValue_1, class UWindowManager* CallFunc_GetWindowManager_ReturnValue_5, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_Select_Default_1);
};

#endif
