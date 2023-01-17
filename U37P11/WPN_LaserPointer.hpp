#ifndef UE4SS_SDK_WPN_LaserPointer_HPP
#define UE4SS_SDK_WPN_LaserPointer_HPP

class AWPN_LaserPointer_C : public ALaserPointerItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonWidgetComponent* FirstPersonWidget;
    class USceneComponent* FPTransform;
    class UStaticMeshComponent* LightBeam_Cylinder;
    class USceneComponent* LightBeam;
    class UAudioComponent* LaserLight_On_Cue;
    class UCrosshairAggregator* CrosshairAggregator;
    class USceneComponent* TPTransform;
    class UHUD_LaserPointerDisplay_C* HUD;
    float Delay;
    class UMaterialInstanceDynamic* BackgroundMaterial;
    FLinearColor BackgroundDefaultColor;
    TArray<class ABP_PointOfInterest_C*> PointsOfInterest;
    class UTexture2D* PreviousPOI;
    float PreviousPOITime;
    class UAudioComponent* StartStop;
    FGuid PreviousLookAtID;
    bool ToggledVisible;

    void SetLaserBeamMaterial(class APlayerCharacter* InCharacter);
    void SetBeamVisibility(bool bNewVisibility);
    void CanPlacePOI(FVector Location, class UTexture* Icon, bool& Can Place);
    void UpdateBackgroundColor();
    void SetBackgroundColor(FLinearColor Value);
    void Adjust Beam();
    void GetPointTransform(FTransform& PointTransform);
    void UserConstructionScript();
    void RecieveUnequipped();
    void OnPointOfInterest(class AActor* TargetActor, FVector TargetLocation, class UTexture2D* TargetIcon);
    void ReceiveBeginPlay();
    void AddedToInventory(class APlayerCharacter* ItemOwner);
    void OnScanComplete();
    void OnMarkerPlaced_Event(FVector Location, const FText& Name, FLinearColor Color, class AActor* Target, ELaserPointerTargetType TypeOfTarget);
    void ToggleLaserVisible(bool aVisible);
    void RecieveEquipped();
    void OnPOIDestroyed(class AActor* DestroyedActor);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_WPN_LaserPointer(int32 EntryPoint);
};

#endif
