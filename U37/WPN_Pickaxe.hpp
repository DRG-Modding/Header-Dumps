#ifndef UE4SS_SDK_WPN_Pickaxe_HPP
#define UE4SS_SDK_WPN_Pickaxe_HPP

class AWPN_Pickaxe_C : public APickaxeItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCrosshairAggregator* CrosshairAggregator;
    float NextHitTime;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void SpecialTargetDamageEffects(const FVector& ImpactPoint, const FVector& ImpactNormal);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WPN_Pickaxe(int32 EntryPoint);
};

#endif
