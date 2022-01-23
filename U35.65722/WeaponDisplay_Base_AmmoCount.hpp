#ifndef UE4SS_SDK_WeaponDisplay_Base_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_Base_AmmoCount_HPP

class UWeaponDisplay_Base_AmmoCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UItemAggregator* Aggregator;
    class AItem* Item;
    class UWidgetComponent* WidgComp;

    void SetMaxAmmo(int32 Value);
    void RequestRedraw(bool CallFunc_IsValid_ReturnValue);
    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void OnTotalAmountChanged(int32 Amount);
    void OnClipEmountChanged(int32 Amount);
    void OnCarriedAmountChanged(int32 Amount);
    void OnTotalAmountChange(int32 Amount);
    void Initialize(class AItem* OwningItem, class UWidgetComponent* WidgetComp);
    void OnReloadStarted();
    void OnReloadComplete();
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void Reload Time Tick(float Amount);
    void ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int32 EntryPoint, float K2Node_CustomEvent_Amount, FExecuteUbergraph_WeaponDisplay_Base_AmmoCountK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_WeaponDisplay_Base_AmmoCountK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_WeaponDisplay_Base_AmmoCountK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, FExecuteUbergraph_WeaponDisplay_Base_AmmoCountK2Node_CreateDelegate_OutputDelegate_3 K2Node_CreateDelegate_OutputDelegate_3, FExecuteUbergraph_WeaponDisplay_Base_AmmoCountK2Node_CreateDelegate_OutputDelegate_4 K2Node_CreateDelegate_OutputDelegate_4, FExecuteUbergraph_WeaponDisplay_Base_AmmoCountK2Node_CreateDelegate_OutputDelegate_5 K2Node_CreateDelegate_OutputDelegate_5, FExecuteUbergraph_WeaponDisplay_Base_AmmoCountK2Node_CreateDelegate_OutputDelegate_6 K2Node_CreateDelegate_OutputDelegate_6, int32 K2Node_CustomEvent_Amount_6, int32 K2Node_CustomEvent_Amount_5, int32 K2Node_CustomEvent_Amount_4, FExecuteUbergraph_WeaponDisplay_Base_AmmoCountK2Node_CreateDelegate_OutputDelegate_7 K2Node_CreateDelegate_OutputDelegate_7, int32 K2Node_CustomEvent_Amount_3, class UCapacityBasedItemAggregator* CallFunc_GetComponentByClass_ReturnValue, class UClipBasedItemAggregator* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_GetTotalAmount_ReturnValue, int32 CallFunc_GetClipAmount_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetMaxAmount_ReturnValue, int32 CallFunc_GetCurrentAmount_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AItem* K2Node_CustomEvent_OwningItem, class UWidgetComponent* K2Node_CustomEvent_WidgetComp, FExecuteUbergraph_WeaponDisplay_Base_AmmoCountK2Node_CreateDelegate_OutputDelegate_8 K2Node_CreateDelegate_OutputDelegate_8, int32 K2Node_CustomEvent_Amount_2, int32 K2Node_CustomEvent_Amount_1);
};

#endif
