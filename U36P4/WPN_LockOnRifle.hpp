#ifndef UE4SS_SDK_WPN_LockOnRifle_HPP
#define UE4SS_SDK_WPN_LockOnRifle_HPP

class AWPN_LockOnRifle_C : public ALockOnWeapon
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* Mag_FP;
    class UStaticMeshComponent* Mag_TP;
    class USceneComponent* BeamStart;
    class UAudioComponent* LockOnRifleHUDDeActivated_Cue;
    class UAudioComponent* LockOnRifleHUDActivated_Cue;
    class UAudioComponent* LockOnRifleLocked_Cue;
    class UCrosshairAggregator* CrosshairAggregator;
    class UDamageComponent* Damage;
    class UHitscanComponent* HitScan;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    TArray<class UABP_LockOnRifle_A_C*> ABPs;
    bool WideAngle;
    bool SpeedBoost;
    TSubclassOf<class UStatusEffect> SpeedBoostSTE;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void LockingStarted_Event();
    void LockingStopped_Event();
    void CustomEvent1(const class UItemUpgrade* Event);
    void Recieve_UpdateMeshses(bool IsFirstPerson);
    void RecieveEquipped();
    void OnSkinChanged(class USkinEffect* Skin);
    void Receive_ReloadBegin();
    void Receive_ReloadEnd();
    void ExecuteUbergraph_WPN_LockOnRifle(int32 EntryPoint);
};

#endif
