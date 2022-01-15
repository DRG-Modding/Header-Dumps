#ifndef UE4SS_SDK_HUD_Grenades_HPP
#define UE4SS_SDK_HUD_Grenades_HPP

class UHUD_Grenades_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* DATA_GrenadeCount;
    UHUD_GrenadeIcon_C* HUD_GrenadeIcon;
    UUI_AdvancedLabel_C* UI_AdvancedLabel;
    UInventoryComponent* Inventory;
    AThrownGrenadeItem* GrenadeItem;
    bool LaserpointerPressed;
    bool ItemEquipped;

    void PreConstruct(bool IsDesignTime);
    void OnGrenadeCountChanged(int32 CurrentCount);
    void Construct();
    void Setup Dynamic HUD();
    void OnItemEquipped_Event(AItem* Item);
    void OnItemUnequipped_Event(AItem* Item);
    void Update Visibility();
    void OnLaserPointerPressed();
    void OnLaserPointerReleased();
    void ExecuteUbergraph_HUD_Grenades(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, GrenadesDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ItemDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, OnLaserPointerPressedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_Event_IsDesignTime, int32 K2Node_CustomEvent_CurrentCount, FText CallFunc_Conv_IntToText_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, AItem* K2Node_CustomEvent_Item_1, UThrownGrenadeItem* K2Node_DynamicCast_AsThrown_Grenade_Item, bool K2Node_DynamicCast_bSuccess, AItem* K2Node_CustomEvent_Item, UThrownGrenadeItem* K2Node_DynamicCast_AsThrown_Grenade_Item_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
}

#endif
