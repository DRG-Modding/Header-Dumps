#ifndef UE4SS_SDK_WeaponDisplay_Base_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_Base_AmmoCount_HPP

class UWeaponDisplay_Base_AmmoCount_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UItemAggregator* Aggregator;
    AItem* Item;
    UWidgetComponent* WidgComp;

    void SetMaxAmmo(int32 Value);
    void RequestRedraw(bool CallFunc_IsValid_ReturnValue);
    void SetTotalCount(int32 Value);
    void SetClipCount(int32 Value);
    void OnTotalAmountChanged(int32 Amount);
    void OnClipEmountChanged(int32 Amount);
    void OnCarriedAmountChanged(int32 Amount);
    void OnTotalAmountChange(int32 Amount);
    void Initialize(AItem* OwningItem, UWidgetComponent* WidgetComp);
    void OnReloadStarted();
    void OnReloadComplete();
    void Max Ammo Changed(int32 Amount);
    void Total Ammo left changed(int32 Amount);
    void Reload Time Tick(float Amount);
    void ExecuteUbergraph_WeaponDisplay_Base_AmmoCount(int32 EntryPoint, float K2Node_CustomEvent_Amount, AmountChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ReloadStartedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, ReloadCompleteSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, AmountChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_3, AmountChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_4, ReloadTimeLeftSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_5, AmountChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_6, int32 K2Node_CustomEvent_Amount_6, int32 K2Node_CustomEvent_Amount_5, int32 K2Node_CustomEvent_Amount_4, AmountChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_7, int32 K2Node_CustomEvent_Amount_3, UCapacityBasedItemAggregator* CallFunc_GetComponentByClass_ReturnValue, UClipBasedItemAggregator* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_GetTotalAmount_ReturnValue, int32 CallFunc_GetClipAmount_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetMaxAmount_ReturnValue, int32 CallFunc_GetCurrentAmount_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, AItem* K2Node_CustomEvent_OwningItem, UWidgetComponent* K2Node_CustomEvent_WidgetComp, AmountChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_8, int32 K2Node_CustomEvent_Amount_2, int32 K2Node_CustomEvent_Amount_1);
}

#endif
