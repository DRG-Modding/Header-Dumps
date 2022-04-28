#ifndef UE4SS_SDK_WPN_CombatShotgun_HPP
#define UE4SS_SDK_WPN_CombatShotgun_HPP

class AWPN_CombatShotgun_C : public AAutoShotgun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UDamageComponent* Damage;
    class UPointLightComponent* MuzzlePointLight;
    class UCrosshairAggregator* CrosshairAggregator;
    class UMultiHitscanComponent* MultiHitscan;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void CustomEvent1(const class UItemUpgrade* Event);
    void AddPoisonToPlatform(const FHitResult& Hit, bool alwaysPenetrate);
    void ExecuteUbergraph_WPN_CombatShotgun(int32 EntryPoint);
};

#endif
