#ifndef UE4SS_SDK_WPN_GrapplingGun_HPP
#define UE4SS_SDK_WPN_GrapplingGun_HPP

class AWPN_GrapplingGun_C : public AGrapplingHookGun
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFSDAudioComponent* AudioMoving;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UFirstPersonWidgetComponent* CoolDownWidgetFirstPerson;
    class UCrosshairAggregator* CrosshairAggregator;
    class USkeletalMeshComponent* Projectile;
    class USceneComponent* TP_Muzzle;
    class USceneComponent* FP_Muzzle;
    class UCableComponent* Cable;
    float ProjectileMovement_Lerp_t_87ACE2EC4276B8AA3B88169B28949E3A;
    TEnumAsByte<ETimelineDirection::Type> ProjectileMovement__Direction_87ACE2EC4276B8AA3B88169B28949E3A;
    class UTimelineComponent* ProjectileMovement;
    FRotator PullRotation;
    class UHUD_CroNew_GrapplingGun_C* Crosshair;
    float LastFailMessageTime;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    FTransform GetCableTransform();
    void SetCableEndPoint(FVector Location);
    void GetCableParent(class USceneComponent*& Muzzle);
    void ToggleCable(bool bNewVisibility);
    void GetAimView(FVector& Location, FVector& Forward);
    void UserConstructionScript();
    void ProjectileMovement__FinishedFunc();
    void ProjectileMovement__UpdateFunc();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void ReceiveBeginPlay();
    void RecieveCycledItem();
    void Gunsling();
    void OnGrappleUpdate(float DeltaSeconds);
    void OnGrappleStart();
    void OnGrappleEnd();
    void OnGrappleFailed(bool TooFar);
    void ExecuteUbergraph_WPN_GrapplingGun(int32 EntryPoint);
};

#endif
