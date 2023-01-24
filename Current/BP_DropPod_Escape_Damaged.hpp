#ifndef UE4SS_SDK_BP_DropPod_Escape_Damaged_HPP
#define UE4SS_SDK_BP_DropPod_Escape_Damaged_HPP

class ABP_DropPod_Escape_Damaged_C : public ABP_DropPod_Escape_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* DistressLamp1;
    class UStaticMeshComponent* DistressLamp3;
    class UChildActorComponent* FuelLineConnector;
    class ULevelGenerationDebris* LevelGenerationDebris;
    class URoomCarverComponent* RoomCarver;
    class UMeshCarverComponent* DrillCarver;
    class UMeshCarverComponent* DropHoleCarver;
    class ULevelGenerationCarverComponent* LevelGenerationCarver;
    class UPointLightComponent* PointLight4_0;
    class UStaticMeshComponent* DistressLamp2;
    class UStaticMeshComponent* DistressLamp;
    float DistressLightIntensity_NewTrack_0_38EDB07D496907E74B940B9932C913EE;
    TEnumAsByte<ETimelineDirection::Type> DistressLightIntensity__Direction_38EDB07D496907E74B940B9932C913EE;
    class UTimelineComponent* DistressLightIntensity;
    float DistressLightIntensity_;

    void Handle PhotosenitivityDamagedPod();
    void DistressLightIntensity__FinishedFunc();
    void DistressLightIntensity__UpdateFunc();
    void ReceiveBeginPlay();
    void OnMuleLoaded();
    void OnMatchStarted_Event_0();
    void OnPoweringUp();
    void OnPoweredUp();
    void ExecuteUbergraph_BP_DropPod_Escape_Damaged(int32 EntryPoint);
};

#endif
