#ifndef UE4SS_SDK_BP_MatrixCore_Tester_HPP
#define UE4SS_SDK_BP_MatrixCore_Tester_HPP

class ABP_MatrixCore_Tester_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget;
    class UStaticMeshComponent* StaticMeshComponent0;
    float Timeline_0_NewTrack_0_FDA54F6E407E95314A1E7D9167906039;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FDA54F6E407E95314A1E7D9167906039;
    class UTimelineComponent* Timeline_0;
    class UMaterialInstanceDynamic* BlinkMat;
    class USchematic* Schematic;

    bool OnSpawnRelease_Attached(class AActor* Parent);
    bool OnSpawnRelease_Released();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_MatrixCore_Tester(int32 EntryPoint);
};

#endif
