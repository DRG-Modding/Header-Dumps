#ifndef UE4SS_SDK_BP_Electrical_Antenna_HPP
#define UE4SS_SDK_BP_Electrical_Antenna_HPP

class ABP_Electrical_Antenna_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* Mesh;
    class USceneComponent* Scene;
    class USceneComponent* DefaultSceneRoot;
    float Timeline_0_NewTrack_0_E582EA524803E9C74EB2B5B181BF700F;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_E582EA524803E9C74EB2B5B181BF700F;
    class UTimelineComponent* Timeline_0;
    bool Active;

    void OnRep_Active();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void DeactivateAnenna();
    void Retract();
    void ExecuteUbergraph_BP_Electrical_Antenna(int32 EntryPoint);
};

#endif
