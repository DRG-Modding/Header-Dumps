#ifndef UE4SS_SDK_WPN_Crossbow_HPP
#define UE4SS_SDK_WPN_Crossbow_HPP

class AWPN_Crossbow_C : public ACrossbow
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UCrosshairAggregator* CrosshairAggregator;
    class UProjectileLauncherComponent* projectileLauncher;

    void Get Reload Stat(class AFSDPlayerState* PlayerState, FGearStatEntry& GearStatEntry);
    void GetEquippedSpecialArrow(class AFSDPlayerState* Player, TSubclassOf<class ACrossbowProjectileBase>& Projectile);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void ReceiveBeginPlay();
    void UpdateRecallProgress();
    void SetAnimatedFPMeshComponentFromBP(class AActor* animatedArrow);
    void SetAnimatedTPMeshComponentFromBP(class AActor* animatedArrow);
    void ExecuteUbergraph_WPN_Crossbow(int32 EntryPoint);
};

#endif
