#ifndef UE4SS_SDK_BP_UITesting_HPP
#define UE4SS_SDK_BP_UITesting_HPP

class ABP_UITesting_C : public AFSDHUD
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;
    float Crosshair_Spin_Scale_3C06262F40B28AFF76CC83AA5B6151F5;
    TEnumAsByte<ETimelineDirection::Type> Crosshair_Spin__Direction_3C06262F40B28AFF76CC83AA5B6151F5;
    class UTimelineComponent* Crosshair Spin;
    TArray<class UWidget*> Widgets;
    class APlayerController* PlayerController;
    bool HudInitialized;
    class UFSDMainHUDWidget* HudWidget;
    TArray<class URadarPointComponent*> RadarPointsInQueue;
    class UUserWidget* Default CrossHair Widget;
    class APlayerCharacter* PlayerCharacter;
    class UUserWidget* CrossHair Widget;
    class UWindowWidget* EscMenu;
    TSubclassOf<class UFSDMainHUDWidget> MainHUDType;

    void Change Crosshair(class UUserWidget* New Crosshair, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default, class UUserWidget* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1);
    void AddWidget(TSubclassOf<class UUserWidget> Class, class UWidget*& Widget, class UUserWidget* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
    void Crosshair Spin__FinishedFunc();
    void Crosshair Spin__UpdateFunc();
    void PlayerSpawned(class APlayerCharacter* Player);
    void RadarPointAdded(class URadarPointComponent* radarPoint);
    void HandleSeamlessTravel();
    void OnVisibilityChanged();
    void Spin Crosshair();
    void OnToggleMapTool(bool Visible);
    void OnItemEquipped(class AItem* Item);
    void OnHit_Event(float Damage, class UDamageClass* DamageClass, class AActor* DamageCauser, bool anyHealthLost);
    void OnShowMainMenu();
    void ExecuteUbergraph_BP_UITesting(int32 EntryPoint, FExecuteUbergraph_BP_UITestingK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class APlayerCharacter* K2Node_Event_player, class URadarPointComponent* K2Node_Event_radarPoint, int32 CallFunc_Array_Add_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, FExecuteUbergraph_BP_UITestingK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, TSubclassOf<class UUserWidget> CallFunc_LoadWidgetClass_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UWidget* CallFunc_AddWidget_Widget, class UFSDMainHUDWidget* K2Node_DynamicCast_AsFSDMain_HUDWidget, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class UHUD_CrossHair_Basic01_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FVector2D CallFunc_MakeVector2D_ReturnValue, bool K2Node_CustomEvent_Visible, class AItem* K2Node_CustomEvent_Item, class UCrosshairAggregator* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility Temp_byte_Variable, class UUserWidget* K2Node_Select_Default, FExecuteUbergraph_BP_UITestingK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, class URadarPointComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, ESlateVisibility Temp_byte_Variable_1, class UHUD_Directional_Damage_Indicator_C* CallFunc_Create_ReturnValue_1, float K2Node_CustomEvent_Damage, class UDamageClass* K2Node_CustomEvent_damageClass, class AActor* K2Node_CustomEvent_DamageCauser, bool K2Node_CustomEvent_anyHealthLost, bool CallFunc_IsValid_ReturnValue_3, FExecuteUbergraph_BP_UITestingK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UUserWidget* CallFunc_Hit_Widget, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default_1, ESlateVisibility K2Node_Select_Default_2, TSubclassOf<class UWindowWidget> CallFunc_LoadWindowWidgetClass_ReturnValue, class UWindowWidget* CallFunc_Create_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, ESlateVisibility CallFunc_GetVisibility_ReturnValue, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

#endif
