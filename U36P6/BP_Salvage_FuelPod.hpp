#ifndef UE4SS_SDK_BP_Salvage_FuelPod_HPP
#define UE4SS_SDK_BP_Salvage_FuelPod_HPP

class ABP_Salvage_FuelPod_C : public ASalvageFuelPod
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UTerrainScannerStaticMesh* TerrainScannerFuelConnection;
    class UTerrainScannerStaticMesh* TerrainScannerPod;
    class UWidgetComponent* WidgetActivate;
    class UChildActorComponent* FuelLineConnector;
    class UTerrainDetectComponent* TerrainDetect;
    class UDropToTerrainComponent* DropToTerrain;
    class UOxygenSourceComponent* OxygenSource;
    class UTerrainPlacementComponent* terrainPlacement;
    class UCapsuleComponent* Capsule;
    class USkeletalMeshComponent* FuelCell;
    class UAudioComponent* FuelCellCharge_Cue;
    class URadarPointComponent* radarPoint;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* DistressSphere;
    class USingleUsableComponent* UsableActivate;
    class UBoxComponent* Usable;
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UAudioComponent* Audio1;
    class UPathfinderCollisionComponent* PathfinderCollision;
    class UOutlineComponent* outline;
    class UAutoCarverComponent* AutoCarver;
    float LightIntensity;
    class UAudioComponent* DrillAudio;
    bool FuelLineConnected;
    class AFuelLineSegment* FirstFuelLineSegment;

    void UpdateDistressSphere();
    void OnDroppodImpact();
    void OnDropStarted();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void OnDefenseStart();
    void OnDefenseComplete();
    void BndEvt__SingleUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
    void OnDefenseFailed();
    void ReceiveFuelLineConnected(class AFuelLineEndPoint* InFuelLine);
    void ReceiveBeginPlay();
    void BndEvt__UsableActivate_K2Node_ComponentBoundEvent_3_UsableChangedSignature__DelegateSignature(bool CanUse);
    void SignalFuelLineStart();
    void ReceiveFuelLineStarted(bool InFuelLineStarted);
    void ReceiveFirstFuelLineSegment(class AFuelLineSegment* InFirstSegment);
    void BndEvt__DropToTerrain_K2Node_ComponentBoundEvent_1_OnIsFallingToTerrainChanged__DelegateSignature(bool IsFalling);
    void ExecuteUbergraph_BP_Salvage_FuelPod(int32 EntryPoint);
};

#endif
