#ifndef UE4SS_SDK_WPN_RecallableSentryGun_HPP
#define UE4SS_SDK_WPN_RecallableSentryGun_HPP

class AWPN_RecallableSentryGun_C : public ARecallableSentryGunItem
{

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
};

#endif
