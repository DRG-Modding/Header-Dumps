#ifndef UE4SS_SDK_WeaponDisplay_SentryGun_AmmoCount_HPP
#define UE4SS_SDK_WeaponDisplay_SentryGun_AmmoCount_HPP

class UWeaponDisplay_SentryGun_AmmoCount_C : public UWeaponDisplay_Base_AmmoCount_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Fire;
    class UTextBlock* AmmoCount;

    void SetSentry(class ASentryGun* SentryGun);
    void OnAmmoCountChanged(int32 AmmoCount, int32 Change);
    void Construct();
    void ExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCount(int32 EntryPoint, int32 K2Node_CustomEvent_ammoCount, int32 K2Node_CustomEvent_Change, FExecuteUbergraph_WeaponDisplay_SentryGun_AmmoCountK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FText CallFunc_Conv_IntToText_ReturnValue, class ASentryGun* K2Node_CustomEvent_SentryGun, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetAmmoLeft_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1);
};

#endif
