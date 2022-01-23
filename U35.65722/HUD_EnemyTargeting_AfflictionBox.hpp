#ifndef UE4SS_SDK_HUD_EnemyTargeting_AfflictionBox_HPP
#define UE4SS_SDK_HUD_EnemyTargeting_AfflictionBox_HPP

class UHUD_EnemyTargeting_AfflictionBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* AfflictionBox;
    float Size;
    class UPawnAfflictionComponent* AfflictionComponent;
    TMap<class UPawnAffliction*, class UHUD_EnemyTargeting_Affliction_C*> AfflictionWidgets;
    TArray<TSoftObjectPtr<UPawnAffliction>> PreviewAfflictions;
    TArray<class UPawnAffliction*> IgnoreAfflictions;

    void SetAfflictionComponent(class UPawnAfflictionComponent* InAfflictionComponent, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, FSetAfflictionComponentK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, FSetAfflictionComponentK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, const TArray<class UPawnAffliction*>& CallFunc_GetActiveAfflictions_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPawnAffliction* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, FSetAfflictionComponentK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FSetAfflictionComponentK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3);
    void ToggleIgnoreAfflictions(TArray<class UPawnAffliction*>& Affliction, bool ShouldIgnore, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPawnAffliction* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
    void ToggleIgnoreAffliction(class UPawnAffliction* Affliction, bool ShouldIgnore, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue);
    void ClearAfflictions();
    void ToggleAffliction(class UPawnAffliction* InAffliction, bool InVisible, class UHUD_EnemyTargeting_Affliction_C* Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHUD_EnemyTargeting_Affliction_C* CallFunc_Create_ReturnValue, class UHUD_EnemyTargeting_Affliction_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void SetTarget(class AActor* InAfflictionTarget);
    void OnAfflictionActivatedEvent_Event(class UPawnAffliction* Affliction);
    void OnAfflictionDeactivatedEvent_Event(class UPawnAffliction* Affliction);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_EnemyTargeting_AfflictionBox(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_CustomEvent_InAfflictionTarget, class UPawnAffliction* K2Node_CustomEvent_affliction_1, class UPawnAfflictionComponent* CallFunc_GetComponentByClass_ReturnValue, class UPawnAffliction* K2Node_CustomEvent_affliction, bool K2Node_Event_IsDesignTime, int32 CallFunc_Array_Length_ReturnValue, TSoftObjectPtr<UPawnAffliction> CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UPawnAffliction* K2Node_DynamicCast_AsPawn_Affliction, bool K2Node_DynamicCast_bSuccess);
};

#endif
