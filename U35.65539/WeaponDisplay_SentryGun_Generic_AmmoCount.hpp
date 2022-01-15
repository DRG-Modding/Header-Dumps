#ifndef UE4SS_SDK_WeaponDisplay_SentryGun_Generic_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_SentryGun_Generic_AmmoCount_HPP

class UWeaponDisplay_SentryGun_Generic_AmmoCount_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UTextBlock* AmmoCount;
    UImage* Image_88;
    UItemAggregator* Aggregator;

    void SetSentry(ASentryGun* SentryGun);
    void OnAmmoCountChanged(int32 AmmoCount, int32 Change);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_SentryGun_Generic_AmmoCount(int32 EntryPoint, int32 K2Node_CustomEvent_ammoCount, int32 K2Node_CustomEvent_Change, AmmoCountChangedEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, FText CallFunc_Conv_IntToText_ReturnValue, ASentryGun* K2Node_CustomEvent_SentryGun, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAmmoLeft_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1);
}

#endif
