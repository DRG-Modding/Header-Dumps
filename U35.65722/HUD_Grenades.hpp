#ifndef UE4SS_SDK_HUD_Grenades_HPP
#define UE4SS_SDK_HUD_Grenades_HPP

class UHUD_Grenades_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* DATA_GrenadeCount;
    class UHUD_GrenadeIcon_C* HUD_GrenadeIcon;
    class UUI_AdvancedLabel_C* UI_AdvancedLabel;
    class UInventoryComponent* Inventory;
    class AThrownGrenadeItem* GrenadeItem;
    bool LaserpointerPressed;
    bool ItemEquipped;

    void PreConstruct(bool IsDesignTime);
    void OnGrenadeCountChanged(int32 CurrentCount);
    void Construct();
    void Setup Dynamic HUD();
    void OnItemEquipped_Event(class AItem* Item);
    void OnItemUnequipped_Event(class AItem* Item);
    void Update Visibility();
    void OnLaserPointerPressed();
    void OnLaserPointerReleased();
    void ExecuteUbergraph_HUD_Grenades(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, FExecuteUbergraph_HUD_GrenadesK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_HUD_GrenadesK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_HUD_GrenadesK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_HUD_GrenadesK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_HUD_GrenadesK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_CurrentCount, FText CallFunc_Conv_IntToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, class AItem* K2Node_CustomEvent_Item_1, class AThrownGrenadeItem* K2Node_DynamicCast_AsThrown_Grenade_Item, bool K2Node_DynamicCast_bSuccess, class AItem* K2Node_CustomEvent_Item, class AThrownGrenadeItem* K2Node_DynamicCast_AsThrown_Grenade_Item_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
};

#endif
