#ifndef UE4SS_SDK_DefencePoint_Uplink_HPP
#define UE4SS_SDK_DefencePoint_Uplink_HPP

class ADefencePoint_Uplink_C : public ADefencePointActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTerrainDetectComponent* TerrainDetect3;
    class UTerrainDetectComponent* TerrainDetect2;
    class UTerrainDetectComponent* TerrainDetect1;
    class UChildActorComponent* ChildActor;
    class UChildActorComponent* OxygenTank02;
    class UChildActorComponent* OxygenTank01;
    class UDropToTerrainComponent* DropToTerrain;
    class UTerrainDetectComponent* TerrainDetect;
    class UOxygenSourceComponent* OxygenSource;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* PointLight;
    class UStaticMeshComponent* UplinkScreenMesh1;
    class UStaticMeshComponent* UplinkScreenMesh2;
    class UBoxComponent* Uplink Collision;
    class USkeletalMeshComponent* UplinkMesh;
    float Disassemble_uplink_dissassemble_8BB753934FA5061C0948A886CF6B0D73;
    TEnumAsByte<ETimelineDirection::Type> Disassemble_uplink__Direction_8BB753934FA5061C0948A886CF6B0D73;
    class UTimelineComponent* Disassemble uplink;

    void Disassemble uplink__FinishedFunc();
    void Disassemble uplink__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__DefendPointUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
    void DefenseFail();
    void DefenseStart();
    void DefenseComplete();
    void ExecuteUbergraph_DefencePoint_Uplink(int32 EntryPoint);
};

#endif
