#ifndef UE4SS_SDK_WPN_ZipLineGun_HPP
#define UE4SS_SDK_WPN_ZipLineGun_HPP

class AWPN_ZipLineGun_C : public AZipLineItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UPointLightComponent* PointLight;
    class USpotLightComponent* SpotLight;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UPointLightComponent* Muzzle Light;
    class UZiplineLauncherComponent* ZiplineLauncher;
    class USceneComponent* Beam;
    class UCrosshairAggregator* CrosshairAggregator;
    float debug_t;
    class UHUD_Crosshair_ZiplineGun_C* Crosshair;
    float BeamDelay;
    bool InRange;
    bool TooFar;
    bool TooClose;
    bool WeaponFired;

    void GetGrounded(bool& OutGrounded);
    FVector CalcFirstPersonMuzzleLocation();
    bool CanFireWeapon(FText& FailMsg, class UDialogDataAsset*& FailShout);
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void GetCrosshair(class UHUD_Crosshair_ZiplineGun_C*& Result);
    void Update Line Of Sight(FVector Direction, FVector End, bool DidHit);
    void Negate(float Value, float& Result);
    void Between(float Value, float Min, float Max, bool& IsBetween);
    void Can Fire(FText& FailMsg, class UDialogDataAsset*& FailShout, bool& CanShoot);
    FVector GetStartLocation();
    void LineTrace(FHitResult& OutHit, FVector& Direction, float& Distance, bool& HitAny);
    void ReceiveTick(float DeltaSeconds);
    void RecieveStopUsing();
    void RecieveEquipped();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void ReceiveBeginPlay();
    void BndEvt__CrosshairAggregator_K2Node_ComponentBoundEvent_0_CrosshairCreated__DelegateSignature(class UUserWidget* Crosshair);
    void RecieveUnequipped();
    void BndEvt__ZiplineLauncher_K2Node_ComponentBoundEvent_2_WeaponFiredDelegate__DelegateSignature(const FVector& Location);
    void ExecuteUbergraph_WPN_ZipLineGun(int32 EntryPoint);
};

#endif
