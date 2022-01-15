#ifndef UE4SS_SDK_HUD_EnemyTargeting_AfflictionBox_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_AfflictionBox_HPP

class UHUD_EnemyTargeting_AfflictionBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UHorizontalBox* AfflictionBox;
    float Size;
    UPawnAfflictionComponent* AfflictionComponent;
    TMap<UPawnAffliction*, UHUD_EnemyTargeting_Affliction_C*> AfflictionWidgets;
    TArray<TSoftObjectPtr<UPawnAffliction>> PreviewAfflictions;
    TArray<UPawnAffliction*> IgnoreAfflictions;

    void SetAfflictionComponent(UPawnAfflictionComponent* InAfflictionComponent, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, AfflictionChangeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, AfflictionChangeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, const TArray<UPawnAffliction*>& CallFunc_GetActiveAfflictions_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UPawnAffliction* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, AfflictionChangeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, AfflictionChangeDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3);
    void ToggleIgnoreAfflictions(TArray<UPawnAffliction*>& Affliction, bool ShouldIgnore, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, UPawnAffliction* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void ToggleIgnoreAffliction(UPawnAffliction* Affliction, bool ShouldIgnore, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
    void ClearAfflictions();
    void ToggleAffliction(UPawnAffliction* InAffliction, bool InVisible, UHUD_EnemyTargeting_Affliction_C* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHUD_EnemyTargeting_Affliction_C* CallFunc_Create_ReturnValue, UHUD_EnemyTargeting_Affliction_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void SetTarget(AActor* InAfflictionTarget);
    void OnAfflictionActivatedEvent_Event(UPawnAffliction* Affliction);
    void OnAfflictionDeactivatedEvent_Event(UPawnAffliction* Affliction);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, AActor* K2Node_CustomEvent_InAfflictionTarget, UPawnAffliction* K2Node_CustomEvent_affliction_1, UPawnAfflictionComponent* CallFunc_GetComponentByClass_ReturnValue, UPawnAffliction* K2Node_CustomEvent_affliction, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, SoftObjectProperty CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UPawnAffliction* K2Node_DynamicCast_AsPawn_Affliction, bool K2Node_DynamicCast_bSuccess);
}

#endif
