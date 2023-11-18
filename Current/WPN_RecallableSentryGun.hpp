#ifndef UE4SS_SDK_WPN_RecallableSentryGun_HPP
#define UE4SS_SDK_WPN_RecallableSentryGun_HPP

class AWPN_RecallableSentryGun_C : public ARecallableSentryGunItem
{
    FPointerToUberGraphFrame UberGraphFrame;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void SetArcIndicatorActive(bool Active);
    void ExecuteUbergraph_WPN_RecallableSentryGun(int32 EntryPoint);
};

#endif
