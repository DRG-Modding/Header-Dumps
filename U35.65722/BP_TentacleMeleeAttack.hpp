#ifndef UE4SS_SDK_BP_TentacleMeleeAttack_HPP
#define UE4SS_SDK_BP_TentacleMeleeAttack_HPP

class UBP_TentacleMeleeAttack_C : public UDamageAttackComponent
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveAttackTarget(class AActor* Target);
    void ExecuteUbergraph_BP_TentacleMeleeAttack(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AENE_FacilityTentacle_C* K2Node_DynamicCast_AsENE_Facility_Tentacle, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_target);
};

#endif
