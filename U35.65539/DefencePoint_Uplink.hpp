#ifndef UE4SS_SDK_DefencePoint_Uplink_HPP
#define UE4SS_SDK_DefencePoint_Uplink_HPP

class ADefencePoint_Uplink_C : UDefencePointActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UChildActorComponent* ChildActor;
    UChildActorComponent* OxygenTank02;
    UChildActorComponent* OxygenTank01;
    UDropToTerrainComponent* DropToTerrain;
    UTerrainDetectComponent* TerrainDetect;
    UOxygenSourceComponent* OxygenSource;
    UPointLightComponent* PointLight2;
    UPointLightComponent* PointLight1;
    UPointLightComponent* PointLight;
    UStaticMeshComponent* UplinkScreenMesh1;
    UStaticMeshComponent* UplinkScreenMesh2;
    UBoxComponent* Uplink Collision;
    USkeletalMeshComponent* UplinkMesh;
    float Disassemble_uplink_dissassemble_8BB753934FA5061C0948A886CF6B0D73;
    TEnumAsByte<ETimelineDirection::Type> Disassemble_uplink__Direction_8BB753934FA5061C0948A886CF6B0D73;
    UTimelineComponent* Disassemble uplink;

    void Disassemble uplink__FinishedFunc();
    void Disassemble uplink__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__DefendPointUsable_K2Node_ComponentBoundEvent_0_ProgressSignature__DelegateSignature(float Progress);
    void DefenseFail();
    void DefenseStart();
    void DefenseComplete();
    void ExecuteUbergraph_DefencePoint_Uplink(int32 EntryPoint, float K2Node_ComponentBoundEvent_progress, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink, bool K2Node_DynamicCast_bSuccess, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_1, bool K2Node_DynamicCast_bSuccess_1, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_2, bool K2Node_DynamicCast_bSuccess_2, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_3, bool K2Node_DynamicCast_bSuccess_3, UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_4, bool K2Node_DynamicCast_bSuccess_4);
}

#endif
