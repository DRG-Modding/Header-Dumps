#ifndef UE4SS_SDK_DefencePoint_Uplink_HPP
#define UE4SS_SDK_DefencePoint_Uplink_HPP

class ADefencePoint_Uplink_C : public ADefencePointActor_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
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
    void ExecuteUbergraph_DefencePoint_Uplink(int32 EntryPoint, float K2Node_ComponentBoundEvent_progress, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_1, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, class UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_2, bool K2Node_DynamicCast_bSuccess_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, class UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_3, bool K2Node_DynamicCast_bSuccess_3, class UAPB_Uplink_C* K2Node_DynamicCast_AsAPB_Uplink_4, bool K2Node_DynamicCast_bSuccess_4);
};

#endif
